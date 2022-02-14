
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {TYPE_2__* dentry; } ;
struct file {struct configfs_buffer* private_data; TYPE_1__ f_path; } ;
struct configfs_buffer {int mutex; scalar_t__ page; } ;
struct configfs_attribute {struct module* ca_owner; } ;
struct config_item {int dummy; } ;
struct TYPE_4__ {int d_parent; } ;


 int FUNC_0 (struct config_item*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct configfs_buffer*) ;
 int FUNC_3 (struct module*) ;
 int FUNC_4 (int *) ;
 struct configfs_attribute* FUNC_5 (TYPE_2__*) ;
 struct config_item* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct inode * VAR_0, struct file * VAR_1)
{
 struct config_item * VAR_2 = FUNC_6(VAR_1->f_path.dentry->d_parent);
 struct configfs_attribute * VAR_3 = FUNC_5(VAR_1->f_path.dentry);
 struct module * VAR_4 = VAR_3->ca_owner;
 struct configfs_buffer * VAR_5 = VAR_1->private_data;

 if (VAR_2)
  FUNC_0(VAR_2);

 FUNC_3(VAR_4);

 if (VAR_5) {
  if (VAR_5->page)
   FUNC_1((unsigned long)VAR_5->page);
  FUNC_4(&VAR_5->mutex);
  FUNC_2(VAR_5);
 }
 return 0;
}
