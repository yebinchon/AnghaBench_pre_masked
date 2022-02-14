
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_parent; } ;
struct configfs_item_operations {int (* store_attribute ) (struct config_item*,struct configfs_attribute*,int ,size_t) ;} ;
struct configfs_buffer {int page; struct configfs_item_operations* ops; } ;
struct configfs_attribute {int dummy; } ;
struct config_item {int dummy; } ;


 int FUNC_0 (struct config_item*,struct configfs_attribute*,int ,size_t) ;
 struct configfs_attribute* FUNC_1 (struct dentry*) ;
 struct config_item* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct dentry * VAR_0, struct configfs_buffer * VAR_1, size_t VAR_2)
{
 struct configfs_attribute * VAR_3 = FUNC_1(VAR_0);
 struct config_item * VAR_4 = FUNC_2(VAR_0->d_parent);
 struct configfs_item_operations * VAR_5 = VAR_1->ops;

 return VAR_5->store_attribute(VAR_4,VAR_3,VAR_1->page,VAR_2);
}
