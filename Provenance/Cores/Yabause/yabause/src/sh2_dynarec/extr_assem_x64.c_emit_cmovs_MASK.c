
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int) ;
 int * VAR_3 ;

void FUNC_4(u32 *VAR_4,int VAR_5)
{
  FUNC_0("cmovs %x,%%%s",(int)VAR_4,VAR_3[VAR_5]);
  if(VAR_4==&VAR_1) FUNC_0(" [zero]\n");
  else if(VAR_4==&VAR_0) FUNC_0(" [one]\n");
  else FUNC_0("\n");
  FUNC_1(0x0F);
  FUNC_1(0x48);
  FUNC_2(0,5,VAR_5);
  FUNC_3((int)VAR_4-(int)VAR_2-4);
}
