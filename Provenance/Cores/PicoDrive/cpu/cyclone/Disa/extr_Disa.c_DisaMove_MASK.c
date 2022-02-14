
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (char*,char*,char*,...) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{

  int VAR_3=0,VAR_4=0;
  char VAR_5[64]="",VAR_6[64]="",VAR_7[64]="";
  char *VAR_8="";
  int VAR_9=0;

  if ((VAR_2&0x01c0)==0x0040) VAR_8="a";


  switch (VAR_2&0x3000)
  {
    case 0x1000: VAR_9=0; break;
    case 0x3000: VAR_9=1; break;
    case 0x2000: VAR_9=2; break;
    default: return 1;
  }

  VAR_3 = VAR_2&0x003f;
  FUNC_0(VAR_6,VAR_3,VAR_9);

  VAR_4 =(VAR_2&0x01c0)>>3;
  VAR_4|=(VAR_2&0x0e00)>>9;
  FUNC_0(VAR_7,VAR_4,VAR_9);

  FUNC_1(VAR_5,"move%s.%c",VAR_8,VAR_1[VAR_9]);
  FUNC_1(VAR_0,"%s %s, %s",VAR_5,VAR_6,VAR_7);
  return 0;
}
