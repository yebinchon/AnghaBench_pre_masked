
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TAOS ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;

void *FUNC_5(void *VAR_1) {
  TAOS *VAR_2 = (TAOS *)VAR_1;
  char *VAR_3 = FUNC_0(VAR_0);
  if (VAR_3 == ((void*)0)) return ((void*)0);

  while (1) {
    FUNC_1(VAR_3, 0, VAR_0);
    FUNC_2();


    FUNC_3(VAR_2, VAR_3);


    FUNC_4(VAR_2, VAR_3);
  }

  return ((void*)0);
}
