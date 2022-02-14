
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
  if(VAR_1[0]==0xB8) {
    FUNC_0(VAR_1[21]==0xE8);
    if(VAR_1[26]==0xE9) return *(s32 *)(VAR_1+27)+VAR_0+31;
    else return(VAR_0+26);
  }

  FUNC_0(VAR_1[26]==0xE8);
  if(VAR_1[31]==0xE9) return *(s32 *)(VAR_1+32)+VAR_0+36;
  else return(VAR_0+31);
}
