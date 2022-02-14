
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int* VAR_1 ;
 int FUNC_1 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{

  int VAR_3=0,VAR_4=0,VAR_5=0,VAR_6=0;
  char VAR_7[32]="";

  VAR_3 =(VAR_2>>9)&7;
  VAR_4 =(VAR_2>>7)&1;
  VAR_5=(VAR_2>>6)&1; VAR_5++;
  VAR_6 = VAR_2 &7;

  FUNC_0(VAR_7);
  if (VAR_4) FUNC_1(VAR_0,"movep.%c d%d, (%s,a%d)",VAR_1[VAR_5],VAR_3,VAR_7,VAR_6);
  else FUNC_1(VAR_0,"movep.%c (%s,a%d), d%d",VAR_1[VAR_5],VAR_7,VAR_6,VAR_3);

  return 0;
}
