
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_1 (int ,char*,char*,char,char*,char*,char*) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{

  int VAR_3=0,VAR_4=0,VAR_5=0,VAR_6=0,VAR_7=1;
  char VAR_8[64]="",VAR_9[64]="";
  char *VAR_10[2]={"div","mul"};

  VAR_3=(VAR_2>>14)&1;
  VAR_4 =(VAR_2>> 9)&7;
  VAR_5=(VAR_2>> 8)&1;
  VAR_6 = VAR_2&0x3f;

  FUNC_0(VAR_8,VAR_4,VAR_7);
  FUNC_0( VAR_9, VAR_6,VAR_7);

  FUNC_1(VAR_0,"%s%c.%c %s, %s",VAR_10[VAR_3],VAR_5?'s':'u',VAR_1[VAR_7],VAR_9,VAR_8);
  return 0;
}
