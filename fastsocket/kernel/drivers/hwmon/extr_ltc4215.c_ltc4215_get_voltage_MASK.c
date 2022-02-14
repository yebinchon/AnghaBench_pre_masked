
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct ltc4215_data {size_t* regs; } ;
struct device {int dummy; } ;





 int FUNC_0 (int) ;
 struct ltc4215_data* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, u8 VAR_1)
{
 struct ltc4215_data *VAR_2 = FUNC_1(VAR_0);
 const u8 VAR_3 = VAR_2->regs[VAR_1];
 u32 VAR_4 = 0;

 switch (VAR_1) {
 case 129:

  VAR_4 = VAR_3 * 151 / 1000;
  break;
 case 128:

  VAR_4 = VAR_3 * 605 / 10;
  break;
 case 130:


  VAR_4 = VAR_3 * 482 * 125 / 1000;
  break;
 default:

  FUNC_0(1);
  break;
 }

 return VAR_4;
}
