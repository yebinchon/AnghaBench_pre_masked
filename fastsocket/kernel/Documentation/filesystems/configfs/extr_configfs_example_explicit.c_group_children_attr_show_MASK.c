
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configfs_attribute {int dummy; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct config_item *VAR_0,
     struct configfs_attribute *VAR_1,
     char *VAR_2)
{
 return FUNC_0(VAR_2,
"[03-group-children]\n"
"\n"
"This subsystem allows the creation of child config_groups.  These\n"
"groups are like the subsystem simple-children.\n");
}
