
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int ,char*,int,char*) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{

  int VAR_3=0;
  char VAR_4[64]="";
  int VAR_5=0;

  VAR_3=VAR_2&0x003f;
  FUNC_0(VAR_4,VAR_3,0);
  VAR_5=(VAR_2>>6)&3; if (VAR_5>=3) return 1;

  FUNC_1(VAR_0,"tst.%c %s",VAR_1[VAR_5],VAR_4);
  return 0;
}
