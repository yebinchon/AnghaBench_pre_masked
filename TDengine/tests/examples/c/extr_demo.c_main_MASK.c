
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TAOS_ROW ;
typedef int TAOS_RES ;
typedef int TAOS_FIELD ;
typedef int TAOS ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*,...) ;
 int * FUNC_4 (char*,char*,char*,int *,int ) ;
 char* FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,int ,int *,int) ;
 scalar_t__ FUNC_12 (int *,char*) ;
 int * FUNC_13 (int *) ;

int FUNC_14(int VAR_0, char *VAR_1[]) {
  TAOS * VAR_2;
  char VAR_3[1024];
  TAOS_RES *VAR_4;


  if (VAR_0 < 2) {
    FUNC_2("please input server-ip \n");
    return 0;
  }


  FUNC_10();

  VAR_2 = FUNC_4(VAR_1[1], "root", "taosdata", ((void*)0), 0);
  if (VAR_2 == ((void*)0)) {
    FUNC_2("failed to connect to server, reason:%s\n", FUNC_5(VAR_2));
    FUNC_0(1);
  }
  FUNC_2("success to connect to server\n");


  FUNC_12(VAR_2, "drop database demo");
  if (FUNC_12(VAR_2, "create database demo") != 0) {
    FUNC_2("failed to create database, reason:%s\n", FUNC_5(VAR_2));
    FUNC_0(1);
  }
  FUNC_2("success to create database\n");

  FUNC_12(VAR_2, "use demo");


  if (FUNC_12(VAR_2, "create table m1 (ts timestamp, speed int)") != 0) {
    FUNC_2("failed to create table, reason:%s\n", FUNC_5(VAR_2));
    FUNC_0(1);
  }
  FUNC_2("success to create table\n");





  int VAR_5 = 0;
  for (VAR_5 = 0; VAR_5 < 10; ++VAR_5) {
    FUNC_3(VAR_3, "insert into m1 values (%ld, %d)", 1546300800000 + VAR_5 * 1000, VAR_5 * 10);
    if (FUNC_12(VAR_2, VAR_3)) {
      FUNC_2("failed to insert row: %i, reason:%s\n", VAR_5, FUNC_5(VAR_2));
    }

  }
  FUNC_2("success to insert rows, total %d rows\n", VAR_5);


  FUNC_3(VAR_3, "SELECT * FROM m1");
  if (FUNC_12(VAR_2, VAR_3) != 0) {
    FUNC_2("failed to select, reason:%s\n", FUNC_5(VAR_2));
    FUNC_0(1);
  }

  VAR_4 = FUNC_13(VAR_2);

  if (VAR_4 == ((void*)0)) {
    FUNC_2("failed to get result, reason:%s\n", FUNC_5(VAR_2));
    FUNC_0(1);
  }

  TAOS_ROW VAR_6;
  int VAR_7 = 0;
  int VAR_8 = FUNC_8(VAR_2);
  TAOS_FIELD *VAR_9 = FUNC_6(VAR_4);
  char VAR_10[256];

  FUNC_2("select * from table, result:\n");

  while ((VAR_6 = FUNC_7(VAR_4))) {
    VAR_7++;
    FUNC_11(VAR_10, VAR_6, VAR_9, VAR_8);
    FUNC_2("%s\n", VAR_10);
  }

  FUNC_9(VAR_4);
  FUNC_2("====demo end====\n\n");
  return FUNC_1();
}
