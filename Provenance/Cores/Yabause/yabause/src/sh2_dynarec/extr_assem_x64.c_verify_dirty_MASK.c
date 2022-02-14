
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ pointer ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,void*,scalar_t__) ;

int FUNC_2(pointer VAR_0)
{
  u8 *VAR_1=(u8 *)VAR_0;
  if(VAR_1[0]==0xB8) {
    u32 VAR_2=*(u32 *)(VAR_1+1);
    u32 VAR_3=*(u32 *)(VAR_1+6);
    u32 VAR_4=*(u32 *)(VAR_1+11);

    FUNC_0(VAR_1[21]==0xE8);

    return !FUNC_1((void *)VAR_2,(void *)VAR_3,VAR_4);
  }
  FUNC_0(VAR_1[0]==0x48&&VAR_1[1]==0xB8);

  u64 VAR_5=*(u64 *)(VAR_1+2);
  u32 VAR_6=*(u32 *)(VAR_1+11);
  u32 VAR_7=*(u32 *)(VAR_1+16);

  FUNC_0(VAR_1[26]==0xE8);

  return !FUNC_1((void *)VAR_5,(void *)VAR_6,VAR_7);
}
