
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ pointer ;



int FUNC_0(pointer VAR_0)
{
  u8 *VAR_1=(u8 *)VAR_0;
  if(VAR_1[0]==0xB8) {
    if(VAR_1[0]!=0xB8) return 1;
    if(VAR_1[5]!=0xBB) return 1;
    if(VAR_1[10]!=0xB9) return 1;
    if(VAR_1[15]!=0x41) return 1;
    if(VAR_1[16]!=0xBC) return 1;
    if(VAR_1[21]!=0xE8) return 1;
  }else{
    if(VAR_1[0]!=0x48) return 1;
    if(VAR_1[1]!=0xB8) return 1;
    if(VAR_1[10]!=0xBB) return 1;
    if(VAR_1[15]!=0xB9) return 1;
    if(VAR_1[20]!=0x41) return 1;
    if(VAR_1[21]!=0xBC) return 1;
    if(VAR_1[26]!=0xE8) return 1;
  }
  return 0;
}
