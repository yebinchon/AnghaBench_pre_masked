
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int) ;
 int * VAR_0 ;

void FUNC_3(unsigned int VAR_1,unsigned int VAR_2,unsigned int VAR_3,unsigned int VAR_4)
{
  FUNC_0("bic %s,%s,%s lsl %s\n",VAR_0[VAR_4],VAR_0[VAR_1],VAR_0[VAR_2],VAR_0[VAR_3]);
  FUNC_1(0xe1C00000|FUNC_2(VAR_4,VAR_1,VAR_2)|0x10|(VAR_3<<8));
}
