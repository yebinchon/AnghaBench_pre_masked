
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_2(int VAR_1)
{

  int VAR_2=0,VAR_3=0;
  char VAR_4[64]="";

  VAR_3=(VAR_1>>3)&1;
  VAR_2=(VAR_1&7)|8;
  FUNC_0(VAR_4,VAR_2,0);

  if (VAR_3) FUNC_1(VAR_0,"move usp, %s",VAR_4);
  else FUNC_1(VAR_0,"move %s, usp",VAR_4);
  return 0;
}
