
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

s32 FUNC_2(struct e1000_hw *VAR_9, u16 *VAR_10,
          u16 *VAR_11)
{
 u32 VAR_12;

 VAR_12 = FUNC_1(VAR_0);
 if (VAR_12 & VAR_3) {
  *VAR_10 = VAR_8;
  FUNC_0("1000 Mbs, ");
 } else if (VAR_12 & VAR_2) {
  *VAR_10 = VAR_7;
  FUNC_0("100 Mbs, ");
 } else {
  *VAR_10 = VAR_6;
  FUNC_0("10 Mbs, ");
 }

 if (VAR_12 & VAR_1) {
  *VAR_11 = VAR_4;
  FUNC_0("Full Duplex\n");
 } else {
  *VAR_11 = VAR_5;
  FUNC_0("Half Duplex\n");
 }

 return 0;
}
