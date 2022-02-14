
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ics932s401_data {int* regs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ics932s401_data*) ;
 struct ics932s401_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
      struct device_attribute *VAR_5,
      char *VAR_6)
{
 struct ics932s401_data *VAR_7 = FUNC_1(VAR_4);
 int VAR_8;

 if (VAR_7->regs[VAR_2] & VAR_1)
  VAR_8 = FUNC_0(VAR_7);
 else

  if (VAR_7->regs[VAR_2] & VAR_0 &&
      VAR_7->regs[VAR_2] & VAR_3)
   VAR_8 = 96000;
  else
   VAR_8 = 100000;

 return FUNC_2(VAR_6, "%d\n", VAR_8);
}
