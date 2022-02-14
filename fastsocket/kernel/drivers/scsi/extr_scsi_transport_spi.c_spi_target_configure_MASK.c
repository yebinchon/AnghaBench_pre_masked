
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport_container {int dummy; } ;
struct kobject {int dummy; } ;
struct device {struct kobject kobj; } ;


 int FUNC_0 (struct kobject*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct transport_container *VAR_1,
    struct device *VAR_2,
    struct device *VAR_3)
{
 struct kobject *VAR_4 = &VAR_3->kobj;


 FUNC_0(VAR_4, &VAR_0);

 return 0;
}
