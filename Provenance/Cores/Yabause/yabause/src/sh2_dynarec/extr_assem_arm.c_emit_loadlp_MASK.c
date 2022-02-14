
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int,int,int ) ;
 int * VAR_1 ;

void FUNC_4(u32 VAR_2,unsigned int VAR_3)
{
  FUNC_0((int)VAR_0,VAR_2);
  FUNC_1("ldr %s,pc+? [=%x]\n",VAR_1[VAR_3],VAR_2);
  FUNC_2(0xe5900000|FUNC_3(VAR_3,15,0));
}
