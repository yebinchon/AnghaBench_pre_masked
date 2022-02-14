
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct inode {int i_mapping; int i_mode; int i_size; struct timespec i_mtime; } ;
struct fuse_inode {scalar_t__ attr_version; } ;
struct fuse_conn {scalar_t__ auto_inval_data; int lock; } ;
struct fuse_attr {int mtimensec; int mtime; int size; } ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct fuse_attr*,scalar_t__) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;
 struct fuse_inode* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct timespec*,struct timespec*) ;
 int FUNC_9 (struct inode*,int ,int ) ;

void FUNC_10(struct inode *VAR_0, struct fuse_attr *VAR_1,
       u64 VAR_2, u64 VAR_3)
{
 struct fuse_conn *VAR_4 = FUNC_2(VAR_0);
 struct fuse_inode *VAR_5 = FUNC_3(VAR_0);
 loff_t VAR_6;
 struct timespec VAR_7;

 FUNC_6(&VAR_4->lock);
 if (VAR_3 != 0 && VAR_5->attr_version > VAR_3) {
  FUNC_7(&VAR_4->lock);
  return;
 }

 VAR_7 = VAR_0->i_mtime;
 FUNC_1(VAR_0, VAR_1, VAR_2);

 VAR_6 = VAR_0->i_size;
 FUNC_4(VAR_0, VAR_1->size);
 FUNC_7(&VAR_4->lock);

 if (FUNC_0(VAR_0->i_mode)) {
  bool VAR_8 = 0;

  if (VAR_6 != VAR_1->size) {
   FUNC_9(VAR_0, VAR_6, VAR_1->size);
   VAR_8 = 1;
  } else if (VAR_4->auto_inval_data) {
   struct timespec VAR_9 = {
    .tv_sec = VAR_1->mtime,
    .tv_nsec = VAR_1->mtimensec,
   };





   if (!FUNC_8(&VAR_7, &VAR_9))
    VAR_8 = 1;
  }

  if (VAR_8)
   FUNC_5(VAR_0->i_mapping);
 }
}
