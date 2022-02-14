
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int pointer ;


 int FUNC_0 (int) ;

void FUNC_1(pointer VAR_0,pointer VAR_1)
{
  u8 *VAR_2=(u8 *)VAR_0;
  u32 *VAR_3=(u32 *)VAR_2;
  if(VAR_2[3]==0xe2) {
    FUNC_0((VAR_1-(u32)VAR_3-8)<1024);
    FUNC_0((VAR_0&3)==0);
    FUNC_0((VAR_1&3)==0);
    *VAR_3=(*VAR_3&0xFFFFF000)|((VAR_1-(u32)VAR_3-8)>>2)|0xF00;

  }
  else if(VAR_2[3]==0x72) {

    if((VAR_1-(u32)VAR_3-8)<1024) {
      FUNC_0((VAR_0&3)==0);
      FUNC_0((VAR_1&3)==0);
      *VAR_3=(*VAR_3&0xFFFFF000)|((VAR_1-(u32)VAR_3-8)>>2)|0xF00;
    }
    else if((VAR_1-(u32)VAR_3-8)<4096&&!((VAR_1-(u32)VAR_3-8)&15)) {
      FUNC_0((VAR_0&3)==0);
      FUNC_0((VAR_1&3)==0);
      *VAR_3=(*VAR_3&0xFFFFF000)|((VAR_1-(u32)VAR_3-8)>>4)|0xE00;
    }
    else *VAR_3=(0x7A000000)|(((VAR_1-(u32)VAR_3-8)<<6)>>8);
  }
  else {
    FUNC_0((VAR_2[3]&0x0e)==0xa);
    *VAR_3=(*VAR_3&0xFF000000)|(((VAR_1-(u32)VAR_3-8)<<6)>>8);
  }
}
