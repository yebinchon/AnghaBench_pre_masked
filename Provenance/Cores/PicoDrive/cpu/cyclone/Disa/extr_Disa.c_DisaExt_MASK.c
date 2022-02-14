
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int ,char*,int,char*) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{

  char VAR_3[64]="";
  int VAR_4=0;

  VAR_4=(VAR_2>>6)&1; VAR_4++;
  FUNC_0(VAR_3,VAR_2&0x3f,VAR_4);

  FUNC_1(VAR_0,"ext.%c %s",VAR_1[VAR_4],VAR_3);
  return 0;
}
