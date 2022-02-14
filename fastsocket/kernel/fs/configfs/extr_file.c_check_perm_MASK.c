
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct TYPE_4__ {TYPE_3__* dentry; } ;
struct file {int f_mode; struct configfs_buffer* private_data; TYPE_1__ f_path; } ;
struct configfs_item_operations {int show_attribute; int store_attribute; } ;
struct configfs_buffer {int needs_read_fill; struct configfs_item_operations* ops; int mutex; } ;
struct configfs_attribute {int ca_owner; } ;
struct config_item {TYPE_2__* ci_type; } ;
struct TYPE_6__ {int d_parent; } ;
struct TYPE_5__ {struct configfs_item_operations* ct_item_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct config_item*) ;
 struct config_item* FUNC_1 (int ) ;
 struct configfs_buffer* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 struct configfs_attribute* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct inode * VAR_9, struct file * VAR_10)
{
 struct config_item *VAR_11 = FUNC_1(VAR_10->f_path.dentry->d_parent);
 struct configfs_attribute * VAR_12 = FUNC_5(VAR_10->f_path.dentry);
 struct configfs_buffer * VAR_13;
 struct configfs_item_operations * VAR_14 = ((void*)0);
 int VAR_15 = 0;

 if (!VAR_11 || !VAR_12)
  goto Einval;


 if (!FUNC_6(VAR_12->ca_owner)) {
  VAR_15 = -VAR_2;
  goto Done;
 }

 if (VAR_11->ci_type)
  VAR_14 = VAR_11->ci_type->ct_item_ops;
 else
  goto Eaccess;





 if (VAR_10->f_mode & VAR_5) {

  if (!(VAR_9->i_mode & VAR_8) || !VAR_14->store_attribute)
   goto Eaccess;

 }





 if (VAR_10->f_mode & VAR_4) {
  if (!(VAR_9->i_mode & VAR_7) || !VAR_14->show_attribute)
   goto Eaccess;
 }




 VAR_13 = FUNC_2(sizeof(struct configfs_buffer),VAR_6);
 if (!VAR_13) {
  VAR_15 = -VAR_3;
  goto Enomem;
 }
 FUNC_4(&VAR_13->mutex);
 VAR_13->needs_read_fill = 1;
 VAR_13->ops = VAR_14;
 VAR_10->private_data = VAR_13;
 goto Done;

 Einval:
 VAR_15 = -VAR_1;
 goto Done;
 Eaccess:
 VAR_15 = -VAR_0;
 Enomem:
 FUNC_3(VAR_12->ca_owner);
 Done:
 if (VAR_15 && VAR_11)
  FUNC_0(VAR_11);
 return VAR_15;
}
