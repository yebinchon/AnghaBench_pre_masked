
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int dummy; } ;
struct TYPE_2__ {int * backing_dev_info; } ;
struct inode {int i_state; int i_flags; int i_generation; int i_mode; TYPE_1__ i_data; } ;
struct fuse_inode {int nlookup; } ;
struct fuse_conn {int lock; int bdi; } ;
struct fuse_attr {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,struct fuse_attr*,int ,int ) ;
 int FUNC_1 (struct inode*,struct fuse_attr*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct fuse_conn* FUNC_2 (struct super_block*) ;
 struct fuse_inode* FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct super_block*,int ,int ,int ,int *) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*) ;

struct inode *FUNC_10(struct super_block *VAR_6, u64 VAR_7,
   int VAR_8, struct fuse_attr *VAR_9,
   u64 VAR_10, u64 VAR_11)
{
 struct inode *VAR_12;
 struct fuse_inode *VAR_13;
 struct fuse_conn *VAR_14 = FUNC_2(VAR_6);

 retry:
 VAR_12 = FUNC_4(VAR_6, VAR_7, VAR_4, VAR_5, &VAR_7);
 if (!VAR_12)
  return ((void*)0);

 if ((VAR_12->i_state & VAR_0)) {
  VAR_12->i_flags |= VAR_2|VAR_3;
  VAR_12->i_generation = VAR_8;
  VAR_12->i_data.backing_dev_info = &VAR_14->bdi;
  FUNC_1(VAR_12, VAR_9);
  FUNC_9(VAR_12);
 } else if ((VAR_12->i_mode ^ VAR_9->mode) & VAR_1) {

  FUNC_6(VAR_12);
  FUNC_5(VAR_12);
  goto retry;
 }

 VAR_13 = FUNC_3(VAR_12);
 FUNC_7(&VAR_14->lock);
 VAR_13->nlookup++;
 FUNC_8(&VAR_14->lock);
 FUNC_0(VAR_12, VAR_9, VAR_10, VAR_11);

 return VAR_12;
}
