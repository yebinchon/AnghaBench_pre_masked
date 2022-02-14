
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_2__ {char* sql; } ;
typedef int TAOS_ROW ;
typedef int FILE ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char**,size_t*,int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 void* FUNC_9 (char*,char*,char*,int *,int ) ;
 int FUNC_10 (void*) ;
 char* FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (void*,char*) ;
 void* FUNC_15 (void*) ;

void FUNC_16() {
  FUNC_7("read data\n");
  FUNC_7("---- sql: %s\n", VAR_0.sql);

  void *VAR_1 = FUNC_9("127.0.0.1", "root", "taosdata", ((void*)0), 0);
  if (VAR_1 == ((void*)0))
    FUNC_10(VAR_1);

  FILE *VAR_2 = FUNC_3(VAR_0.sql, "r");
  if (VAR_2 == ((void*)0)) {
    FUNC_7("failed to open file %s\n", VAR_0.sql);
    FUNC_0(1);
  }
  FUNC_7("open file %s success\n", VAR_0.sql);

  char *VAR_3 = ((void*)0);
  size_t VAR_4 = 0;
  while (!FUNC_2(VAR_2)) {
    FUNC_4(VAR_3);
    VAR_3 = ((void*)0);
    VAR_4 = 0;

    FUNC_6(&VAR_3, &VAR_4, VAR_2);
    if (VAR_3 == ((void*)0)) break;

    if (FUNC_8(VAR_3) < 10) continue;

    int64_t VAR_5 = FUNC_5();

    int VAR_6 = FUNC_14(VAR_1, VAR_3);
    if (VAR_6 != 0) {
      FUNC_10(VAR_1);
    }

    void *VAR_7 = FUNC_15(VAR_1);
    if (VAR_7 == ((void*)0)) {
      FUNC_7("failed to get result, reason:%s\n", FUNC_11(VAR_1));
      FUNC_0(1);
    }

    TAOS_ROW VAR_8;
    int VAR_9 = 0;


    while ((VAR_8 = FUNC_12(VAR_7))) {
      VAR_9++;



    }

    FUNC_13(VAR_7);

    int64_t VAR_10 = FUNC_5() - VAR_5;
    float VAR_11 = (float)VAR_10 / 1000;
    FUNC_7("---- Spent %f seconds to query: %s", VAR_11, VAR_3);
  }

  FUNC_1(VAR_2);
}
