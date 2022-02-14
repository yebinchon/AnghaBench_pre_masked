
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,int ,int ) ;
 int * VAR_0 ;

void FUNC_3(u32 VAR_1,unsigned int VAR_2)
{
  FUNC_0("movt %s,#%d (0x%x)\n",VAR_0[VAR_2],VAR_1&0xffff0000,VAR_1&0xffff0000);
  FUNC_1(0xe3400000|FUNC_2(VAR_2,0,0)|((VAR_1>>16)&0xfff)|((VAR_1>>12)&0xf0000));
}
