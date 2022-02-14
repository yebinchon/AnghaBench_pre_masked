
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; int i_nlink; int i_ctime; int i_mtime; TYPE_2__* i_sb; } ;
struct TYPE_3__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; struct inode* d_inode; } ;
struct buffer_head {int dummy; } ;
struct bfs_sb_info {int bfs_lock; } ;
struct bfs_dirent {scalar_t__ ino; } ;
struct TYPE_4__ {char* s_id; } ;


 struct bfs_sb_info* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct buffer_head* FUNC_1 (struct inode*,int ,int ,struct bfs_dirent**) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct buffer_head*,struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_2, struct dentry *VAR_3)
{
 int VAR_4 = -VAR_1;
 struct inode *VAR_5 = VAR_3->d_inode;
 struct buffer_head *VAR_6;
 struct bfs_dirent *VAR_7;
 struct bfs_sb_info *VAR_8 = FUNC_0(VAR_5->i_sb);

 FUNC_7(&VAR_8->bfs_lock);
 VAR_6 = FUNC_1(VAR_2, VAR_3->d_name.name, VAR_3->d_name.len, &VAR_7);
 if (!VAR_6 || (FUNC_4(VAR_7->ino) != VAR_5->i_ino))
  goto out_brelse;

 if (!VAR_5->i_nlink) {
  FUNC_9("unlinking non-existent file %s:%lu (nlink=%d)\n",
     VAR_5->i_sb->s_id, VAR_5->i_ino,
     VAR_5->i_nlink);
  VAR_5->i_nlink = 1;
 }
 VAR_7->ino = 0;
 FUNC_5(VAR_6, VAR_2);
 VAR_2->i_ctime = VAR_2->i_mtime = VAR_0;
 FUNC_6(VAR_2);
 VAR_5->i_ctime = VAR_2->i_ctime;
 FUNC_3(VAR_5);
 VAR_4 = 0;

out_brelse:
 FUNC_2(VAR_6);
 FUNC_8(&VAR_8->bfs_lock);
 return VAR_4;
}
