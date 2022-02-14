
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct qstr {int len; char* name; } ;
struct object_info {int parent_id; int file_id; scalar_t__ name_len; } ;
struct inode {int i_ino; int i_size; struct super_block* i_sb; } ;
struct adfs_dir_ops {int (* read ) (struct super_block*,int ,int ,struct adfs_dir*) ;int (* setpos ) (struct adfs_dir*,int ) ;scalar_t__ (* getnext ) (struct adfs_dir*,struct object_info*) ;int (* free ) (struct adfs_dir*) ;} ;
struct adfs_dir {scalar_t__ parent_id; } ;
struct TYPE_4__ {scalar_t__ parent_id; } ;
struct TYPE_3__ {struct adfs_dir_ops* s_dir; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct super_block*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct qstr*,struct object_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct super_block*,int ,int ,struct adfs_dir*) ;
 int FUNC_7 (struct adfs_dir*,int ) ;
 scalar_t__ FUNC_8 (struct adfs_dir*,struct object_info*) ;
 int FUNC_9 (struct adfs_dir*) ;

__attribute__((used)) static int
FUNC_10(struct inode *VAR_3, struct qstr *VAR_4, struct object_info *VAR_5)
{
 struct super_block *VAR_6 = VAR_3->i_sb;
 struct adfs_dir_ops *VAR_7 = FUNC_1(VAR_6)->s_dir;
 struct adfs_dir VAR_8;
 int VAR_9;

 VAR_9 = VAR_7->read(VAR_6, VAR_3->i_ino, VAR_3->i_size, &VAR_8);
 if (VAR_9)
  goto out;

 if (FUNC_0(VAR_3)->parent_id != VAR_8.parent_id) {
  FUNC_2(VAR_6, "parent directory changed under me! (%lx but got %lx)\n",
      FUNC_0(VAR_3)->parent_id, VAR_8.parent_id);
  VAR_9 = -VAR_0;
  goto free_out;
 }

 VAR_5->parent_id = VAR_3->i_ino;




 if (VAR_4->len == 2 && VAR_4->name[0] == '.' && VAR_4->name[1] == '.') {





  VAR_5->name_len = 0;
  VAR_5->file_id = VAR_5->parent_id;
  goto free_out;
 }

 FUNC_4(&VAR_2);

 VAR_9 = VAR_7->setpos(&VAR_8, 0);
 if (VAR_9)
  goto unlock_out;

 VAR_9 = -VAR_1;
 while (VAR_7->getnext(&VAR_8, VAR_5) == 0) {
  if (FUNC_3(VAR_4, VAR_5)) {
   VAR_9 = 0;
   break;
  }
 }

unlock_out:
 FUNC_5(&VAR_2);

free_out:
 VAR_7->free(&VAR_8);
out:
 return VAR_9;
}
