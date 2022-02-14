
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configfs_attribute {int dummy; } ;
struct config_item {int ci_dentry; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct configfs_attribute const*,int ) ;

int FUNC_2(struct config_item * VAR_1, const struct configfs_attribute * VAR_2)
{
 FUNC_0(!VAR_1 || !VAR_1->ci_dentry || !VAR_2);

 return FUNC_1(VAR_1->ci_dentry, VAR_2,
     VAR_0);
}
