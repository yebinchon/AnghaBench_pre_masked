
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int ctl; } ;


 size_t VAR_0 ;
 TYPE_1__* FUNC_0 (struct sysdev_attribute*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*,int ,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct sys_device *VAR_1, struct sysdev_attribute *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 u64 VAR_5;

 if (FUNC_2(VAR_3, 0, &VAR_5) < 0)
  return -VAR_0;

 FUNC_0(VAR_2)->ctl = VAR_5;
 FUNC_1();

 return VAR_4;
}
