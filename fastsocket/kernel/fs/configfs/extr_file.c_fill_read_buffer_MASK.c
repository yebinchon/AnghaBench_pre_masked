
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_parent; } ;
struct configfs_item_operations {void* (* show_attribute ) (struct config_item*,struct configfs_attribute*,char*) ;} ;
struct configfs_buffer {char* page; void* count; scalar_t__ needs_read_fill; struct configfs_item_operations* ops; } ;
struct configfs_attribute {int dummy; } ;
struct config_item {int dummy; } ;
typedef void* ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (struct config_item*,struct configfs_attribute*,char*) ;
 struct configfs_attribute* FUNC_3 (struct dentry*) ;
 struct config_item* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct dentry * VAR_3, struct configfs_buffer * VAR_4)
{
 struct configfs_attribute * VAR_5 = FUNC_3(VAR_3);
 struct config_item * VAR_6 = FUNC_4(VAR_3->d_parent);
 struct configfs_item_operations * VAR_7 = VAR_4->ops;
 int VAR_8 = 0;
 ssize_t VAR_9;

 if (!VAR_4->page)
  VAR_4->page = (char *) FUNC_1(VAR_1);
 if (!VAR_4->page)
  return -VAR_0;

 VAR_9 = VAR_7->show_attribute(VAR_6,VAR_5,VAR_4->page);
 VAR_4->needs_read_fill = 0;
 FUNC_0(VAR_9 > (ssize_t)VAR_2);
 if (VAR_9 >= 0)
  VAR_4->count = VAR_9;
 else
  VAR_8 = VAR_9;
 return VAR_8;
}
