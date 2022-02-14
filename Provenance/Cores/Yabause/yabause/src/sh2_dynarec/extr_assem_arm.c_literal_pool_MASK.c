
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int** VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;

void FUNC_2(int VAR_3)
{
  if(!VAR_0) return;
  if(VAR_3) {
    if((int)VAR_2-VAR_1[0][0]<4096-VAR_3) return;
  }
  u32 *VAR_4;
  int VAR_5;
  for(VAR_5=0;VAR_5<VAR_0;VAR_5++)
  {
    VAR_4=(u32 *)VAR_1[VAR_5][0];
    u32 VAR_6=(u32)VAR_2-(u32)VAR_4-8;
    FUNC_0(VAR_6<4096);
    FUNC_0(!(VAR_6&3));
    *VAR_4|=VAR_6;
    FUNC_1(VAR_1[VAR_5][1]);
  }
  VAR_0=0;
}
