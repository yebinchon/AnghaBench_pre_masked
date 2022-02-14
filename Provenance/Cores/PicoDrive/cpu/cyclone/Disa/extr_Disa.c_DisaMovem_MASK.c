
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int) ;
 int* VAR_2 ;
 int FUNC_3 (int ,char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_4(int VAR_3)
{

  int VAR_4=0,VAR_5=0;
  int VAR_6=0,VAR_7=0;
  char VAR_8[64]="",VAR_9[64]="";

  VAR_4=(VAR_3>>10)&1;
  VAR_5=((VAR_3>>6)&1)+1;
  VAR_6=VAR_3&0x3f; if (VAR_6<0x10) return 1;

  VAR_7=FUNC_1(VAR_0)&0xffff; VAR_0+=2;

  FUNC_2(VAR_8,VAR_7,VAR_6);
  FUNC_0(VAR_9,VAR_6,VAR_5);

  if (VAR_4) FUNC_3(VAR_1,"movem.%c %s, %s",VAR_2[VAR_5],VAR_9,VAR_8);
  else FUNC_3(VAR_1,"movem.%c %s, %s",VAR_2[VAR_5],VAR_8,VAR_9);
  return 0;
}
