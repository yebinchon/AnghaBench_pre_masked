
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ pointer ;


 int FUNC_0 (int) ;

void FUNC_1(pointer VAR_0,pointer VAR_1)
{
  u8 *VAR_2=(u8 *)VAR_0;
  if(*VAR_2==0x0f)
  {
    FUNC_0(VAR_2[1]>=0x80&&VAR_2[1]<=0x8f);
    u32 *VAR_3=(u32 *)(VAR_2+2);
    *VAR_3=VAR_1-(u32)VAR_3-4;
  }
  else if(*VAR_2==0xe8||*VAR_2==0xe9) {
    u32 *VAR_4=(u32 *)(VAR_2+1);
    *VAR_4=VAR_1-(u32)VAR_4-4;
  }
  else
  {
    FUNC_0(*VAR_2==0xc7);
    u32 *VAR_5=(u32 *)(VAR_2+6);
    *VAR_5=VAR_1;
  }
}
