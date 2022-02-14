
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_17__ {int * pMeterMeta; } ;
struct TYPE_16__ {TYPE_1__** pData; } ;
struct TYPE_15__ {TYPE_6__* pDataBlocks; } ;
struct TYPE_14__ {TYPE_3__ cmd; } ;
struct TYPE_13__ {scalar_t__ pData; } ;
typedef TYPE_1__ STableDataBlocks ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;
typedef int SShellSubmitBlock ;
typedef int SMeterMeta ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 TYPE_7__* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(SSqlObj *VAR_1, int32_t VAR_2, STableDataBlocks *VAR_3) {
  int32_t VAR_4 = VAR_0;
  SSqlCmd *VAR_5 = &VAR_1->cmd;

  SMeterMeta *VAR_6 = FUNC_2(VAR_5, 0)->pMeterMeta;

  SShellSubmitBlock *VAR_7 = (SShellSubmitBlock *)(VAR_3->pData);
  FUNC_0(VAR_7, VAR_6, VAR_2);

  if ((VAR_4 = FUNC_3(VAR_1, VAR_5->pDataBlocks)) != VAR_0) {
    return VAR_4;
  }


  STableDataBlocks *VAR_8 = VAR_5->pDataBlocks->pData[0];
  if ((VAR_4 = FUNC_1(VAR_1, VAR_8)) != VAR_0) {
    return VAR_4;
  }

  if ((VAR_4 = FUNC_4(VAR_1)) != VAR_0) {
    return VAR_4;
  }

  return VAR_0;
}
