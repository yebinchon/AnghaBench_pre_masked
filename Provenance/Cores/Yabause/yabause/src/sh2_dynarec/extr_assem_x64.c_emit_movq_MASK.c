
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int,int ,int ,int) ;
 int FUNC_6 (int) ;
 int* VAR_1 ;

void FUNC_7(u64 VAR_2, int VAR_3)
{
  if(VAR_2-(u64)VAR_0+0x7FFFFFFA>0xFFFFFFFF) {
    FUNC_1(VAR_2-(u64)VAR_0+0x7FFFFFFA<0x100000000);

    FUNC_2(VAR_2,VAR_3);

    FUNC_0("mov (%%%s),%%%s\n",VAR_1[VAR_3],VAR_1[VAR_3]);
    FUNC_3(0x8B);
    FUNC_4(0,VAR_3,VAR_3);
    FUNC_3(0xCC);
  }
  else
  {
    FUNC_0("movq %llx,%%%s\n",VAR_2,VAR_1[VAR_3]);
    FUNC_5(1,0,0,VAR_3>>8);
    FUNC_3(0x8B);
    FUNC_4(0,5,VAR_3);
    FUNC_6(VAR_2-(int)VAR_0-4);
  }
}
