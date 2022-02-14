
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_13__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_29__ {int rowSize; int precision; int numOfColumns; } ;
struct TYPE_28__ {TYPE_7__* pMeterMeta; int name; } ;
struct TYPE_27__ {int numOfCols; } ;
struct TYPE_26__ {TYPE_13__* pDataBlocks; int payload; } ;
struct TYPE_23__ {scalar_t__ numOfRows; int code; } ;
struct TYPE_25__ {TYPE_1__ res; TYPE_4__ cmd; } ;
struct TYPE_24__ {int size; scalar_t__ nAllocSize; scalar_t__ numOfParams; int rowSize; } ;
struct TYPE_22__ {TYPE_2__** pData; } ;
typedef TYPE_2__ STableDataBlocks ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SSqlCmd ;
typedef int SShellSubmitBlock ;
typedef int SSchema ;
typedef TYPE_5__ SParsedDataColInfo ;
typedef TYPE_6__ SMeterMetaInfo ;
typedef TYPE_7__ SMeterMeta ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int,TYPE_2__*) ;
 size_t FUNC_1 (char**,size_t*,int *) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (char**,TYPE_2__*,int *,TYPE_5__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_13__*,TYPE_2__*) ;
 TYPE_13__* FUNC_8 () ;
 TYPE_2__* FUNC_9 (int ,int,int,int ) ;
 TYPE_6__* FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_5__*,int *,int ) ;

__attribute__((used)) static int FUNC_12(SSqlObj *VAR_4, FILE *VAR_5) {
  size_t VAR_6 = 0;
  char * VAR_7 = ((void*)0);
  size_t VAR_8 = 0;
  int VAR_9 = 0;
  uint32_t VAR_10 = 0;
  SSqlCmd * VAR_11 = &VAR_4->cmd;
  int VAR_12 = 0;
  int32_t VAR_13 = 0;
  int VAR_14 = 0;
  SMeterMetaInfo *VAR_15 = FUNC_10(VAR_11, 0);
  SMeterMeta * VAR_16 = VAR_15->pMeterMeta;
  int32_t VAR_17 = VAR_16->rowSize;

  VAR_11->pDataBlocks = FUNC_8();
  STableDataBlocks *VAR_18 =
      FUNC_9(VAR_3, VAR_16->rowSize, sizeof(SShellSubmitBlock), VAR_15->name);

  FUNC_7(VAR_11->pDataBlocks, VAR_18);

  VAR_10 = FUNC_6(VAR_18, VAR_17);
  if (VAR_10 < 1) return -1;

  int VAR_19 = 0;
  SParsedDataColInfo VAR_20 = {.numOfCols = VAR_15->pMeterMeta->numOfColumns};
  SSchema * VAR_21 = FUNC_4(VAR_15->pMeterMeta);

  FUNC_11(&VAR_20, VAR_21, VAR_15->pMeterMeta->numOfColumns);

  while ((VAR_6 = FUNC_1(&VAR_7, &VAR_8, VAR_5)) != -1) {

    if (('\r' == VAR_7[VAR_6 - 1]) || ('\n' == VAR_7[VAR_6 - 1])) VAR_7[--VAR_6] = 0;
    if (VAR_6 <= 0) continue;

    char *VAR_22 = VAR_7;
    FUNC_2(VAR_7, VAR_7);

    if (VAR_12 >= VAR_10 || VAR_18->size + VAR_16->rowSize >= VAR_18->nAllocSize) {
      uint32_t VAR_23 = FUNC_6(VAR_18, VAR_16->rowSize);
      if (0 == VAR_23) return (-VAR_0);
      VAR_10 += VAR_23;
    }

    VAR_9 = FUNC_5(&VAR_22, VAR_18, VAR_21, &VAR_20, VAR_11->payload, VAR_16->precision);
    if (VAR_9 <= 0 || VAR_18->numOfParams > 0) {
      VAR_4->res.code = VAR_1;
      return -1;
    }
    VAR_18->size += VAR_9;

    VAR_19++;
    VAR_14++;
    if (VAR_19 >= VAR_10) {
      if ((VAR_13 = FUNC_0(VAR_4, VAR_19, VAR_18)) != VAR_2) {
        return -VAR_13;
      }

      VAR_18 = VAR_11->pDataBlocks->pData[0];
      VAR_18->size = sizeof(SShellSubmitBlock);
      VAR_18->rowSize = VAR_16->rowSize;

      VAR_12 += VAR_4->res.numOfRows;
      VAR_4->res.numOfRows = 0;
      VAR_19 = 0;
    }
  }

  if (VAR_19 > 0) {
    if ((VAR_13 = FUNC_0(VAR_4, VAR_19, VAR_18)) != VAR_2) {
      return -VAR_13;
    }

    VAR_12 += VAR_4->res.numOfRows;
    VAR_4->res.numOfRows = 0;
  }

  if (VAR_7) FUNC_3(VAR_7);

  return VAR_12;
}
