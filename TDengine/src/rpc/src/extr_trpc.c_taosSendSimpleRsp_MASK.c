
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (void*,char,int) ;
 int FUNC_2 (void*,char*,int) ;

int FUNC_3(void *VAR_0, char VAR_1, char VAR_2) {
  char *VAR_3, *VAR_4;
  int VAR_5;

  if (VAR_0 == ((void*)0)) {
    FUNC_0("connection is gone, response could not be sent");
    return -1;
  }

  VAR_4 = FUNC_1(VAR_0, VAR_1, 32);
  VAR_3 = VAR_4;

  *VAR_3 = VAR_2;
  VAR_3++;

  VAR_5 = (int)(VAR_3 - VAR_4);
  FUNC_2(VAR_0, VAR_4, VAR_5);

  return VAR_5;
}
