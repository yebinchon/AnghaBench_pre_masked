
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int i_size; TYPE_3__* i_sb; int i_ino; } ;
struct TYPE_7__ {TYPE_1__* dentry; } ;
struct file {int f_pos; TYPE_2__ f_path; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct bfs_sb_info {int bfs_lock; } ;
struct bfs_dirent {scalar_t__ ino; int name; } ;
typedef scalar_t__ (* filldir_t ) (void*,int ,int,int,int ,int ) ;
struct TYPE_9__ {int i_sblock; } ;
struct TYPE_8__ {int s_id; } ;
struct TYPE_6__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 struct bfs_sb_info* FUNC_1 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,unsigned long,int ,int ) ;
 struct buffer_head* FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_6, void *VAR_7, filldir_t VAR_8)
{
 struct inode *VAR_9 = VAR_6->f_path.dentry->d_inode;
 struct buffer_head *VAR_10;
 struct bfs_dirent *VAR_11;
 struct bfs_sb_info *VAR_12 = FUNC_1(VAR_9->i_sb);
 unsigned int VAR_13;
 int VAR_14;

 FUNC_4(&VAR_12->bfs_lock);

 if (VAR_6->f_pos & (VAR_2 - 1)) {
  FUNC_6("Bad f_pos=%08lx for %s:%08lx\n",
     (unsigned long)VAR_6->f_pos,
     VAR_9->i_sb->s_id, VAR_9->i_ino);
  FUNC_5(&VAR_12->bfs_lock);
  return -VAR_5;
 }

 while (VAR_6->f_pos < VAR_9->i_size) {
  VAR_13 = VAR_6->f_pos & (VAR_0 - 1);
  VAR_14 = FUNC_0(VAR_9)->i_sblock + (VAR_6->f_pos >> VAR_1);
  VAR_10 = FUNC_7(VAR_9->i_sb, VAR_14);
  if (!VAR_10) {
   VAR_6->f_pos += VAR_0 - VAR_13;
   continue;
  }
  do {
   VAR_11 = (struct bfs_dirent *)(VAR_10->b_data + VAR_13);
   if (VAR_11->ino) {
    int VAR_15 = FUNC_8(VAR_11->name, VAR_3);
    if (VAR_8(VAR_7, VAR_11->name, VAR_15, VAR_6->f_pos,
      FUNC_3(VAR_11->ino),
      VAR_4) < 0) {
     FUNC_2(VAR_10);
     FUNC_5(&VAR_12->bfs_lock);
     return 0;
    }
   }
   VAR_13 += VAR_2;
   VAR_6->f_pos += VAR_2;
  } while ((VAR_13 < VAR_0) && (VAR_6->f_pos < VAR_9->i_size));
  FUNC_2(VAR_10);
 }

 FUNC_5(&VAR_12->bfs_lock);
 return 0;
}
