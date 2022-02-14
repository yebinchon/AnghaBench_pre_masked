
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int ,char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{

  char VAR_3[64]="",VAR_4[64]="";
  int VAR_5=0,VAR_6=0;

  VAR_5=(VAR_2>>8)&1;
  VAR_6=(VAR_2>>6)&3; if (VAR_6>=3) return 1;
  if ((VAR_2&0xf138)==0xb108) return 1;

  FUNC_0(VAR_3,(VAR_2>>9)&7,VAR_6);
  FUNC_0(VAR_4, VAR_2&0x3f, VAR_6);

  if (VAR_5) FUNC_1(VAR_0,"eor.%c %s, %s",VAR_1[VAR_6],VAR_3,VAR_4);
  else FUNC_1(VAR_0,"cmp.%c %s, %s",VAR_1[VAR_6],VAR_4,VAR_3);
  return 0;
}
