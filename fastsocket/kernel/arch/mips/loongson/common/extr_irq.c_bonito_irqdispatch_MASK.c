
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

void FUNC_3(void)
{
 u32 VAR_3;
 int VAR_4;


 VAR_3 = VAR_1;
 if (VAR_3 & (1 << 10)) {
  while (VAR_3 & (1 << 10)) {
   FUNC_2(1);
   VAR_3 = VAR_1;
  }
 }


 VAR_3 = VAR_1 & VAR_0;

 if (VAR_3 != 0) {
  VAR_4 = FUNC_0(VAR_3);
  VAR_3 &= ~(1 << VAR_4);
  FUNC_1(VAR_2 + VAR_4);
 }
}
