
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ) ;
 int * VAR_2 ;

void FUNC_4(int VAR_3, int VAR_4)
{
  u32 VAR_5 = VAR_3-(u32)&VAR_1;
  FUNC_1(VAR_5<4096);
  FUNC_0("ldr %s,fp+%d\n",VAR_2[VAR_4],VAR_5);
  FUNC_2(0xe5900000|FUNC_3(VAR_4,VAR_0,0)|VAR_5);
}
