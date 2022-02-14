
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct gfs2_holder {int dummy; } ;
struct TYPE_6__ {scalar_t__ ar_spectator; } ;
struct TYPE_5__ {int ls_jid; scalar_t__ ls_first; } ;
struct gfs2_sbd {unsigned int sd_journals; int sd_jindex; struct gfs2_holder sd_journal_gh; TYPE_3__ sd_args; struct gfs2_holder sd_jinode_gh; int sd_flags; struct gfs2_jdesc* sd_jdesc; TYPE_2__ sd_lockstruct; int sd_log_blks_free; TYPE_1__* sd_master_dir; } ;
struct gfs2_jdesc {int jd_blocks; int jd_jid; int jd_inode; } ;
struct gfs2_inode {int i_gl; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct gfs2_sbd*,struct gfs2_jdesc*) ;
 int FUNC_6 (struct gfs2_sbd*,char*,...) ;
 int FUNC_7 (struct gfs2_holder*) ;
 int FUNC_8 (int ,int ,int,struct gfs2_holder*) ;
 int FUNC_9 (struct gfs2_sbd*,unsigned int,int *,int ,int,struct gfs2_holder*) ;
 int FUNC_10 (struct gfs2_jdesc*) ;
 void* FUNC_11 (struct gfs2_sbd*,unsigned int) ;
 int FUNC_12 (struct gfs2_sbd*) ;
 int FUNC_13 (struct gfs2_sbd*,struct gfs2_holder*) ;
 int FUNC_14 (struct gfs2_sbd*) ;
 int VAR_7 ;
 int FUNC_15 (struct inode*,char*) ;
 int FUNC_16 (struct gfs2_sbd*) ;
 int FUNC_17 (struct gfs2_jdesc*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct gfs2_sbd*) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (struct gfs2_sbd*,int ) ;

__attribute__((used)) static int FUNC_22(struct gfs2_sbd *VAR_8, int VAR_9)
{
 struct inode *VAR_10 = VAR_8->sd_master_dir->d_inode;
 struct gfs2_holder VAR_11;
 struct gfs2_inode *VAR_12;
 int VAR_13 = 1;
 int VAR_14 = 0;

 if (VAR_9) {
  VAR_13 = 0;
  goto fail_jinode_gh;
 }

 VAR_8->sd_jindex = FUNC_15(VAR_10, "jindex");
 if (FUNC_1(VAR_8->sd_jindex)) {
  FUNC_6(VAR_8, "can't lookup journal index: %d\n", VAR_14);
  return FUNC_2(VAR_8->sd_jindex);
 }



 VAR_14 = FUNC_13(VAR_8, &VAR_11);
 if (VAR_14) {
  FUNC_6(VAR_8, "can't read journal index: %d\n", VAR_14);
  goto fail;
 }

 VAR_14 = -VAR_0;
 if (!FUNC_14(VAR_8)) {
  FUNC_6(VAR_8, "no journals!\n");
  goto fail_jindex;
 }

 if (VAR_8->sd_args.ar_spectator) {
  VAR_8->sd_jdesc = FUNC_11(VAR_8, 0);
  FUNC_4(&VAR_8->sd_log_blks_free, VAR_8->sd_jdesc->jd_blocks);
 } else {
  if (VAR_8->sd_lockstruct.ls_jid >= FUNC_14(VAR_8)) {
   FUNC_6(VAR_8, "can't mount journal #%u\n",
          VAR_8->sd_lockstruct.ls_jid);
   FUNC_6(VAR_8, "there are only %u journals (0 - %u)\n",
          FUNC_14(VAR_8),
          FUNC_14(VAR_8) - 1);
   goto fail_jindex;
  }
  VAR_8->sd_jdesc = FUNC_11(VAR_8, VAR_8->sd_lockstruct.ls_jid);

  VAR_14 = FUNC_9(VAR_8, VAR_8->sd_lockstruct.ls_jid,
       &VAR_7,
       VAR_4, VAR_3,
       &VAR_8->sd_journal_gh);
  if (VAR_14) {
   FUNC_6(VAR_8, "can't acquire journal glock: %d\n", VAR_14);
   goto fail_jindex;
  }

  VAR_12 = FUNC_0(VAR_8->sd_jdesc->jd_inode);
  VAR_14 = FUNC_8(VAR_12->i_gl, VAR_5,
        VAR_3 | VAR_1 | VAR_2,
        &VAR_8->sd_jinode_gh);
  if (VAR_14) {
   FUNC_6(VAR_8, "can't acquire journal inode glock: %d\n",
          VAR_14);
   goto fail_journal_gh;
  }

  VAR_14 = FUNC_10(VAR_8->sd_jdesc);
  if (VAR_14) {
   FUNC_6(VAR_8, "my journal (%u) is bad: %d\n",
          VAR_8->sd_jdesc->jd_jid, VAR_14);
   goto fail_jinode_gh;
  }
  FUNC_4(&VAR_8->sd_log_blks_free, VAR_8->sd_jdesc->jd_blocks);


  FUNC_19(VAR_8);
 }
 FUNC_21(VAR_8, FUNC_3(&VAR_8->sd_log_blks_free));

 if (VAR_8->sd_lockstruct.ls_first) {
  unsigned int VAR_15;
  for (VAR_15 = 0; VAR_15 < VAR_8->sd_journals; VAR_15++) {
   struct gfs2_jdesc *VAR_16 = FUNC_11(VAR_8, VAR_15);

   if (VAR_8->sd_args.ar_spectator) {
    VAR_14 = FUNC_5(VAR_8, VAR_16);
    if (VAR_14)
     goto fail_jinode_gh;
    continue;
   }
   VAR_14 = FUNC_17(VAR_16);
   if (VAR_14) {
    FUNC_6(VAR_8, "error recovering journal %u: %d\n",
           VAR_15, VAR_14);
    goto fail_jinode_gh;
   }
  }

  FUNC_16(VAR_8);
 } else if (!VAR_8->sd_args.ar_spectator) {
  VAR_14 = FUNC_17(VAR_8->sd_jdesc);
  if (VAR_14) {
   FUNC_6(VAR_8, "error recovering my journal: %d\n", VAR_14);
   goto fail_jinode_gh;
  }
 }

 FUNC_20(VAR_6, &VAR_8->sd_flags);
 FUNC_7(&VAR_11);
 VAR_13 = 0;

 return 0;

fail_jinode_gh:
 if (!VAR_8->sd_args.ar_spectator)
  FUNC_7(&VAR_8->sd_jinode_gh);
fail_journal_gh:
 if (!VAR_8->sd_args.ar_spectator)
  FUNC_7(&VAR_8->sd_journal_gh);
fail_jindex:
 FUNC_12(VAR_8);
 if (VAR_13)
  FUNC_7(&VAR_11);
fail:
 FUNC_18(VAR_8->sd_jindex);
 return VAR_14;
}
