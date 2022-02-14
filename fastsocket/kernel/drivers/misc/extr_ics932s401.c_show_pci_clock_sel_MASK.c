
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ics932s401_data {int* regs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ics932s401_data*) ;
 struct ics932s401_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
      struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct ics932s401_data *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 if (VAR_5->regs[VAR_1] & VAR_0)
  VAR_6 = FUNC_0(VAR_5);
 else
  VAR_6 = 33333;

 return FUNC_2(VAR_4, "%d\n", VAR_6);
}
