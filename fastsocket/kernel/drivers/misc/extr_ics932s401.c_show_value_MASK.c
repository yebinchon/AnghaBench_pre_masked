
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct device_attribute VAR_1 ;
 struct device_attribute VAR_2 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
     struct device_attribute *VAR_4,
     char *VAR_5)
{
 int VAR_6;

 if (VAR_4 == &VAR_2)
  VAR_6 = 48000;
 else if (VAR_4 == &VAR_1)
  VAR_6 = VAR_0;
 else
  FUNC_0();

 return FUNC_1(VAR_5, "%d\n", VAR_6);
}
