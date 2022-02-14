
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_attribute {int dummy; } ;
struct sys_device {size_t id; } ;
typedef int ssize_t ;


 int* VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct sys_device *VAR_1,
    struct sysdev_attribute *VAR_2, char *VAR_3)
{
 return FUNC_0(VAR_3, "%d\n", VAR_0[VAR_1->id]);
}
