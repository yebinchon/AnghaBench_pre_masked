
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ pointer ;


 scalar_t__ VAR_0 ;

int FUNC_0(pointer VAR_1)
{

  int *VAR_2=((u32 *)VAR_1)+4;



  if((*VAR_2&0xFF000000)!=0xeb000000) VAR_2++;
  if((*VAR_2&0xFF000000)!=0xeb000000) return 1;
  if((int)VAR_2+((*VAR_2<<8)>>6)+8==(int)VAR_0) return 0;
  return 1;
}
