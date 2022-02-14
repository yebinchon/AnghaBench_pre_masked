
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fname {struct fname* next; int file_type; int inode; int name_len; int name; int minor_hash; int hash; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {int f_pos; TYPE_2__ f_path; struct dir_private_info* private_data; } ;
struct dir_private_info {struct fname* extra_fname; } ;
typedef int loff_t ;
typedef int (* filldir_t ) (void*,int ,int ,int ,int ,int ) ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int FUNC_0 (struct super_block*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct file * VAR_0, void * VAR_1,
   filldir_t VAR_2, struct fname *VAR_3)
{
 struct dir_private_info *VAR_4 = VAR_0->private_data;
 loff_t VAR_5;
 struct inode *VAR_6 = VAR_0->f_path.dentry->d_inode;
 struct super_block * VAR_7;
 int VAR_8;

 VAR_7 = VAR_6->i_sb;

 if (!VAR_3) {
  FUNC_2("call_filldir: called with null fname?!?\n");
  return 0;
 }
 VAR_5 = FUNC_1(VAR_3->hash, VAR_3->minor_hash);
 while (VAR_3) {
  VAR_8 = VAR_2(VAR_1, VAR_3->name,
    VAR_3->name_len, VAR_5,
    VAR_3->inode,
    FUNC_0(VAR_7, VAR_3->file_type));
  if (VAR_8) {
   VAR_0->f_pos = VAR_5;
   VAR_4->extra_fname = VAR_3;
   return VAR_8;
  }
  VAR_3 = VAR_3->next;
 }
 return 0;
}
