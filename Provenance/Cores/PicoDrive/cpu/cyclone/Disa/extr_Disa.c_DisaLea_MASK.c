
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*,char*) ;

__attribute__((used)) static int FUNC_2(int VAR_1)
{

  int VAR_2=0,VAR_3=0;
  char VAR_4[64]="",VAR_5[64]="";

  VAR_2=VAR_1&0x003f;
  FUNC_0(VAR_4,VAR_2,0);

  VAR_3=(VAR_1>>9)&7; VAR_3|=8;
  FUNC_0(VAR_5,VAR_3,2);

  FUNC_1(VAR_0,"lea %s, %s",VAR_4,VAR_5);
  return 0;
}
