
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int s32 ;


 int* VAR_0 ;

__attribute__((used)) static void FUNC_0()
{
 s32 VAR_1,VAR_2;
 u16 VAR_3,VAR_4;

 for(VAR_1=0;VAR_1<256;VAR_1++) {
  VAR_3 = 0;
  VAR_4 = ((u16)VAR_1)<<8;
  for(VAR_2=0;VAR_2<8;VAR_2++) {
   if((VAR_3^VAR_4)&0x8000) VAR_3 = (VAR_3<<1)^0x1021;
   else VAR_3 <<= 1;

   VAR_4 <<= 1;
  }

  VAR_0[VAR_1] = VAR_3;
 }
}
