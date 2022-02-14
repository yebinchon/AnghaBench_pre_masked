
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_fattr {int valid; int pre_size; int pre_mtime; int pre_ctime; int pre_change_attr; } ;
struct inode {int i_lock; int i_mtime; int i_ctime; } ;
struct TYPE_2__ {int change_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct inode*,struct nfs_fattr*) ;
 int FUNC_4 (struct inode*,struct nfs_fattr*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct inode *VAR_9, struct nfs_fattr *VAR_10)
{
 int VAR_11;

 FUNC_5(&VAR_9->i_lock);

 if ((VAR_10->valid & VAR_0) == 0 ||
   !FUNC_3(VAR_9, VAR_10)) {
  VAR_10->valid &= ~(VAR_4
    | VAR_7
    | VAR_6
    | VAR_5);
  goto out_noforce;
 }
 if ((VAR_10->valid & VAR_1) != 0 &&
   (VAR_10->valid & VAR_4) == 0) {
  VAR_10->pre_change_attr = FUNC_0(VAR_9)->change_attr;
  VAR_10->valid |= VAR_4;
 }
 if ((VAR_10->valid & VAR_2) != 0 &&
   (VAR_10->valid & VAR_5) == 0) {
  FUNC_2(&VAR_10->pre_ctime, &VAR_9->i_ctime, sizeof(VAR_10->pre_ctime));
  VAR_10->valid |= VAR_5;
 }
 if ((VAR_10->valid & VAR_3) != 0 &&
   (VAR_10->valid & VAR_6) == 0) {
  FUNC_2(&VAR_10->pre_mtime, &VAR_9->i_mtime, sizeof(VAR_10->pre_mtime));
  VAR_10->valid |= VAR_6;
 }
 if ((VAR_10->valid & VAR_8) != 0 &&
   (VAR_10->valid & VAR_7) == 0) {
  VAR_10->pre_size = FUNC_1(VAR_9);
  VAR_10->valid |= VAR_7;
 }
out_noforce:
 VAR_11 = FUNC_4(VAR_9, VAR_10);
 FUNC_6(&VAR_9->i_lock);
 return VAR_11;
}
