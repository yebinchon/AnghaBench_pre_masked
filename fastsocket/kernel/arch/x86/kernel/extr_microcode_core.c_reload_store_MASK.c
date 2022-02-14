
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_attribute {int dummy; } ;
struct sys_device {int id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 unsigned long FUNC_4 (char const*,char**,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct sys_device *VAR_1,
       struct sysdev_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = VAR_1->id;
 int VAR_7 = 0;
 char *VAR_8;

 VAR_5 = FUNC_4(VAR_3, &VAR_8, 0);
 if (VAR_8 == VAR_3)
  return -VAR_0;

 if (VAR_5 == 1) {
  FUNC_1();
  if (FUNC_0(VAR_6))
   VAR_7 = FUNC_3(VAR_6);
  FUNC_2();
 }

 if (!VAR_7)
  VAR_7 = VAR_4;

 return VAR_7;
}
