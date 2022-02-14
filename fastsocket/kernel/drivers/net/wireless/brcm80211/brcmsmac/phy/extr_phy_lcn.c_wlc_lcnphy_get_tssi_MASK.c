
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {scalar_t__* tx_power_offset; } ;
typedef scalar_t__ s8 ;


 size_t VAR_0 ;
 int FUNC_0 (struct brcms_phy*,int) ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;
 scalar_t__ FUNC_2 (struct brcms_phy*) ;

void FUNC_3(struct brcms_phy *VAR_1, s8 *VAR_2, s8 *VAR_3)
{
 s8 VAR_4;
 u16 VAR_5;
 VAR_5 = (FUNC_0(VAR_1, 0x4ab));
 if (FUNC_1(VAR_1) &&
     (VAR_5 & (0x1 << 15))) {
  *VAR_2 = (s8) (((FUNC_0(VAR_1, 0x4ab) & (0x1ff << 0))
       >> 0) >> 1);

  if (FUNC_2(VAR_1))
   VAR_4 = VAR_1->tx_power_offset[VAR_0];
  else
   VAR_4 = 0;

  *VAR_3 = *VAR_2 + VAR_4;
 } else {
  *VAR_3 = 0;
  *VAR_2 = 0;
 }
}
