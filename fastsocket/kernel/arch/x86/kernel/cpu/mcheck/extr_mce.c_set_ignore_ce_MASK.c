
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*,int) ;
 scalar_t__ FUNC_1 (char const*,int ,scalar_t__*) ;

__attribute__((used)) static ssize_t FUNC_2(struct sys_device *VAR_4,
        struct sysdev_attribute *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 u64 VAR_8;

 if (FUNC_1(VAR_6, 0, &VAR_8) < 0)
  return -VAR_0;

 if (VAR_3 ^ !!VAR_8) {
  if (VAR_8) {

   FUNC_0(VAR_1, (void *)1, 1);
   VAR_3 = 1;
  } else {

   VAR_3 = 0;
   FUNC_0(VAR_2, (void *)1, 1);
  }
 }
 return VAR_7;
}
