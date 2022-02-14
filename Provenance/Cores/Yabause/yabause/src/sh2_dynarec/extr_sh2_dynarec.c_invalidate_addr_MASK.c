
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int* VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;

void FUNC_2(u32 VAR_5)
{
  u32 VAR_6=VAR_5&0xDFFFFFFF;
  if(VAR_6>4194304) VAR_6=(VAR_5|0x400000)&0x7fffff;
  if(!((VAR_0[VAR_6>>5]>>((VAR_6>>2)&7))&1)) {


    if(VAR_1++<500) {
      if((VAR_4[VAR_6>>15]>>((VAR_6>>12)&7))&1) {
        VAR_3[VAR_2]=VAR_5;
        VAR_2=(VAR_2+1)&7;
      }
      return;
    }
  }



  FUNC_1(VAR_5>>12,VAR_5>>12);
  FUNC_0(!((VAR_0[VAR_6>>5]>>((VAR_6>>2)&7))&1));



  VAR_3[VAR_2]=VAR_5;
  VAR_2=(VAR_2+1)&7;
}
