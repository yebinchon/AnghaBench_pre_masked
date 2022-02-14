
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ) ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

void FUNC_4(int VAR_9, int VAR_10)
{
  int VAR_11=(VAR_6?(int)VAR_8:(int)VAR_4)+(VAR_9<<2);
  if(VAR_9==VAR_0) VAR_11=VAR_6?(int)&VAR_7:(int)&VAR_3;
  u32 VAR_12 = VAR_11-(u32)&VAR_2;
  FUNC_1(VAR_12<4096);
  FUNC_0("str %s,fp+%d\n",VAR_5[VAR_10],VAR_12);
  FUNC_2(0xe5800000|FUNC_3(VAR_10,VAR_1,0)|VAR_12);
}
