
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ pointer ;


 int FUNC_0 (int) ;

void FUNC_1(pointer VAR_0,u32 *VAR_1,u32 *VAR_2)
{
  u8 *VAR_3=(u8 *)VAR_0;
  if(VAR_3[0]==0xB8) {
    u32 VAR_4=*(u32 *)(VAR_3+1);

    u32 VAR_5=*(u32 *)(VAR_3+11);
    FUNC_0(VAR_3[21]==0xE8);
    *VAR_1=VAR_4;
    *VAR_2=VAR_4+VAR_5;
  }else{
    FUNC_0(VAR_3[0]==0x48&&VAR_3[1]==0xB8);
    u64 VAR_6=*(u64 *)(VAR_3+2);

    u32 VAR_7=*(u32 *)(VAR_3+16);
    FUNC_0(VAR_3[26]==0xE8);
    *VAR_1=VAR_6;
    *VAR_2=VAR_6+VAR_7;
  }
}
