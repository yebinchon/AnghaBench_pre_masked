
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

  int VAR_3=0;
  char VAR_4[64]="",VAR_5[64]="";
  int VAR_6=0,VAR_7=0;
  char *VAR_8[8]={"or","and","sub","add","?","eor","cmp","?"};

  VAR_6=(VAR_2>>9)&7; if (VAR_6==4 || VAR_6>=7) return 1;
  VAR_7=(VAR_2>>6)&3; if (VAR_7>=3) return 1;
  VAR_3=VAR_2&0x3f; if (VAR_3==0x3c) return 1;

  FUNC_0(VAR_4,0x3c,VAR_7);
  FUNC_0(VAR_5,VAR_3, VAR_7);

  FUNC_1(VAR_0,"%si.%c %s, %s",VAR_8[VAR_6],VAR_1[VAR_7],VAR_4,VAR_5);
  return 0;
}
