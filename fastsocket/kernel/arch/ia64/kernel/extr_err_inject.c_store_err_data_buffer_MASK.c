
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysdev_attribute {int dummy; } ;
struct sys_device {unsigned int id; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int data3; int data2; int data1; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ,unsigned int) ;
 int FUNC_1 (char const*,char*,int *,int *,int *) ;

__attribute__((used)) static ssize_t
FUNC_2(struct sys_device *VAR_3,
   struct sysdev_attribute *VAR_4,
   const char *VAR_5, size_t VAR_6)
{
 unsigned int VAR_7=VAR_3->id;
 int VAR_8;
 VAR_8=FUNC_1(VAR_5, "%lx, %lx, %lx",
   &VAR_2[VAR_7].data1,
   &VAR_2[VAR_7].data2,
   &VAR_2[VAR_7].data3);
 if (VAR_8!=VAR_1)
  return -VAR_0;

 return VAR_6;
}
