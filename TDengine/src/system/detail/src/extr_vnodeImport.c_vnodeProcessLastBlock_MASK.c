
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_19__ {scalar_t__ sversion; int numOfPoints; scalar_t__ last; int len; scalar_t__ offset; } ;
struct TYPE_14__ {scalar_t__ last; int numOfBlocks; } ;
struct TYPE_18__ {TYPE_1__ compInfo; scalar_t__ compInfoOffset; } ;
struct TYPE_17__ {TYPE_3__* pObj; } ;
struct TYPE_16__ {size_t vnode; scalar_t__ sversion; } ;
struct TYPE_15__ {int hfd; int lfd; int dfd; } ;
typedef TYPE_2__ SVnodeObj ;
typedef TYPE_3__ SMeterObj ;
typedef TYPE_4__ SImportInfo ;
typedef TYPE_5__ SHeadInfo ;
typedef int SData ;
typedef int SCompInfo ;
typedef TYPE_6__ SCompBlock ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ,TYPE_6__*,int) ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 (int ,TYPE_6__*,int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_5 (TYPE_3__*,TYPE_6__*,int **) ;

int FUNC_6(SImportInfo *VAR_3, SHeadInfo *VAR_4, SData *VAR_5[]) {
  SMeterObj *VAR_6 = VAR_3->pObj;
  SVnodeObj *VAR_7 = &VAR_2[VAR_6->vnode];
  SCompBlock VAR_8;
  int VAR_9 = 0;

  if (VAR_4->compInfo.last == 0) return 0;


  uint64_t VAR_10 =
      VAR_4->compInfoOffset + (VAR_4->compInfo.numOfBlocks - 1) * sizeof(SCompBlock) + sizeof(SCompInfo);
  FUNC_1(VAR_7->hfd, VAR_10, VAR_1);
  FUNC_2(VAR_7->hfd, &VAR_8, sizeof(SCompBlock));
  FUNC_0(VAR_8.last);

  if (VAR_8.sversion != VAR_6->sversion) {
    FUNC_1(VAR_7->lfd, VAR_8.offset, VAR_1);
    VAR_8.offset = FUNC_1(VAR_7->dfd, 0, VAR_0);
    FUNC_3(VAR_7->dfd, VAR_7->lfd, ((void*)0), VAR_8.len);

    VAR_8.last = 0;
    FUNC_1(VAR_7->hfd, VAR_10, VAR_1);
    FUNC_4(VAR_7->hfd, &VAR_8, sizeof(SCompBlock));
  } else {
    FUNC_5(VAR_6, &VAR_8, VAR_5);
    VAR_4->compInfo.numOfBlocks--;
    VAR_9 = VAR_8.numOfPoints;
  }

  return VAR_9;
}
