
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int ,char*,char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{

  char *VAR_3[6]={"ori","andi","","","","eori"};
  char VAR_4[64]="";
  int VAR_5=0,VAR_6=0;

  VAR_5=(VAR_2>>9)&5;
  VAR_6=(VAR_2>>6)&1;

  FUNC_0(VAR_4,0x3c,VAR_6);
  FUNC_1(VAR_0,"%s.%c %s, %s", VAR_3[VAR_5], VAR_1[VAR_6], VAR_4, VAR_6?"sr":"ccr");

  return 0;
}
