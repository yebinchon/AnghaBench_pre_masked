
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ pointer ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,void*,int) ;

int FUNC_2(pointer VAR_0)
{
  u32 *VAR_1=(u32 *)VAR_0;


  FUNC_0((*VAR_1&0xFFF00000)==0xe5900000);
  u32 VAR_2=*VAR_1&0xfff;
  u32 *VAR_3=(void *)VAR_1+VAR_2+8;
  u32 VAR_4=VAR_3[0];
  u32 VAR_5=VAR_3[1];
  u32 VAR_6=VAR_3[2];
  VAR_1+=4;
  if((*VAR_1&0xFF000000)!=0xeb000000) VAR_1++;
  FUNC_0((*VAR_1&0xFF000000)==0xeb000000);

  return !FUNC_1((void *)VAR_4,(void *)VAR_5,VAR_6);
}
