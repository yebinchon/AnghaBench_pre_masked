
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_5__ {TYPE_2__* ip; } ;
struct tblock {int xflag; int flag; TYPE_1__ u; scalar_t__ last; scalar_t__ next; int logtid; } ;
struct super_block {int dummy; } ;
struct lrd {scalar_t__ length; int type; scalar_t__ backchain; int logtid; } ;
struct jfs_log {int dummy; } ;
struct jfs_inode_info {scalar_t__ blid; scalar_t__ bxflag; int anon_inode_list; scalar_t__ atltail; scalar_t__ atlhead; } ;
struct inode {scalar_t__ i_ino; struct super_block* i_sb; } ;
struct commit {int nip; struct inode** iplist; struct lrd lrd; struct jfs_log* log; int tid; struct super_block* sb; } ;
typedef scalar_t__ ino_t ;
struct TYPE_8__ {struct jfs_log* log; } ;
struct TYPE_7__ {scalar_t__ next; } ;
struct TYPE_6__ {int i_state; scalar_t__ i_nlink; int i_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct jfs_inode_info* FUNC_1 (struct inode*) ;
 TYPE_4__* FUNC_2 (struct super_block*) ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct inode*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct inode*) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (char*,int ,int) ;
 TYPE_3__* FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct jfs_log*,struct tblock*) ;
 int FUNC_15 (struct jfs_log*,struct tblock*,struct lrd*,int *) ;
 int VAR_9 ;
 int FUNC_16 (int ,TYPE_2__*) ;
 struct tblock* FUNC_17 (int ) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (struct super_block*,int ) ;
 int FUNC_20 (struct tblock*) ;
 int FUNC_21 (struct jfs_log*,struct tblock*,struct commit*) ;
 int FUNC_22 (struct tblock*) ;
 int FUNC_23 (struct tblock*) ;
 int FUNC_24 (struct tblock*) ;

int FUNC_25(tid_t VAR_10,
      int VAR_11,
      struct inode **VAR_12,
      int VAR_13)
{
 int VAR_14 = 0;
 struct commit VAR_15;
 struct jfs_log *VAR_16;
 struct tblock *VAR_17;
 struct lrd *VAR_18;
 int VAR_19;
 struct inode *VAR_20;
 struct jfs_inode_info *VAR_21;
 int VAR_22, VAR_23;
 ino_t VAR_24;
 struct super_block *VAR_25;

 FUNC_11("txCommit, tid = %d, flag = %d", VAR_10, VAR_13);

 if (FUNC_10(VAR_12[0])) {
  VAR_14 = -VAR_6;
  goto TheEnd;
 }

 VAR_25 = VAR_15.sb = VAR_12[0]->i_sb;
 VAR_15.tid = VAR_10;

 if (VAR_10 == 0)
  VAR_10 = FUNC_19(VAR_25, 0);
 VAR_17 = FUNC_17(VAR_10);




 VAR_16 = FUNC_2(VAR_25)->log;
 VAR_15.log = VAR_16;


 VAR_18 = &VAR_15.lrd;
 VAR_18->logtid = FUNC_8(VAR_17->logtid);
 VAR_18->backchain = 0;

 VAR_17->xflag |= VAR_13;

 if ((VAR_13 & (VAR_2 | VAR_5)) == 0)
  VAR_17->xflag |= VAR_3;
 VAR_15.iplist = VAR_12;
 VAR_15.nip = VAR_11;
 for (VAR_22 = 0; VAR_22 < VAR_15.nip; VAR_22++) {
  VAR_24 = (VAR_15.iplist[VAR_22])->i_ino;
  for (VAR_23 = VAR_22 + 1; VAR_23 < VAR_15.nip; VAR_23++) {
   VAR_20 = VAR_15.iplist[VAR_23];
   if (VAR_20->i_ino > VAR_24) {
    VAR_24 = VAR_20->i_ino;
    VAR_15.iplist[VAR_23] = VAR_15.iplist[VAR_22];
    VAR_15.iplist[VAR_22] = VAR_20;
   }
  }

  VAR_20 = VAR_15.iplist[VAR_22];
  VAR_21 = FUNC_1(VAR_20);
  FUNC_6(VAR_1, VAR_20);


  if (VAR_21->atlhead) {
   FUNC_12(VAR_21->atltail)->next = VAR_17->next;
   VAR_17->next = VAR_21->atlhead;
   if (!VAR_17->last)
    VAR_17->last = VAR_21->atltail;
   VAR_21->atlhead = VAR_21->atltail = 0;
   FUNC_3();
   FUNC_13(&VAR_21->anon_inode_list);
   FUNC_4();
  }





  if (((VAR_14 = FUNC_9(VAR_10, VAR_20))))
   goto out;
 }






 if ((VAR_14 = FUNC_21(VAR_16, VAR_17, &VAR_15)))
  goto TheEnd;





 if (VAR_17->xflag & VAR_0) {
  FUNC_5(&VAR_17->u.ip->i_count);
  if (VAR_17->u.ip->i_state & VAR_7)
   VAR_17->xflag &= ~VAR_3;
 }

 FUNC_0((!(VAR_17->xflag & VAR_0)) ||
        ((VAR_17->u.ip->i_nlink == 0) &&
  !FUNC_16(VAR_4, VAR_17->u.ip)));




 VAR_18->type = FUNC_7(VAR_8);
 VAR_18->length = 0;
 VAR_19 = FUNC_15(VAR_16, VAR_17, VAR_18, ((void*)0));

 FUNC_14(VAR_16, VAR_17);
 if (VAR_13 & VAR_2)
  FUNC_20(VAR_17);
 if (VAR_17->xflag & VAR_2)
  FUNC_24(VAR_17);




 FUNC_22(VAR_17);

 if ((VAR_17->flag & VAR_9) == 0)
  FUNC_23(VAR_17);





 for (VAR_22 = 0; VAR_22 < VAR_15.nip; VAR_22++) {
  VAR_20 = VAR_15.iplist[VAR_22];
  VAR_21 = FUNC_1(VAR_20);




  VAR_21->bxflag = 0;
  VAR_21->blid = 0;
 }

      out:
 if (VAR_14 != 0)
  FUNC_18(VAR_10, 1);

      TheEnd:
 FUNC_11("txCommit: tid = %d, returning %d", VAR_10, VAR_14);
 return VAR_14;
}
