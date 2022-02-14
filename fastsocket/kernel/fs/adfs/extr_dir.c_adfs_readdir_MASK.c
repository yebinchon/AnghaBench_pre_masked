
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct object_info {char* name; int name_len; int file_id; } ;
struct inode {int i_ino; int i_size; struct super_block* i_sb; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {int f_pos; TYPE_2__ f_path; } ;
struct adfs_dir_ops {int (* read ) (struct super_block*,int ,int ,struct adfs_dir*) ;int (* setpos ) (struct adfs_dir*,int) ;scalar_t__ (* getnext ) (struct adfs_dir*,struct object_info*) ;int (* free ) (struct adfs_dir*) ;} ;
struct adfs_dir {int parent_id; } ;
typedef scalar_t__ (* filldir_t ) (void*,char*,int,int,int ,int ) ;
struct TYPE_6__ {struct adfs_dir_ops* s_dir; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 TYPE_3__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct super_block*,int ,int ,struct adfs_dir*) ;
 int FUNC_5 (struct adfs_dir*,int) ;
 scalar_t__ FUNC_6 (struct adfs_dir*,struct object_info*) ;
 int FUNC_7 (struct adfs_dir*) ;
 int FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(struct file *VAR_3, void *VAR_4, filldir_t VAR_5)
{
 struct inode *VAR_6 = VAR_3->f_path.dentry->d_inode;
 struct super_block *VAR_7 = VAR_6->i_sb;
 struct adfs_dir_ops *VAR_8 = FUNC_0(VAR_7)->s_dir;
 struct object_info VAR_9;
 struct adfs_dir VAR_10;
 int VAR_11 = 0;

 FUNC_1();

 if (VAR_3->f_pos >> 32)
  goto out;

 VAR_11 = VAR_8->read(VAR_7, VAR_6->i_ino, VAR_6->i_size, &VAR_10);
 if (VAR_11)
  goto out;

 switch ((unsigned long)VAR_3->f_pos) {
 case 0:
  if (VAR_5(VAR_4, ".", 1, 0, VAR_6->i_ino, VAR_0) < 0)
   goto free_out;
  VAR_3->f_pos += 1;

 case 1:
  if (VAR_5(VAR_4, "..", 2, 1, VAR_10.parent_id, VAR_0) < 0)
   goto free_out;
  VAR_3->f_pos += 1;

 default:
  break;
 }

 FUNC_2(&VAR_2);

 VAR_11 = VAR_8->setpos(&VAR_10, VAR_3->f_pos - 2);
 if (VAR_11)
  goto unlock_out;
 while (VAR_8->getnext(&VAR_10, &VAR_9) == 0) {
  if (VAR_5(VAR_4, VAR_9.name, VAR_9.name_len,
       VAR_3->f_pos, VAR_9.file_id, VAR_1) < 0)
   goto unlock_out;
  VAR_3->f_pos += 1;
 }

unlock_out:
 FUNC_3(&VAR_2);

free_out:
 VAR_8->free(&VAR_10);

out:
 FUNC_8();
 return VAR_11;
}
