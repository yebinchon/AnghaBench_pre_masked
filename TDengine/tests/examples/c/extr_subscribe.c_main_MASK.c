
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TAOS_SUB ;
typedef int * TAOS_ROW ;
typedef int TAOS_FIELD ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (char*,int *,int *,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*,char*,char*,char*,int ,int) ;
 int FUNC_8 (int *) ;

int FUNC_9(int VAR_0, char *VAR_1[])
{
  TAOS_SUB *VAR_2;
  TAOS_ROW VAR_3;
  char VAR_4[64], VAR_5[64];
  char VAR_6[256];

  if ( VAR_0 == 1 ) {
    FUNC_1("usage: %s server-ip db-name table-name \n", VAR_1[0]);
    FUNC_0(0);
  }

  if ( VAR_0 >= 2 ) FUNC_2(VAR_4, VAR_1[2]);
  if ( VAR_0 >= 3 ) FUNC_2(VAR_5, VAR_1[3]);

  VAR_2 = FUNC_7(VAR_1[1], "root", "taosdata", VAR_4, VAR_5, 0, 1000);
  if ( VAR_2 == ((void*)0) ) {
    FUNC_1("failed to connet to db:%s\n", VAR_4);
    FUNC_0(1);
  }

  TAOS_FIELD *VAR_7 = FUNC_4(VAR_2);
  int VAR_8 = FUNC_6(VAR_2);

  FUNC_1("start to retrieve data\n");
  FUNC_1("please use other taos client, insert rows into %s.%s\n", VAR_4, VAR_5);
  while ( 1 ) {
    VAR_3 = FUNC_3(VAR_2);
    if ( VAR_3 == ((void*)0) ) break;

    FUNC_5(VAR_6, VAR_3, VAR_7, VAR_8);
    FUNC_1("%s\n", VAR_6);
  }

  FUNC_8(VAR_2);

  return 0;
}
