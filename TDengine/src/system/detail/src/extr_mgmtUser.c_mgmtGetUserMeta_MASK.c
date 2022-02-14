
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {TYPE_2__* pAcct; } ;
struct TYPE_16__ {void* numOfColumns; } ;
struct TYPE_15__ {void* bytes; int name; void* type; } ;
struct TYPE_14__ {int* bytes; int numOfColumns; int* offset; int rowSize; int pNode; int numOfRows; } ;
struct TYPE_12__ {int numOfUsers; } ;
struct TYPE_13__ {int pUser; TYPE_1__ acctInfo; } ;
typedef TYPE_3__ SShowObj ;
typedef TYPE_4__ SSchema ;
typedef TYPE_5__ SMeterMeta ;
typedef TYPE_6__ SConnObj ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 TYPE_4__* FUNC_2 (TYPE_5__*) ;

int FUNC_3(SMeterMeta *VAR_3, SShowObj *VAR_4, SConnObj *VAR_5) {
  int VAR_6 = 0;
  SSchema *VAR_7 = FUNC_2(VAR_3);

  VAR_4->bytes[VAR_6] = VAR_2;
  VAR_7[VAR_6].type = VAR_0;
  FUNC_1(VAR_7[VAR_6].name, "name");
  VAR_7[VAR_6].bytes = FUNC_0(VAR_4->bytes[VAR_6]);
  VAR_6++;

  VAR_4->bytes[VAR_6] = 6;
  VAR_7[VAR_6].type = VAR_0;
  FUNC_1(VAR_7[VAR_6].name, "privilege");
  VAR_7[VAR_6].bytes = FUNC_0(VAR_4->bytes[VAR_6]);
  VAR_6++;

  VAR_4->bytes[VAR_6] = 8;
  VAR_7[VAR_6].type = VAR_1;
  FUNC_1(VAR_7[VAR_6].name, "created time");
  VAR_7[VAR_6].bytes = FUNC_0(VAR_4->bytes[VAR_6]);
  VAR_6++;

  VAR_3->numOfColumns = FUNC_0(VAR_6);
  VAR_4->numOfColumns = VAR_6;

  VAR_4->offset[0] = 0;
  for (int VAR_8 = 1; VAR_8 < VAR_6; ++VAR_8) VAR_4->offset[VAR_8] = VAR_4->offset[VAR_8 - 1] + VAR_4->bytes[VAR_8 - 1];


  VAR_4->numOfRows = VAR_5->pAcct->acctInfo.numOfUsers;
  VAR_4->pNode = VAR_5->pAcct->pUser;
  VAR_4->rowSize = VAR_4->offset[VAR_6 - 1] + VAR_4->bytes[VAR_6 - 1];

  return 0;
}
