
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__) ;

s32 FUNC_5(struct e1000_hw *VAR_7, u16 VAR_8, u8 *VAR_9)
{
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;

 if (VAR_8 > FUNC_0(255)) {
  FUNC_1("I2CCMD command address exceeds upper limit\n");
  return -VAR_0;
 }





 VAR_11 = ((VAR_8 << VAR_6) |
    VAR_3);

 FUNC_4(VAR_1, VAR_11);


 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  FUNC_3(50);
  VAR_12 = FUNC_2(VAR_1);
  if (VAR_12 & VAR_5)
   break;
 }
 if (!(VAR_12 & VAR_5)) {
  FUNC_1("I2CCMD Read did not complete\n");
  return -VAR_0;
 }
 if (VAR_12 & VAR_2) {
  FUNC_1("I2CCMD Error bit set\n");
  return -VAR_0;
 }
 *VAR_9 = (u8) VAR_12 & 0xFF;

 return 0;
}
