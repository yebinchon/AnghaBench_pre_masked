
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int * VAR_3 ;

void FUNC_4(u8 VAR_4)
{
 u32 VAR_5;

 if(FUNC_0()!=VAR_4) {
  VAR_3[VAR_0] &= ~VAR_1;
  if(VAR_4==VAR_2) {
   FUNC_1(VAR_5);
   FUNC_3();
   VAR_3[VAR_0] |= VAR_1;
   FUNC_2(VAR_5);
  }
 }
}
