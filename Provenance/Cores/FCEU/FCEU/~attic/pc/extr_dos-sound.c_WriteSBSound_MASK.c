
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int int32 ;
typedef int int16 ;


 size_t VAR_0 ;
 int* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(int32 *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;

 if(!VAR_3)
 {
   for(VAR_8=0;VAR_8<VAR_6;VAR_8++)
   {
    while(VAR_2==VAR_0)
     if(VAR_7)
      return;
    VAR_1[VAR_2]=(uint8)((VAR_5[VAR_8])>>8)^128;
    VAR_2=(VAR_2+1)&(VAR_4-1);
   }
 }
 else
 {
   for(VAR_8=0;VAR_8<VAR_6;VAR_8++)
   {
    while(VAR_2==VAR_0)
     if(VAR_7)
      return;
    ((int16 *)VAR_1)[VAR_2]=VAR_5[VAR_8];
    VAR_2=(VAR_2+1)&(VAR_4-1);
   }
 }
}
