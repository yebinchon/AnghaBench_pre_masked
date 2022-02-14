
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ m68k_reg ;
typedef int m68k_info ;


 int FUNC_0 (int *,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(m68k_info *VAR_0, m68k_reg VAR_1, uint8_t VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 8; ++VAR_4) {
  if (VAR_2 & (1 << VAR_4)) {
   FUNC_0(VAR_0, VAR_1 + VAR_4, VAR_3);
  }
 }
}
