
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ pointer ;


 int FUNC_0 (int) ;

pointer FUNC_1(void *VAR_0)
{

  int *VAR_1=(int *)(VAR_0+4);
  FUNC_0((*VAR_1&0x0ff00000)==0x05900000);
  u32 VAR_2=*VAR_1&0xfff;
  int **VAR_3=(void *)VAR_1+VAR_2+8;
  int *VAR_4=*VAR_3;
  FUNC_0((*VAR_4&0x0f000000)==0x0a000000);
  return (pointer)VAR_4+((*VAR_4<<8)>>6)+8;
}
