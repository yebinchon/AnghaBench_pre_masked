
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (int ) ;
 unsigned long long FUNC_2 (char const*,char**) ;

__attribute__((used)) static ssize_t FUNC_3(struct sys_device *VAR_3,
       struct sysdev_attribute *VAR_4,
       const char *VAR_5,
       size_t VAR_6)
{
 char *VAR_7;
 unsigned long long VAR_8;

 if (!FUNC_1(VAR_0))
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_5, &VAR_7);

 FUNC_0(VAR_8 >> VAR_2);

 return VAR_6;
}
