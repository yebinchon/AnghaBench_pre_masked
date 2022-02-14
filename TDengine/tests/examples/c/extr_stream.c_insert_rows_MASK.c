
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* server_ip; char* db_name; char* tbl_name; } ;
typedef TYPE_1__ param ;
typedef int TAOS ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,char*,...) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*,char*,int *,int ) ;
 char* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char*) ;

void* FUNC_8(void *VAR_1)
{
  TAOS *VAR_2;
  char VAR_3[1024] = { 0 };
  param *VAR_4 = (param * )VAR_1;

  if (((void*)0) == VAR_4){
   FUNC_1("para is null!\n");
    FUNC_0(1);
  }

  VAR_2 = FUNC_5(VAR_4->server_ip, "root", "taosdata", ((void*)0), 0);
  if (VAR_2 == ((void*)0)) {
    FUNC_1("failed to connet to server:%s\n", VAR_4->server_ip);
    FUNC_0(1);
  }


  FUNC_3(VAR_3, "drop database %s;", VAR_4->db_name);
  if (FUNC_7(VAR_2, VAR_3) != 0) {
    FUNC_1("failed to drop database, reason:%s\n", FUNC_6(VAR_2));
    FUNC_0(1);
  }


  FUNC_3(VAR_3, "create database %s;", VAR_4->db_name);
  if (FUNC_7(VAR_2, VAR_3) != 0) {
    FUNC_1("failed to create database, reason:%s\n", FUNC_6(VAR_2));
    FUNC_0(1);
  }


  FUNC_3(VAR_3, "use %s;", VAR_4->db_name);
  if (FUNC_7(VAR_2, VAR_3) != 0) {
    FUNC_1("failed to use database, reason:%s\n", FUNC_6(VAR_2));
    FUNC_0(1);
  }


  FUNC_3(VAR_3, "create table %s (ts timestamp, speed int);", VAR_4->tbl_name);
  if (FUNC_7(VAR_2, VAR_3) != 0) {
    FUNC_1("failed to create table, reason:%s\n", FUNC_6(VAR_2));
    FUNC_0(1);
  }


  int VAR_5 = 0;
  while (1) {
    if (VAR_0) break;

    VAR_5++;
    FUNC_3(VAR_3, "insert into %s values (%ld, %d)", VAR_4->tbl_name, 1546300800000+VAR_5*1000, VAR_5);
    if (FUNC_7(VAR_2, VAR_3)) {
      FUNC_1("failed to insert row [%s], reason:%s\n", VAR_3, FUNC_6(VAR_2));
    }
    FUNC_2(1);
  }

  FUNC_4(VAR_2);
  return 0;
}
