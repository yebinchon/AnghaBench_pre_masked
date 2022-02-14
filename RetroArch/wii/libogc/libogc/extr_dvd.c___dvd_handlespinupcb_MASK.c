
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;


 int FUNC_0 (int ,void (*) (int)) ;
 int FUNC_1 (int,int (*) (int)) ;
 int FUNC_2 (int,void (*) (int)) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__,int,int) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_7(s32 VAR_6)
{
 static u32 VAR_7 = 0;
 if(VAR_6==0x0010) {
  FUNC_6();
  return;
 }
 if(VAR_6==0x0001) {
  if(VAR_7==0x0000) {
   VAR_7++;
   VAR_5[1] = VAR_5[1];
   FUNC_0(VAR_3,FUNC_7);
   return;
  }
  if(VAR_7==0x0001) {
   VAR_7++;
   VAR_5[1] = VAR_5[1];
   FUNC_2((VAR_0|VAR_1),FUNC_7);
   return;
  }
  if(VAR_7==0x0002) {
   VAR_7 = 0;
   if(!VAR_4) {
    VAR_5[1] = VAR_5[1];
    FUNC_1((FUNC_3((VAR_2+1),16,8)|0x00000300),FUNC_4);
    return;
   }
   FUNC_4(VAR_6);
   return;
  }
 }

 VAR_7 = 0;
 FUNC_5();
}
