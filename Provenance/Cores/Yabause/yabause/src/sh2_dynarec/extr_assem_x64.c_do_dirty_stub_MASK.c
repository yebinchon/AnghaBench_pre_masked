
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int* VAR_5 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int FUNC_6(int VAR_12)
{
  FUNC_0("do_dirty_stub %x\n",VAR_10+VAR_12*2);
  u32 VAR_13=((((u32)VAR_9)+VAR_8*2+2)&~2)-(u32)VAR_3;
  if((u64)VAR_9<=0xFFFFFFFF)
    FUNC_3(((u32)VAR_9)&~3,VAR_0);
  else
    FUNC_4(((u64)VAR_9)&~3,VAR_0);
  FUNC_3((u32)VAR_4,VAR_1);
  FUNC_3((((u32)VAR_9+VAR_8*2+2)&~3)-((u32)VAR_9&~3),VAR_2);
  FUNC_3(VAR_10+VAR_12*2+VAR_7,12);
  FUNC_1((int)&VAR_11);
  int VAR_14=(int)VAR_6;
  FUNC_5(VAR_12);
  if(VAR_14==(int)VAR_6) VAR_14=VAR_5[VAR_12];
  FUNC_2(VAR_5[VAR_12]);
  return VAR_14;
}
