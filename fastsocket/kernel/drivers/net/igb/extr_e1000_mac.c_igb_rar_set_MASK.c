
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct e1000_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;

void FUNC_4(struct e1000_hw *VAR_1, u8 *VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5;




 VAR_4 = ((u32) VAR_2[0] |
     ((u32) VAR_2[1] << 8) |
      ((u32) VAR_2[2] << 16) | ((u32) VAR_2[3] << 24));

 VAR_5 = ((u32) VAR_2[4] | ((u32) VAR_2[5] << 8));


 if (VAR_4 || VAR_5)
  VAR_5 |= VAR_0;





 FUNC_2(FUNC_1(VAR_3), VAR_4);
 FUNC_3();
 FUNC_2(FUNC_0(VAR_3), VAR_5);
 FUNC_3();
}
