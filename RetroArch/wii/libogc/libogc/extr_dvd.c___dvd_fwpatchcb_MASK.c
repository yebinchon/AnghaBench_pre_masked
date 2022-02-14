
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void (*) (int)) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_4(s32 VAR_2)
{
 static u32 VAR_3 = 0;
 if(VAR_2==0x0010) {
  FUNC_3();
  return;
 }
 if(VAR_2==0x0001) {
  if(VAR_3==0x0000) {
   VAR_3++;
   VAR_1[1] = VAR_1[1];
   FUNC_1(FUNC_4);
   return;
  }
  if(VAR_3==0x0001) {
   VAR_3 = 0;
   FUNC_0(VAR_0);
   return;
  }
 }

 VAR_3 = 0;
 FUNC_2();
}
