
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {void* numOfColumns; } ;
struct TYPE_10__ {void* bytes; int name; void* type; } ;
struct TYPE_9__ {int* bytes; int numOfColumns; int* offset; int numOfRows; int rowSize; int * pNode; } ;
typedef TYPE_1__ SShowObj ;
typedef TYPE_2__ SSchema ;
typedef TYPE_3__ SMeterMeta ;
typedef int SConnObj ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,char*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;

int FUNC_4(SMeterMeta *VAR_6, SShowObj *VAR_7, SConnObj *VAR_8) {
  int VAR_9 = 0;
  SSchema *VAR_10 = FUNC_3(VAR_6);

  VAR_7->bytes[VAR_9] = VAR_5;
  VAR_10[VAR_9].type = VAR_0;
  FUNC_2(VAR_10[VAR_9].name, "user");
  VAR_10[VAR_9].bytes = FUNC_0(VAR_7->bytes[VAR_9]);
  VAR_9++;

  VAR_7->bytes[VAR_9] = VAR_3 + 14;
  VAR_10[VAR_9].type = VAR_0;
  FUNC_2(VAR_10[VAR_9].name, "ip:port:id");
  VAR_10[VAR_9].bytes = FUNC_0(VAR_7->bytes[VAR_9]);
  VAR_9++;

  VAR_7->bytes[VAR_9] = 8;
  VAR_10[VAR_9].type = VAR_2;
  FUNC_2(VAR_10[VAR_9].name, "created time");
  VAR_10[VAR_9].bytes = FUNC_0(VAR_7->bytes[VAR_9]);
  VAR_9++;

  VAR_7->bytes[VAR_9] = 8;
  VAR_10[VAR_9].type = VAR_2;
  FUNC_2(VAR_10[VAR_9].name, "exec time");
  VAR_10[VAR_9].bytes = FUNC_0(VAR_7->bytes[VAR_9]);
  VAR_9++;

  VAR_7->bytes[VAR_9] = 8;
  VAR_10[VAR_9].type = VAR_1;
  FUNC_2(VAR_10[VAR_9].name, "time(us)");
  VAR_10[VAR_9].bytes = FUNC_0(VAR_7->bytes[VAR_9]);
  VAR_9++;

  VAR_7->bytes[VAR_9] = VAR_4;
  VAR_10[VAR_9].type = VAR_0;
  FUNC_2(VAR_10[VAR_9].name, "sql");
  VAR_10[VAR_9].bytes = FUNC_0(VAR_7->bytes[VAR_9]);
  VAR_9++;

  VAR_7->bytes[VAR_9] = 4;
  VAR_10[VAR_9].type = VAR_1;
  FUNC_2(VAR_10[VAR_9].name, "cycles");
  VAR_10[VAR_9].bytes = FUNC_0(VAR_7->bytes[VAR_9]);
  VAR_9++;

  VAR_6->numOfColumns = FUNC_0(VAR_9);
  VAR_7->numOfColumns = VAR_9;

  VAR_7->offset[0] = 0;
  for (int VAR_11 = 1; VAR_11 < VAR_9; ++VAR_11) VAR_7->offset[VAR_11] = VAR_7->offset[VAR_11 - 1] + VAR_7->bytes[VAR_11 - 1];

  VAR_7->numOfRows = 1000000;
  VAR_7->pNode = ((void*)0);
  VAR_7->rowSize = VAR_7->offset[VAR_9 - 1] + VAR_7->bytes[VAR_9 - 1];

  FUNC_1(VAR_7, VAR_8);
  return 0;
}
