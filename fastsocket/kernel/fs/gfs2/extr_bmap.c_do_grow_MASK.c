
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct TYPE_5__ {scalar_t__ ar_quota; } ;
struct TYPE_4__ {int sb_bsize; } ;
struct gfs2_sbd {TYPE_2__ sd_args; TYPE_1__ sd_sb; scalar_t__ sd_max_height; } ;
struct TYPE_6__ {int i_ctime; int i_mtime; } ;
struct gfs2_inode {int i_gl; TYPE_3__ i_inode; } ;
struct gfs2_dinode {int dummy; } ;
struct gfs2_alloc_parms {scalar_t__ target; } ;
struct buffer_head {int b_data; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_1 ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct gfs2_inode*,int ) ;
 int FUNC_4 (struct gfs2_inode*) ;
 int FUNC_5 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 scalar_t__ FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_8 (struct gfs2_inode*) ;
 int FUNC_9 (struct gfs2_inode*) ;
 int FUNC_10 (int ,struct buffer_head*) ;
 int FUNC_11 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_12 (struct gfs2_sbd*) ;
 int FUNC_13 (struct gfs2_inode*,int *) ;
 int FUNC_14 (struct inode*,int) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_7, u64 VAR_8)
{
 struct gfs2_inode *VAR_9 = FUNC_0(VAR_7);
 struct gfs2_sbd *VAR_10 = FUNC_1(VAR_7);
 struct gfs2_alloc_parms VAR_11 = { .target = VAR_10->sd_max_height + VAR_2, };
 struct buffer_head *VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 if (FUNC_6(VAR_9) &&
     (VAR_8 > (VAR_10->sd_sb.sb_bsize - sizeof(struct gfs2_dinode)))) {
  VAR_13 = FUNC_8(VAR_9);
  if (VAR_13)
   return VAR_13;

  VAR_13 = FUNC_5(VAR_9, &VAR_11);
  if (VAR_13)
   goto do_grow_qunlock;
  VAR_14 = 1;
 }

 VAR_13 = FUNC_11(VAR_10, VAR_3 + VAR_6 + VAR_5 +
     (VAR_10->sd_args.ar_quota == VAR_1 ?
      0 : VAR_4), 0);
 if (VAR_13)
  goto do_grow_release;

 if (VAR_14) {
  VAR_13 = FUNC_13(VAR_9, ((void*)0));
  if (VAR_13)
   goto do_end_trans;
 }

 VAR_13 = FUNC_7(VAR_9, &VAR_12);
 if (VAR_13)
  goto do_end_trans;

 FUNC_14(VAR_7, VAR_8);
 VAR_9->i_inode.i_mtime = VAR_9->i_inode.i_ctime = VAR_0;
 FUNC_10(VAR_9->i_gl, VAR_12);
 FUNC_3(VAR_9, VAR_12->b_data);
 FUNC_2(VAR_12);

do_end_trans:
 FUNC_12(VAR_10);
do_grow_release:
 if (VAR_14) {
  FUNC_4(VAR_9);
do_grow_qunlock:
  FUNC_9(VAR_9);
 }
 return VAR_13;
}
