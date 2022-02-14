
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_20__ {int vgid; int rowSize; int uid; } ;
struct TYPE_19__ {int name; TYPE_6__* pMeterMeta; } ;
struct TYPE_18__ {int idx; int offset; } ;
struct TYPE_17__ {int numOfParams; int payload; int pDataBlocks; } ;
struct TYPE_16__ {TYPE_3__ cmd; } ;
struct TYPE_15__ {scalar_t__ numOfParams; int numOfMeters; int vgid; scalar_t__ pData; TYPE_4__* params; } ;
typedef TYPE_1__ STableDataBlocks ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;
typedef int SShellSubmitBlock ;
typedef int SParsedDataColInfo ;
typedef TYPE_4__ SParamInfo ;
typedef TYPE_5__ SMeterMetaInfo ;
typedef TYPE_6__ SMeterMeta ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char**,TYPE_1__*,TYPE_6__*,scalar_t__,int *,int ) ;
 int FUNC_1 (int *,TYPE_6__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (void*,int ,int ,int ,int,int ,int ) ;
 TYPE_5__* FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static int32_t FUNC_5(SSqlObj *VAR_4, void *VAR_5, char **VAR_6, SParsedDataColInfo *VAR_7,
                                      int32_t *VAR_8) {
  SSqlCmd * VAR_9 = &VAR_4->cmd;
  SMeterMetaInfo *VAR_10 = FUNC_4(VAR_9, 0);
  SMeterMeta * VAR_11 = VAR_10->pMeterMeta;

  STableDataBlocks *VAR_12 =
      FUNC_3(VAR_5, VAR_9->pDataBlocks, VAR_11->uid, VAR_3,
                              sizeof(SShellSubmitBlock), VAR_11->rowSize, VAR_10->name);

  int32_t VAR_13 = FUNC_2(VAR_12, VAR_11->rowSize);
  if (0 == VAR_13) {
    return VAR_0;
  }

  int32_t VAR_14 = FUNC_0(VAR_6, VAR_12, VAR_11, VAR_13, VAR_7, VAR_9->payload);
  if (VAR_14 <= 0) {
    return VAR_1;
  }

  for (uint32_t VAR_15 = 0; VAR_15 < VAR_12->numOfParams; ++VAR_15) {
    SParamInfo* VAR_16 = VAR_12->params + VAR_15;
    if (VAR_16->idx == -1) {
      VAR_16->idx = VAR_9->numOfParams++;
      VAR_16->offset -= sizeof(SShellSubmitBlock);
    }
  }

  SShellSubmitBlock *VAR_17 = (SShellSubmitBlock *)(VAR_12->pData);
  FUNC_1(VAR_17, VAR_11, VAR_14);

  VAR_12->vgid = VAR_11->vgid;
  VAR_12->numOfMeters = 1;





  *VAR_8 += VAR_14;
  return VAR_2;
}
