
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int) ;

void FUNC_1(int VAR_0,u32 VAR_1,int VAR_2)
{
  u8 *VAR_3=(u8 *)VAR_0;
  u32 *VAR_4=(u32 *)VAR_3;
  FUNC_0(!VAR_2||VAR_4[-1]==0xe28dd000);
  if(VAR_3[3]==0xe2) {
    FUNC_0(!VAR_2);
    FUNC_0((VAR_1-(u32)VAR_4-8)<4096);
    *VAR_4=(*VAR_4&0xFFFFF000)|(VAR_1-(u32)VAR_4-8);
  }
  else {
    FUNC_0((VAR_3[3]&0x0e)==0xa);
    u32 VAR_5=*(u32 *)VAR_1;
    if((VAR_5&0x0e100000)==0) {
      VAR_2=0;
    }
    if((VAR_5&0x0c100000)==0x04100000) {
      VAR_2=0;
    }
    if(VAR_5&0x08000000) {
      VAR_2=0;
    }
    if(VAR_2) {
      VAR_4[-1]=VAR_5;
      VAR_1+=4;
    }
    *VAR_4=(*VAR_4&0xFF000000)|(((VAR_1-(u32)VAR_4-8)<<6)>>8);
  }
}
