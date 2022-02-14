
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

  int VAR_3=0,VAR_4=0,VAR_5=0,VAR_6=0,VAR_7;
  char VAR_8[64]="",VAR_9[64]="";
  char *VAR_10[6]={"","subx","","","","addx"};

  VAR_3=(VAR_2>>12)&5;
  VAR_5 =(VAR_2>> 9)&7;
  VAR_4=(VAR_2>> 6)&3; if (VAR_4>=3) return 1;
  VAR_6 = VAR_2&7;
  VAR_7 = VAR_2&8;
  if(VAR_7) { VAR_6+=0x20; VAR_5+=0x20; }

  FUNC_0(VAR_8,VAR_5,VAR_4);
  FUNC_0(VAR_9,VAR_6,VAR_4);

  FUNC_1(VAR_0,"%s.%c %s, %s",VAR_10[VAR_3],VAR_1[VAR_4],VAR_9,VAR_8);
  return 0;
}
