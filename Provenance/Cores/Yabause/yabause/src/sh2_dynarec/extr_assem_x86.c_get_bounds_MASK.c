
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ pointer ;


 int FUNC_0 (int) ;

void FUNC_1(pointer VAR_0,u32 *VAR_1,u32 *VAR_2)
{
  u8 *VAR_3=(u8 *)VAR_0;
  FUNC_0(VAR_3[5]==0xB8);
  u32 VAR_4=*(u32 *)(VAR_3+6);

  u32 VAR_5=*(u32 *)(VAR_3+16);
  FUNC_0(VAR_3[20]==0xE8);
  if(VAR_1) *VAR_1=VAR_4;
  if(VAR_2) *VAR_2=VAR_4+VAR_5;
}
