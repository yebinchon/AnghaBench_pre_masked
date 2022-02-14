
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pointer ;


 int FUNC_0 (int) ;

pointer FUNC_1(pointer VAR_0)
{
  int *VAR_1=(int *)VAR_0;

  VAR_1+=4;



  if((*VAR_1&0xFF000000)!=0xeb000000) VAR_1++;
  FUNC_0((*VAR_1&0xFF000000)==0xeb000000);
  VAR_1++;
  if((*VAR_1&0xFF000000)==0xea000000) {
    return (int)VAR_1+((*VAR_1<<8)>>6)+8;
  }
  return (pointer)VAR_1;
}
