
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int ,char*,char*,char,int,char,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_3)
{


  int VAR_4=0,VAR_5=0,VAR_6=0,VAR_7=0,VAR_8=0,VAR_9=0;

  VAR_4 =(VAR_3>>9)&7;
  VAR_5 =(VAR_3>>8)&1;
  VAR_6 =(VAR_3>>6)&3; if (VAR_6>=3) return 1;
  VAR_7=(VAR_3>>5)&1;
  VAR_8 =(VAR_3>>3)&3;
  VAR_9 = VAR_3 &7;

  if (VAR_7==0) VAR_4=((VAR_4-1)&7)+1;

  FUNC_0(VAR_1,"%s%c.%c %c%d, d%d",
    VAR_0[VAR_8], VAR_5?'l':'r', VAR_2[VAR_6],
    VAR_7?'d':'#', VAR_4, VAR_9);
  return 0;
}
