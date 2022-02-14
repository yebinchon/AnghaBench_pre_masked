
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int ,char*,char*,int,int,char*) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{

  int VAR_3=0,VAR_4=0,VAR_5=0,VAR_6=0;
  char VAR_7[64]="";

  VAR_3 =(VAR_2>>9)&7; if (VAR_3==0) VAR_3=8;
  VAR_4=(VAR_2>>8)&1;
  VAR_5=(VAR_2>>6)&3; if (VAR_5>=3) return 1;
  VAR_6 = VAR_2&0x3f;

  FUNC_0(VAR_7,VAR_6,VAR_5);

  FUNC_1(VAR_0,"%s.%c #%d, %s",VAR_4?"subq":"addq",VAR_1[VAR_5],VAR_3,VAR_7);
  return 0;
}
