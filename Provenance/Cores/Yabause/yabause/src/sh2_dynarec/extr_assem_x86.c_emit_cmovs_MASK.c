
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int) ;
 int * VAR_2 ;

void FUNC_4(u32 *VAR_3,int VAR_4)
{
  FUNC_0("cmovs %x,%%%s",(int)VAR_3,VAR_2[VAR_4]);
  if(VAR_3==&VAR_1) FUNC_0(" [zero]\n");
  else if(VAR_3==&VAR_0) FUNC_0(" [one]\n");
  else FUNC_0("\n");
  FUNC_1(0x0F);
  FUNC_1(0x48);
  FUNC_2(0,5,VAR_4);
  FUNC_3((int)VAR_3);
}
