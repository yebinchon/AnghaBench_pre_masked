
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 char** VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (char*) ;

int FUNC_9(char *VAR_4,int VAR_5)
{
  char VAR_6[80];
  int VAR_7;
  int VAR_8;
  int VAR_9;

  FUNC_1();
  FUNC_7(VAR_6,"Press key for %s",VAR_4);
  FUNC_3((78-FUNC_8(VAR_6))/2,8);
  FUNC_2(VAR_6);
  FUNC_3(34,9);
  FUNC_2("(ESC=none)");
  FUNC_7(VAR_6,"Current setting: %s",VAR_2[VAR_5]);
  FUNC_3((78-FUNC_8(VAR_6))/2,11);
  FUNC_2(VAR_6);
  while (FUNC_4());
  FUNC_6();

  do{
    while (VAR_1==VAR_3);
    VAR_7=VAR_0[VAR_3++];
    if (VAR_3==100) VAR_3=0;

    VAR_9=(VAR_7>=59 && VAR_7<=68) || VAR_7==87 || VAR_7==88 || VAR_7==167
        || VAR_7==183 || VAR_7==70 || VAR_7==197;
  }while ((VAR_7&0xff00) || *VAR_2[VAR_7&0xff]=='?' || *VAR_2[VAR_7&0xff]=='#' || VAR_9);
  VAR_8=VAR_7&0xff;
  if (VAR_8==1) VAR_8=255;
  FUNC_7(VAR_6,"Current setting: %s",VAR_2[VAR_8]);
  FUNC_3(1,11);
  FUNC_0();
  FUNC_3((78-FUNC_8(VAR_6))/2,11);
  FUNC_2(VAR_6);

  do{
    while (VAR_1==VAR_3);
    VAR_7=VAR_0[VAR_3++];
    if (VAR_3==100) VAR_3=0;
  }while(!(VAR_7&0xff00));
  FUNC_5();
  return VAR_8;
}
