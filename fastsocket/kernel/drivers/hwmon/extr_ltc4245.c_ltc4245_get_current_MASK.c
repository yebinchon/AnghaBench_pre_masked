
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ltc4245_data {int* vregs; } ;
struct device {int dummy; } ;






 int FUNC_0 (int) ;
 struct ltc4245_data* FUNC_1 (struct device*) ;

__attribute__((used)) static unsigned int FUNC_2(struct device *VAR_0, u8 VAR_1)
{
 struct ltc4245_data *VAR_2 = FUNC_1(VAR_0);
 const u8 VAR_3 = VAR_2->vregs[VAR_1 - 0x10];
 unsigned int VAR_4;
 unsigned int VAR_5;
 switch (VAR_1) {
 case 131:
  VAR_4 = VAR_3 * 250;
  VAR_5 = VAR_4 / 50;
  break;
 case 129:
  VAR_4 = VAR_3 * 125;
  VAR_5 = (VAR_4 * 10) / 35;
  break;
 case 130:
  VAR_4 = VAR_3 * 125;
  VAR_5 = (VAR_4 * 10) / 25;
  break;
 case 128:
  VAR_4 = VAR_3 * 250;
  VAR_5 = VAR_4 / 100;
  break;
 default:

  FUNC_0(1);
  VAR_5 = 0;
  break;
 }

 return VAR_5;
}
