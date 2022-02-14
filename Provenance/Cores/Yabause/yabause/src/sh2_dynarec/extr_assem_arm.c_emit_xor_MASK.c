
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int) ;
 int * VAR_0 ;

void FUNC_3(unsigned int VAR_1,unsigned int VAR_2,unsigned int VAR_3)
{
  FUNC_0("eor %s,%s,%s\n",VAR_0[VAR_3],VAR_0[VAR_1],VAR_0[VAR_2]);
  FUNC_1(0xe0200000|FUNC_2(VAR_3,VAR_1,VAR_2));
}
