
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_child {unsigned long storeme; } ;
struct configfs_attribute {int dummy; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (char*,char**,int) ;
 struct simple_child* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_3,
           struct configfs_attribute *VAR_4,
           const char *VAR_5, size_t VAR_6)
{
 struct simple_child *VAR_7 = FUNC_1(VAR_3);
 unsigned long VAR_8;
 char *VAR_9 = (char *) VAR_5;

 VAR_8 = FUNC_0(VAR_9, &VAR_9, 10);
 if (!VAR_9 || (*VAR_9 && (*VAR_9 != '\n')))
  return -VAR_0;

 if (VAR_8 > VAR_2)
  return -VAR_1;

 VAR_7->storeme = VAR_8;

 return VAR_6;
}
