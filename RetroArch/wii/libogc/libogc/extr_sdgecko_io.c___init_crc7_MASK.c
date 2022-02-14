
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s32 ;


 int* VAR_0 ;

__attribute__((used)) static void FUNC_0()
{
 s32 VAR_1,VAR_2;
 u8 VAR_3,VAR_4;

 VAR_4 = 0;
 for(VAR_1=0;VAR_1<256;VAR_1++) {
  VAR_3 = VAR_1;
  VAR_4 = 0;
  for(VAR_2=0;VAR_2<8;VAR_2++) {
   VAR_4 <<= 1;
   if((VAR_4^VAR_3)&0x80) VAR_4 ^= 0x09;
   VAR_3 <<= 1;
  }
  VAR_4 &= 0x7f;
  VAR_0[VAR_1] = VAR_4;
 }
}
