
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
struct TYPE_12__ {int* bytes; int numOfColumns; int* offset; int rowSize; int numOfRows; } ;
struct TYPE_11__ {int numOfTables; } ;
typedef TYPE_2__ SShowObj ;
typedef TYPE_3__ SSchema ;
typedef TYPE_4__ SMeterMeta ;
typedef TYPE_5__ SConnObj ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*) ;

int FUNC_3(SMeterMeta *VAR_5, SShowObj *VAR_6, SConnObj *VAR_7) {
  int VAR_8 = 0;

  if (VAR_7->pDb == ((void*)0)) return VAR_0;

  SSchema *VAR_9 = FUNC_2(VAR_5);

  VAR_6->bytes[VAR_8] = VAR_4;
  VAR_9[VAR_8].type = VAR_1;
  FUNC_1(VAR_9[VAR_8].name, "table_name");
  VAR_9[VAR_8].bytes = FUNC_0(VAR_6->bytes[VAR_8]);
  VAR_8++;

  VAR_6->bytes[VAR_8] = 8;
  VAR_9[VAR_8].type = VAR_3;
  FUNC_1(VAR_9[VAR_8].name, "created_time");
  VAR_9[VAR_8].bytes = FUNC_0(VAR_6->bytes[VAR_8]);
  VAR_8++;

  VAR_6->bytes[VAR_8] = 2;
  VAR_9[VAR_8].type = VAR_2;
  FUNC_1(VAR_9[VAR_8].name, "columns");
  VAR_9[VAR_8].bytes = FUNC_0(VAR_6->bytes[VAR_8]);
  VAR_8++;

  VAR_6->bytes[VAR_8] = VAR_4;
  VAR_9[VAR_8].type = VAR_1;
  FUNC_1(VAR_9[VAR_8].name, "stable");
  VAR_9[VAR_8].bytes = FUNC_0(VAR_6->bytes[VAR_8]);
  VAR_8++;

  VAR_5->numOfColumns = FUNC_0(VAR_8);
  VAR_6->numOfColumns = VAR_8;

  VAR_6->offset[0] = 0;
  for (int VAR_10 = 1; VAR_10 < VAR_8; ++VAR_10) VAR_6->offset[VAR_10] = VAR_6->offset[VAR_10 - 1] + VAR_6->bytes[VAR_10 - 1];


  VAR_6->numOfRows = VAR_7->pDb->numOfTables;
  VAR_6->rowSize = VAR_6->offset[VAR_8 - 1] + VAR_6->bytes[VAR_8 - 1];

  return 0;
}
