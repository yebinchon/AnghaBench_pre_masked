
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
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,char*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;

int FUNC_4(SMeterMeta *VAR_4, SShowObj *VAR_5, SConnObj *VAR_6) {
  int VAR_7 = 0;

  VAR_5->bytes[VAR_7] = VAR_3;
  SSchema *VAR_8 = FUNC_3(VAR_4);

  VAR_8[VAR_7].type = VAR_0;
  FUNC_2(VAR_8[VAR_7].name, "user");
  VAR_8[VAR_7].bytes = FUNC_0(VAR_5->bytes[VAR_7]);
  VAR_7++;

  VAR_5->bytes[VAR_7] = VAR_2 + 6;
  VAR_8[VAR_7].type = VAR_0;
  FUNC_2(VAR_8[VAR_7].name, "ip:port");
  VAR_8[VAR_7].bytes = FUNC_0(VAR_5->bytes[VAR_7]);
  VAR_7++;

  VAR_5->bytes[VAR_7] = 8;
  VAR_8[VAR_7].type = VAR_1;
  FUNC_2(VAR_8[VAR_7].name, "login time");
  VAR_8[VAR_7].bytes = FUNC_0(VAR_5->bytes[VAR_7]);
  VAR_7++;

  VAR_4->numOfColumns = FUNC_0(VAR_7);
  VAR_5->numOfColumns = VAR_7;

  VAR_5->offset[0] = 0;
  for (int VAR_9 = 1; VAR_9 < VAR_7; ++VAR_9) VAR_5->offset[VAR_9] = VAR_5->offset[VAR_9 - 1] + VAR_5->bytes[VAR_9 - 1];

  VAR_5->numOfRows = 1000000;
  VAR_5->pNode = ((void*)0);
  VAR_5->rowSize = VAR_5->offset[VAR_7 - 1] + VAR_5->bytes[VAR_7 - 1];

  FUNC_1(VAR_5, VAR_6);
  return 0;
}
