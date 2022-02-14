
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TAOS_ROW ;
typedef int TAOS_RES ;
typedef int TAOS_FIELD ;


 int FUNC_0 (char*,char*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int *,int) ;

void FUNC_4(void *VAR_0, TAOS_RES *VAR_1, TAOS_ROW VAR_2)
{

  char VAR_3[128];

  TAOS_FIELD *VAR_4 = FUNC_1(VAR_1);
  int VAR_5 = FUNC_2(VAR_1);

  FUNC_3(VAR_3, VAR_2, VAR_4, VAR_5);

  FUNC_0("\n%s\n", VAR_3);
}
