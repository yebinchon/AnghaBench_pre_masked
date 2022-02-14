
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,int ) ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

void FUNC_5(int VAR_11, int VAR_12)
{
  if(VAR_11==VAR_2)
    FUNC_2(((int)VAR_6-(int)&VAR_3)>>2,VAR_12);
  else {
    int VAR_13=(VAR_8?(int)VAR_10:(int)VAR_5)+(VAR_11<<2);
    if(VAR_11==VAR_0) VAR_13=VAR_8?(int)&VAR_9:(int)&VAR_4;
    u32 VAR_14 = VAR_13-(u32)&VAR_3;
    FUNC_1(VAR_14<4096);
    FUNC_0("ldr %s,fp+%d\n",VAR_7[VAR_12],VAR_14);
    FUNC_3(0xe5900000|FUNC_4(VAR_12,VAR_1,0)|VAR_14);
  }
}
