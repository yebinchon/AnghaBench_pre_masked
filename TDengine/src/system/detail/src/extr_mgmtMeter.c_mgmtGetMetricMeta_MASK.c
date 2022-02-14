
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* pDb; } ;
struct TYPE_14__ {void* numOfColumns; } ;
struct TYPE_13__ {void* bytes; int name; void* type; } ;
struct TYPE_12__ {int* bytes; int numOfColumns; int* offset; int rowSize; int pNode; int numOfRows; } ;
struct TYPE_11__ {int pMetric; int numOfMetrics; } ;
typedef TYPE_2__ SShowObj ;
typedef TYPE_3__ SSchema ;
typedef TYPE_4__ SMeterMeta ;
typedef TYPE_5__ SConnObj ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*) ;

int FUNC_3(SMeterMeta *VAR_6, SShowObj *VAR_7, SConnObj *VAR_8) {
  int VAR_9 = 0;

  if (VAR_8->pDb == ((void*)0)) return VAR_0;

  SSchema *VAR_10 = FUNC_2(VAR_6);

  VAR_7->bytes[VAR_9] = VAR_5;
  VAR_10[VAR_9].type = VAR_1;
  FUNC_1(VAR_10[VAR_9].name, "name");
  VAR_10[VAR_9].bytes = FUNC_0(VAR_7->bytes[VAR_9]);
  VAR_9++;

  VAR_7->bytes[VAR_9] = 8;
  VAR_10[VAR_9].type = VAR_4;
  FUNC_1(VAR_10[VAR_9].name, "created_time");
  VAR_10[VAR_9].bytes = FUNC_0(VAR_7->bytes[VAR_9]);
  VAR_9++;

  VAR_7->bytes[VAR_9] = 2;
  VAR_10[VAR_9].type = VAR_3;
  FUNC_1(VAR_10[VAR_9].name, "columns");
  VAR_10[VAR_9].bytes = FUNC_0(VAR_7->bytes[VAR_9]);
  VAR_9++;

  VAR_7->bytes[VAR_9] = 2;
  VAR_10[VAR_9].type = VAR_3;
  FUNC_1(VAR_10[VAR_9].name, "tags");
  VAR_10[VAR_9].bytes = FUNC_0(VAR_7->bytes[VAR_9]);
  VAR_9++;

  VAR_7->bytes[VAR_9] = 4;
  VAR_10[VAR_9].type = VAR_2;
  FUNC_1(VAR_10[VAR_9].name, "tables");
  VAR_10[VAR_9].bytes = FUNC_0(VAR_7->bytes[VAR_9]);
  VAR_9++;

  VAR_6->numOfColumns = FUNC_0(VAR_9);
  VAR_7->numOfColumns = VAR_9;

  VAR_7->offset[0] = 0;
  for (int VAR_11 = 1; VAR_11 < VAR_9; ++VAR_11) VAR_7->offset[VAR_11] = VAR_7->offset[VAR_11 - 1] + VAR_7->bytes[VAR_11 - 1];

  VAR_7->numOfRows = VAR_8->pDb->numOfMetrics;
  VAR_7->pNode = VAR_8->pDb->pMetric;
  VAR_7->rowSize = VAR_7->offset[VAR_9 - 1] + VAR_7->bytes[VAR_9 - 1];

  return 0;
}
