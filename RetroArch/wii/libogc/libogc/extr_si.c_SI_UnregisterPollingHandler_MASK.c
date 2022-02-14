
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int * RDSTHandler ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int ** VAR_1 ;

u32 FUNC_3(RDSTHandler VAR_2)
{
 u32 VAR_3,VAR_4;

 FUNC_1(VAR_3);
 for(VAR_4=0;VAR_4<4;VAR_4++) {
  if(VAR_1[VAR_4]==VAR_2) {
   VAR_1[VAR_4] = ((void*)0);
   for(VAR_4=0;VAR_4<4;VAR_4++) {
    if(VAR_1[VAR_4]!=((void*)0)) break;
   }
   if(VAR_4>=4) FUNC_0(VAR_0);

   FUNC_2(VAR_3);
   return 1;
  }
 }
 FUNC_2(VAR_3);
 return 0;
}
