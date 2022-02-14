
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ pointer ;


 int FUNC_0 (int) ;

void FUNC_1(pointer VAR_0,u32 *VAR_1,u32 *VAR_2)
{
  u32 *VAR_3=(u32 *)VAR_0;


  FUNC_0((*VAR_3&0xFFF00000)==0xe5900000);
  u32 VAR_4=*VAR_3&0xfff;
  u32 *VAR_5=(void *)VAR_3+VAR_4+8;
  u32 VAR_6=VAR_5[0];

  u32 VAR_7=VAR_5[2];
  VAR_3+=4;
  if((*VAR_3&0xFF000000)!=0xeb000000) VAR_3++;
  FUNC_0((*VAR_3&0xFF000000)==0xeb000000);
  *VAR_1=VAR_6;
  *VAR_2=VAR_6+VAR_7;
}
