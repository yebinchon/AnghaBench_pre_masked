
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_count; int i_ctime; int i_ino; int i_sb; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; struct inode* d_inode; } ;
struct bfs_sb_info {int bfs_lock; } ;


 struct bfs_sb_info* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,int ,int ,int ) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_1, struct inode *VAR_2,
      struct dentry *VAR_3)
{
 struct inode *VAR_4 = VAR_1->d_inode;
 struct bfs_sb_info *VAR_5 = FUNC_0(VAR_4->i_sb);
 int VAR_6;

 FUNC_6(&VAR_5->bfs_lock);
 VAR_6 = FUNC_2(VAR_2, VAR_3->d_name.name, VAR_3->d_name.len,
       VAR_4->i_ino);
 if (VAR_6) {
  FUNC_7(&VAR_5->bfs_lock);
  return VAR_6;
 }
 FUNC_4(VAR_4);
 VAR_4->i_ctime = VAR_0;
 FUNC_5(VAR_4);
 FUNC_1(&VAR_4->i_count);
 FUNC_3(VAR_3, VAR_4);
 FUNC_7(&VAR_5->bfs_lock);
 return 0;
}
