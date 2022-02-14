
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_4__ {int id; char* name; int timeStamp; int rowsInserted; int rowsRetrieved; int * taos; } ;
typedef int TAOS ;
typedef TYPE_1__ STable ;


 void* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct timeval*,int *) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (TYPE_1__*,int ,size_t) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,char*,char*,...) ;
 int VAR_2 ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*,char*,char*,int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int VAR_4 ;
 scalar_t__ FUNC_14 (int *,char*) ;
 int FUNC_15 (int *,char*,int ,void*) ;
 int VAR_5 ;

int FUNC_16(int VAR_6, char *VAR_7[])
{
  TAOS *VAR_8;
  struct timeval VAR_9;
  int VAR_10;
  char VAR_11[1024] = { 0 };
  char VAR_12[20] = { 0 };
  char VAR_13[128] = { 0 };
  STable *VAR_14;

  if (VAR_6 != 5) {
    FUNC_7("usage: %s server-ip dbname rowsPerTable numOfTables\n", VAR_7[0]);
    FUNC_1(0);
  }


  if (VAR_6 >= 3) FUNC_9(VAR_13, VAR_7[2]);
  if (VAR_6 >= 4) VAR_1 = FUNC_0(VAR_7[3]);
  if (VAR_6 >= 5) VAR_0 = FUNC_0(VAR_7[4]);

  size_t VAR_15 = sizeof(STable) * (size_t)VAR_0;
  VAR_14 = (STable *)FUNC_5(VAR_15);
  FUNC_6(VAR_14, 0, VAR_15);

  FUNC_13();

  VAR_8 = FUNC_11(VAR_7[1], "root", "taosdata", ((void*)0), 0);
  if (VAR_8 == ((void*)0))
    FUNC_12(VAR_8);

  FUNC_7("success to connect to server\n");

  FUNC_8(VAR_11, "drop database %s", VAR_13);
  FUNC_14(VAR_8, VAR_11);

  FUNC_8(VAR_11, "create database %s", VAR_13);
  if (FUNC_14(VAR_8, VAR_11) != 0)
    FUNC_12(VAR_8);

  FUNC_8(VAR_11, "use %s", VAR_13);
  if (FUNC_14(VAR_8, VAR_11) != 0)
    FUNC_12(VAR_8);

  FUNC_9(VAR_12, "asytbl_");
  for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
    VAR_14[VAR_10].id = VAR_10;
    VAR_14[VAR_10].taos = VAR_8;
    FUNC_8(VAR_14[VAR_10].name, "%s%d", VAR_12, VAR_10);
    FUNC_8(VAR_11, "create table %s%d (ts timestamp, volume bigint)", VAR_12, VAR_10);
    if (FUNC_14(VAR_8, VAR_11) != 0)
      FUNC_12(VAR_8);
  }

  FUNC_4(&VAR_9, ((void*)0));
  for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10)
    VAR_14[VAR_10].timeStamp = (time_t)(VAR_9.tv_sec) * 1000 + VAR_9.tv_usec / 1000;

  FUNC_7("success to create tables, press any key to insert\n");
  FUNC_3();

  FUNC_7("start to insert...\n");
  FUNC_4(&VAR_9, ((void*)0));
  VAR_2 = VAR_9.tv_sec * 1000000 + VAR_9.tv_usec;

  for (VAR_10 = 0; VAR_10<VAR_0; ++VAR_10) {

    FUNC_8(VAR_11, "insert into %s values(%ld, 0)", VAR_14[VAR_10].name, 1546300800000 + VAR_10);
    FUNC_15(VAR_8, VAR_11, VAR_4, (void *)(VAR_14 + VAR_10));
  }

  FUNC_7("once insert finished, presse any key to query\n");
  FUNC_3();

  FUNC_7("start to query...\n");
  FUNC_4(&VAR_9, ((void*)0));
  VAR_2 = VAR_9.tv_sec * 1000000 + VAR_9.tv_usec;
  VAR_3 = 0;

  for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {

    FUNC_8(VAR_11, "select * from %s", VAR_14[VAR_10].name);
    FUNC_15(VAR_8, VAR_11, VAR_5, (void *)(VAR_14 + VAR_10));
  }

  FUNC_7("\nonce finished, press any key to exit\n");
  FUNC_3();

  for (VAR_10 = 0; VAR_10<VAR_0; ++VAR_10) {
    FUNC_7("%s inserted:%d retrieved:%d\n", VAR_14[VAR_10].name, VAR_14[VAR_10].rowsInserted, VAR_14[VAR_10].rowsRetrieved);
  }

  FUNC_3();

  FUNC_10(VAR_8);
  FUNC_2(VAR_14);

  FUNC_7("==== async demo end====\n");
  FUNC_7("\n");
  return 0;
}
