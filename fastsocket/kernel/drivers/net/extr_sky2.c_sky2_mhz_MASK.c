
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sky2_hw {int chip_id; } ;


 int FUNC_0 () ;
__attribute__((used)) static u32 FUNC_1(const struct sky2_hw *VAR_0)
{
 switch (VAR_0->chip_id) {
 case 135:
 case 134:
 case 133:
 case 130:
 case 129:
  return 125;

 case 132:
  return 100;

 case 131:
  return 50;

 case 128:
  return 156;

 default:
  FUNC_0();
 }
}
