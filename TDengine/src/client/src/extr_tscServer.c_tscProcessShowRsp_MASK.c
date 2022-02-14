
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;


typedef int int32_t ;
typedef size_t int16_t ;
struct TYPE_28__ {size_t columnIndex; int member_0; } ;
struct TYPE_27__ {int numOfColumns; int sid; } ;
struct TYPE_26__ {TYPE_7__* pMeterMeta; } ;
struct TYPE_25__ {int bytes; } ;
struct TYPE_24__ {TYPE_7__ meterMeta; int qhandle; } ;
struct TYPE_20__ {int numOfOutputCols; } ;
struct TYPE_23__ {char showType; TYPE_13__ fieldsInfo; int colList; int numOfCols; } ;
struct TYPE_21__ {int qhandle; scalar_t__ pRsp; } ;
struct TYPE_22__ {TYPE_3__ cmd; TYPE_1__ res; } ;
typedef TYPE_1__ SSqlRes ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SShowRspMsg ;
typedef TYPE_5__ SSchema ;
typedef TYPE_6__ SMeterMetaInfo ;
typedef TYPE_7__ SMeterMeta ;
typedef TYPE_8__ SColumnIndex ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int ,char*,char*,int,int ) ;
 int FUNC_4 (int ,void*,int) ;
 TYPE_5__* FUNC_5 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (TYPE_3__*,TYPE_8__*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_13__*,size_t,TYPE_5__*) ;
 TYPE_6__* FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_1__*) ;

int FUNC_12(SSqlObj *VAR_2) {
  SMeterMeta * VAR_3;
  SShowRspMsg *VAR_4;
  SSchema * VAR_5;
  char VAR_6[20];

  SSqlRes * VAR_7 = &VAR_2->res;
  SSqlCmd * VAR_8 = &VAR_2->cmd;
  SMeterMetaInfo *VAR_9 = FUNC_10(VAR_8, 0);

  VAR_4 = (SShowRspMsg *)VAR_7->pRsp;
  VAR_7->qhandle = VAR_4->qhandle;

  FUNC_11(VAR_7);
  VAR_3 = &(VAR_4->meterMeta);

  VAR_3->numOfColumns = FUNC_1(VAR_3->numOfColumns);

  VAR_5 = (SSchema *)((char *)VAR_3 + sizeof(SMeterMeta));
  VAR_3->sid = FUNC_1(VAR_3->sid);
  for (int VAR_10 = 0; VAR_10 < VAR_3->numOfColumns; ++VAR_10) {
    VAR_5->bytes = FUNC_0(VAR_5->bytes);
    VAR_5++;
  }

  VAR_6[0] = VAR_8->showType + 'a';
  FUNC_2(VAR_6 + 1, "showlist");

  FUNC_4(VAR_1, (void *)&(VAR_9->pMeterMeta), 0);

  int32_t VAR_11 = VAR_3->numOfColumns * sizeof(SSchema) + sizeof(SMeterMeta);
  VAR_9->pMeterMeta =
      (SMeterMeta *)FUNC_3(VAR_1, VAR_6, (char *)VAR_3, VAR_11, VAR_0);
  VAR_8->numOfCols = VAR_8->fieldsInfo.numOfOutputCols;
  SSchema *VAR_12 = FUNC_5(VAR_9->pMeterMeta);

  FUNC_7(&VAR_8->colList, VAR_3->numOfColumns);
  SColumnIndex VAR_13 = {0};

  for (int16_t VAR_14 = 0; VAR_14 < VAR_3->numOfColumns; ++VAR_14) {
    VAR_13.columnIndex = VAR_14;
    FUNC_6(VAR_8, &VAR_13);
    FUNC_9(&VAR_8->fieldsInfo, VAR_14, &VAR_12[VAR_14]);
  }

  FUNC_8(VAR_8);
  return 0;
}
