
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct e1000_hw {int mac_type; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct e1000_hw*,int ,int,int) ;
 int VAR_1 ;

void FUNC_2(struct e1000_hw *VAR_2, u8 *VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6;




 VAR_5 = ((u32) VAR_3[0] | ((u32) VAR_3[1] << 8) |
     ((u32) VAR_3[2] << 16) | ((u32) VAR_3[3] << 24));
 VAR_6 = ((u32) VAR_3[4] | ((u32) VAR_3[5] << 8));
 switch (VAR_2->mac_type) {
 default:

  VAR_6 |= VAR_0;
  break;
 }

 FUNC_1(VAR_2, VAR_1, (VAR_4 << 1), VAR_5);
 FUNC_0();
 FUNC_1(VAR_2, VAR_1, ((VAR_4 << 1) + 1), VAR_6);
 FUNC_0();
}
