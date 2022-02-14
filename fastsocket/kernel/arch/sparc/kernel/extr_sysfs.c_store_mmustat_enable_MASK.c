
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_attribute {int dummy; } ;
struct sys_device {int id; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned long FUNC_0 (int ,int ,unsigned long) ;
 int FUNC_1 (char const*,char*,unsigned long*) ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_2(struct sys_device *VAR_3,
   struct sysdev_attribute *VAR_4, const char *VAR_5,
   size_t VAR_6)
{
 unsigned long VAR_7, VAR_8;
 int VAR_9 = FUNC_1(VAR_5, "%ld", &VAR_7);

 if (VAR_9 != 1)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_3->id, VAR_2, VAR_7);
 if (VAR_8)
  return -VAR_1;

 return VAR_6;
}
