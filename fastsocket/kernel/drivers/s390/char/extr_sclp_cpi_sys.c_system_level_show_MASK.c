
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,char*,unsigned long long) ;
 unsigned long long VAR_2 ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_3,
     struct kobj_attribute *VAR_4, char *VAR_5)
{
 unsigned long long VAR_6;

 FUNC_0(&VAR_1);
 VAR_6 = VAR_2;
 FUNC_1(&VAR_1);
 return FUNC_2(VAR_5, VAR_0, "%#018llx\n", VAR_6);
}
