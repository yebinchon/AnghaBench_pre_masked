
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;

void FUNC_3(void)
{
 u32 VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_1);
 VAR_5 = FUNC_0(VAR_2);
 VAR_4 &= VAR_5;






 for (VAR_6 = 1; VAR_6 < 30; VAR_6++) {
  if (VAR_4 & (1U << VAR_6)) {
   FUNC_2(VAR_0 + VAR_6);
   return;
  }
 }

 FUNC_1(&VAR_3);
}
