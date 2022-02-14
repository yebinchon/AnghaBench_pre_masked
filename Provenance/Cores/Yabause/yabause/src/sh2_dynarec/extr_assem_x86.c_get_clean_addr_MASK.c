
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ s32 ;
typedef scalar_t__ pointer ;


 int FUNC_0 (int) ;

pointer FUNC_1(pointer VAR_0)
{
  u8 *VAR_1=(u8 *)VAR_0;
  FUNC_0(VAR_1[20]==0xE8);
  FUNC_0(VAR_1[25]==0x83);
  if(VAR_1[28]==0xE9) return *(s32 *)(VAR_1+29)+VAR_0+33;
  else return(VAR_0+28);
}
