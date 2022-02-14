
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; void* i_ctime; void* i_mtime; int i_sb; int i_mode; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; struct inode* d_inode; } ;
struct buffer_head {int dummy; } ;
struct bfs_sb_info {int bfs_lock; } ;
struct bfs_dirent {scalar_t__ ino; } ;


 struct bfs_sb_info* FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ,int ,scalar_t__) ;
 struct buffer_head* FUNC_3 (struct inode*,int ,int ,struct bfs_dirent**) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct buffer_head*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_4, struct dentry *VAR_5,
   struct inode *VAR_6, struct dentry *VAR_7)
{
 struct inode *VAR_8, *VAR_9;
 struct buffer_head *VAR_10, *VAR_11;
 struct bfs_dirent *VAR_12, *VAR_13;
 struct bfs_sb_info *VAR_14;
 int VAR_15 = -VAR_2;

 VAR_10 = VAR_11 = ((void*)0);
 VAR_8 = VAR_5->d_inode;
 if (FUNC_1(VAR_8->i_mode))
  return -VAR_1;

 VAR_14 = FUNC_0(VAR_8->i_sb);

 FUNC_9(&VAR_14->bfs_lock);
 VAR_10 = FUNC_3(VAR_4,
    VAR_5->d_name.name,
    VAR_5->d_name.len, &VAR_12);

 if (!VAR_10 || (FUNC_6(VAR_12->ino) != VAR_8->i_ino))
  goto end_rename;

 VAR_15 = -VAR_3;
 VAR_9 = VAR_7->d_inode;
 VAR_11 = FUNC_3(VAR_6,
    VAR_7->d_name.name,
    VAR_7->d_name.len, &VAR_13);

 if (VAR_11 && !VAR_9) {
  FUNC_4(VAR_11);
  VAR_11 = ((void*)0);
 }
 if (!VAR_11) {
  VAR_15 = FUNC_2(VAR_6,
     VAR_7->d_name.name,
     VAR_7->d_name.len,
     VAR_8->i_ino);
  if (VAR_15)
   goto end_rename;
 }
 VAR_12->ino = 0;
 VAR_4->i_ctime = VAR_4->i_mtime = VAR_0;
 FUNC_8(VAR_4);
 if (VAR_9) {
  VAR_9->i_ctime = VAR_0;
  FUNC_5(VAR_9);
 }
 FUNC_7(VAR_10, VAR_4);
 VAR_15 = 0;

end_rename:
 FUNC_10(&VAR_14->bfs_lock);
 FUNC_4(VAR_10);
 FUNC_4(VAR_11);
 return VAR_15;
}
