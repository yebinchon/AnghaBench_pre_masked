
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ics932s401_data {int* regs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 struct device_attribute VAR_5 ;
 struct device_attribute VAR_6 ;
 struct ics932s401_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_7,
      struct device_attribute *VAR_8,
      char *VAR_9)
{
 struct ics932s401_data *VAR_10 = FUNC_1(VAR_7);
 int VAR_11;
 unsigned long VAR_12;

 if (!(VAR_10->regs[VAR_1] & VAR_0))
  return FUNC_2(VAR_9, "0%%\n");

 if (VAR_8 == &VAR_6)
  VAR_11 = VAR_3;
 else if (VAR_8 == &VAR_5)
  VAR_11 = VAR_2;
 else
  FUNC_0();

 VAR_12 = VAR_10->regs[VAR_11] | (VAR_10->regs[VAR_11 + 1] << 8);
 VAR_12 &= VAR_4;


 VAR_12 = 500000 * VAR_12 / 16384;
 return FUNC_2(VAR_9, "-0.%lu%%\n", VAR_12);
}
