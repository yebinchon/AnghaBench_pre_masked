
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_2,
         struct kobj_attribute *VAR_3, char *VAR_4)
{
 char *VAR_5 = VAR_4;

 if (!VAR_4)
  return -VAR_0;

 VAR_5 += FUNC_1(VAR_5, "%s dependent data (0x%.4x)\n",
  FUNC_0(VAR_1), VAR_1);

 return VAR_5 - VAR_4;
}
