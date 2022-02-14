
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_attribute {int dummy; } ;
struct sys_device {int id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_2(struct sys_device *VAR_1,
    struct sysdev_attribute *VAR_2, char *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_1->id, VAR_0, 0);
 return FUNC_1(VAR_3, "%lx\n", VAR_4);
}
