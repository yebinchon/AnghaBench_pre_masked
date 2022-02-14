
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pExprs; } ;
struct TYPE_5__ {int * tsBuf; TYPE_3__ colList; TYPE_3__ exprsInfo; int fieldsInfo; int tagCond; int pDataBlocks; } ;
typedef TYPE_1__ SSqlCmd ;


 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(SSqlCmd* VAR_0) {
  VAR_0->pDataBlocks = FUNC_5(VAR_0->pDataBlocks);

  FUNC_6(&VAR_0->tagCond);
  FUNC_3(&VAR_0->fieldsInfo);

  FUNC_1(VAR_0->exprsInfo.pExprs);
  FUNC_0(&VAR_0->exprsInfo, 0, sizeof(VAR_0->exprsInfo));

  FUNC_4(&VAR_0->colList);
  FUNC_0(&VAR_0->colList, 0, sizeof(VAR_0->colList));

  if (VAR_0->tsBuf != ((void*)0)) {
    FUNC_2(VAR_0->tsBuf);
    VAR_0->tsBuf = ((void*)0);
  }
}
