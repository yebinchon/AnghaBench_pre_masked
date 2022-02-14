
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
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct ics932s401_data*) ;
 int* VAR_5 ;
 struct ics932s401_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_6,
      struct device_attribute *VAR_7,
      char *VAR_8)
{
 struct ics932s401_data *VAR_9 = FUNC_1(VAR_6);
 int VAR_10;

 if (VAR_9->regs[VAR_4] & VAR_2)
  VAR_10 = FUNC_0(VAR_9);
 else {

  int VAR_11 = VAR_9->regs[VAR_3] & VAR_1;
  VAR_10 = VAR_5[VAR_11];
  if (VAR_9->regs[VAR_4] & VAR_0) {
   switch (VAR_10) {
   case 166666:
    VAR_10 = 160000;
    break;
   case 333333:
    VAR_10 = 320000;
    break;
   }
  }
 }

 return FUNC_2(VAR_8, "%d\n", VAR_10);
}
