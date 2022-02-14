
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_devdata {scalar_t__ regs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct sm501_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,unsigned int,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct sm501_devdata *VAR_3 = FUNC_0(VAR_0) ;
 unsigned int VAR_4;
 char *VAR_5 = VAR_2;
 int VAR_6;

 for (VAR_4 = 0x00; VAR_4 < 0x70; VAR_4 += 4) {
  VAR_6 = FUNC_2(VAR_5, "%08x = %08x\n",
         VAR_4, FUNC_1(VAR_3->regs + VAR_4));
  VAR_5 += VAR_6;
 }

 return VAR_5 - VAR_2;
}
