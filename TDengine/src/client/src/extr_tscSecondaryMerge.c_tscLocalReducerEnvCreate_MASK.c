
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_10__ ;


typedef size_t uint32_t ;
typedef int tOrderDescriptor ;
struct TYPE_29__ {int flushModel; } ;
typedef TYPE_3__ tExtMemBuffer ;
typedef int tColModel ;
typedef size_t int32_t ;
struct TYPE_35__ {int name; scalar_t__ bytes; int type; } ;
struct TYPE_28__ {int numOfOutputCols; } ;
struct TYPE_34__ {TYPE_2__ fieldsInfo; } ;
struct TYPE_33__ {scalar_t__ resBytes; int resType; } ;
struct TYPE_31__ {size_t code; } ;
struct TYPE_32__ {TYPE_5__ res; TYPE_8__ cmd; } ;
struct TYPE_30__ {int name; scalar_t__ bytes; int type; } ;
struct TYPE_27__ {int numOfVnodes; } ;
struct TYPE_26__ {TYPE_1__* pMetricMeta; } ;
typedef TYPE_4__ TAOS_FIELD ;
typedef TYPE_5__ SSqlRes ;
typedef TYPE_6__ SSqlObj ;
typedef TYPE_7__ SSqlExpr ;
typedef TYPE_8__ SSqlCmd ;
typedef TYPE_9__ SSchema ;
typedef TYPE_10__ SMeterMetaInfo ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int **,TYPE_8__*,int *) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_9__*,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (TYPE_9__*,size_t,size_t) ;
 int FUNC_7 (TYPE_3__**,size_t,size_t,char*,int *) ;
 int FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (char*,TYPE_6__*) ;
 TYPE_4__* FUNC_10 (TYPE_8__*,size_t) ;
 TYPE_10__* FUNC_11 (TYPE_8__*,int ) ;
 TYPE_7__* FUNC_12 (TYPE_8__*,size_t) ;
 int FUNC_13 (char*,TYPE_6__*,size_t,size_t,char*) ;

int32_t FUNC_14(SSqlObj *VAR_4, tExtMemBuffer ***VAR_5, tOrderDescriptor **VAR_6,
                                 tColModel **VAR_7, uint32_t VAR_8) {
  SSqlCmd *VAR_9 = &VAR_4->cmd;
  SSqlRes *VAR_10 = &VAR_4->res;

  SSchema * VAR_11 = ((void*)0);
  tColModel *VAR_12 = ((void*)0);
  *VAR_7 = ((void*)0);

  SMeterMetaInfo *VAR_13 = FUNC_11(VAR_9, 0);

  (*VAR_5) = (tExtMemBuffer **)FUNC_3(VAR_1 * VAR_13->pMetricMeta->numOfVnodes);
  if (*VAR_5 == ((void*)0)) {
    FUNC_9("%p failed to allocate memory", VAR_4);
    VAR_10->code = VAR_2;
    return VAR_10->code;
  }

  VAR_11 = (SSchema *)FUNC_0(1, sizeof(SSchema) * VAR_9->fieldsInfo.numOfOutputCols);
  if (VAR_11 == ((void*)0)) {
    FUNC_9("%p failed to allocate memory", VAR_4);
    VAR_10->code = VAR_2;
    return VAR_10->code;
  }

  int32_t VAR_14 = 0;
  for (int32_t VAR_15 = 0; VAR_15 < VAR_9->fieldsInfo.numOfOutputCols; ++VAR_15) {
    SSqlExpr *VAR_16 = FUNC_12(VAR_9, VAR_15);

    VAR_11[VAR_15].bytes = VAR_16->resBytes;
    VAR_11[VAR_15].type = VAR_16->resType;

    VAR_14 += VAR_16->resBytes;
  }

  int32_t VAR_17 = VAR_8 / VAR_14;
  VAR_12 = FUNC_6(VAR_11, VAR_9->fieldsInfo.numOfOutputCols, VAR_17);

  for (int32_t VAR_18 = 0; VAR_18 < VAR_13->pMetricMeta->numOfVnodes; ++VAR_18) {
    char VAR_19[512] = {0};
    FUNC_2("tv_bf_db", VAR_19);
    FUNC_13("%p create [%d](%d) tmp file for subquery:%s", VAR_4, VAR_13->pMetricMeta->numOfVnodes, VAR_18, VAR_19);

    FUNC_7(&(*VAR_5)[VAR_18], VAR_8, VAR_14, VAR_19, VAR_12);
    (*VAR_5)[VAR_18]->flushModel = VAR_0;
  }

  if (FUNC_1(VAR_6, VAR_9, VAR_12) != VAR_3) {
    VAR_10->code = VAR_2;
    return VAR_10->code;
  }

  FUNC_4(VAR_11, 0, sizeof(SSchema) * VAR_9->fieldsInfo.numOfOutputCols);
  for (int32_t VAR_20 = 0; VAR_20 < VAR_9->fieldsInfo.numOfOutputCols; ++VAR_20) {
    TAOS_FIELD *VAR_21 = FUNC_10(VAR_9, VAR_20);

    VAR_11[VAR_20].type = VAR_21->type;
    VAR_11[VAR_20].bytes = VAR_21->bytes;
    FUNC_5(VAR_11[VAR_20].name, VAR_21->name);
  }

  *VAR_7 = FUNC_6(VAR_11, VAR_9->fieldsInfo.numOfOutputCols, VAR_17);
  FUNC_8(VAR_11);

  return VAR_3;
}
