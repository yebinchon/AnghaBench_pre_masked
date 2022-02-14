
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*,char*,char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*) ;

int
FUNC_5(void * VAR_1, char * VAR_2, char * VAR_3)

{
  int VAR_4;
  char * VAR_5;
  char * VAR_6;

  VAR_5 = (char *) ((void*)0);
  VAR_6 = (char *) ((void*)0);

  if(VAR_2) {
    VAR_4 = FUNC_4(VAR_2);

    VAR_5 = FUNC_3(VAR_4 + 1);
    if(!VAR_5)
      return VAR_0;

    FUNC_0(VAR_5, VAR_2, VAR_4, VAR_4);
    VAR_5[VAR_4] = '\0';
  }

  if(VAR_3) {
    VAR_4 = FUNC_4(VAR_3);

    VAR_6 = FUNC_3(VAR_4 + 1);
    if(!VAR_6) {
      FUNC_1(VAR_5);
      return VAR_0;
    }

    FUNC_0(VAR_6, VAR_3, VAR_4, VAR_4);
    VAR_6[VAR_4] = '\0';
  }

  VAR_4 = FUNC_2(VAR_1, VAR_5, VAR_6);
  FUNC_1(VAR_6);
  FUNC_1(VAR_5);
  return VAR_4;
}
