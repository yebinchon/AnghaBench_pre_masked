
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


struct stat {int st_size; } ;
struct TYPE_17__ {scalar_t__ compInfoOffset; scalar_t__ uid; int numOfBlocks; scalar_t__ last; } ;
struct TYPE_22__ {int hfdSize; int last; int compInfoOffset; int leftOffset; int oldNumOfBlocks; TYPE_14__ compInfo; TYPE_14__* headList; scalar_t__ newBlocks; } ;
struct TYPE_21__ {scalar_t__ fileId; scalar_t__ pos; int slot; TYPE_3__* pObj; } ;
struct TYPE_20__ {size_t vnode; size_t sid; scalar_t__ uid; } ;
struct TYPE_19__ {int maxSessions; } ;
struct TYPE_18__ {scalar_t__ nfd; scalar_t__ commitLastKey; scalar_t__ hfd; scalar_t__ commitFileId; int cfn; scalar_t__ commitFirstKey; TYPE_2__ cfg; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SVnodeObj ;
typedef TYPE_2__ SVnodeCfg ;
typedef TYPE_3__ SMeterObj ;
typedef TYPE_4__ SImportInfo ;
typedef TYPE_5__ SHeadInfo ;
typedef int SData ;
typedef int SCompInfo ;
typedef int SCompHeader ;
typedef int SCompBlock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,size_t,size_t,int ) ;
 int FUNC_1 (scalar_t__,struct stat*) ;
 int FUNC_2 (scalar_t__,int,int ) ;
 int FUNC_3 (TYPE_14__*,int ,int) ;
 int FUNC_4 (scalar_t__,TYPE_14__*,int) ;
 int FUNC_5 (scalar_t__,scalar_t__,int *,int) ;
 int FUNC_6 (scalar_t__,TYPE_14__*,int) ;
 int FUNC_7 (TYPE_3__*,TYPE_5__*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_8 (TYPE_1__*,size_t) ;
 int FUNC_9 (TYPE_4__*,TYPE_5__*,int **) ;

int FUNC_10(SImportInfo *VAR_4, char *VAR_5, SHeadInfo *VAR_6, SData *VAR_7[]) {
  SMeterObj *VAR_8 = VAR_4->pObj;
  SVnodeObj *VAR_9 = &VAR_3[VAR_8->vnode];
  SVnodeCfg *VAR_10 = &VAR_9->cfg;
  TSKEY VAR_11 = *((TSKEY *)VAR_5);
  struct stat VAR_12;
  int VAR_13, VAR_14 = 0;

  if (VAR_9->nfd <= 0 || VAR_11 > VAR_9->commitLastKey) {
    if (VAR_9->nfd > 0) FUNC_7(VAR_8, VAR_6);

    VAR_9->commitFirstKey = VAR_11;
    if (FUNC_8(VAR_9, VAR_8->sid) < 0) return -1;

    FUNC_1(VAR_9->hfd, &VAR_12);
    VAR_6->hfdSize = VAR_12.st_size;
    VAR_6->newBlocks = 0;
    VAR_6->last = 1;

    FUNC_2(VAR_9->hfd, VAR_2, VAR_1);
    FUNC_4(VAR_9->hfd, VAR_6->headList, sizeof(SCompHeader) * VAR_10->maxSessions);

    if (VAR_6->headList[VAR_8->sid].compInfoOffset > 0) {
      FUNC_2(VAR_9->hfd, VAR_6->headList[VAR_8->sid].compInfoOffset, VAR_1);
      if (FUNC_4(VAR_9->hfd, &VAR_6->compInfo, sizeof(SCompInfo)) != sizeof(SCompInfo)) {
        FUNC_0("vid:%d sid:%d, failed to read compInfo from file:%s", VAR_8->vnode, VAR_8->sid, VAR_9->cfn);
        return -1;
      }

      if (VAR_6->compInfo.uid == VAR_8->uid) {
        VAR_6->compInfoOffset = VAR_6->headList[VAR_8->sid].compInfoOffset;
        VAR_6->leftOffset = VAR_6->headList[VAR_8->sid].compInfoOffset + sizeof(SCompInfo);
      } else {
        VAR_6->headList[VAR_8->sid].compInfoOffset = 0;
      }
    }

    if ( VAR_6->headList[VAR_8->sid].compInfoOffset == 0 ) {
      FUNC_3(&VAR_6->compInfo, 0, sizeof(SCompInfo));
      VAR_6->compInfo.uid = VAR_8->uid;

      for (VAR_13 = VAR_8->sid + 1; VAR_13 < VAR_10->maxSessions; ++VAR_13)
        if (VAR_6->headList[VAR_13].compInfoOffset > 0) break;

      VAR_6->compInfoOffset = (VAR_13 == VAR_10->maxSessions) ? VAR_6->hfdSize : VAR_6->headList[VAR_13].compInfoOffset;
      VAR_6->leftOffset = VAR_6->compInfoOffset;
    }

    VAR_6->oldNumOfBlocks = VAR_6->compInfo.numOfBlocks;
    FUNC_2(VAR_9->hfd, 0, VAR_1);
    FUNC_2(VAR_9->nfd, 0, VAR_1);
    FUNC_5(VAR_9->nfd, VAR_9->hfd, ((void*)0), VAR_6->compInfoOffset);
    FUNC_6(VAR_9->nfd, &VAR_6->compInfo, sizeof(SCompInfo));
    if (VAR_6->headList[VAR_8->sid].compInfoOffset > 0) FUNC_2(VAR_9->hfd, sizeof(SCompInfo), VAR_0);

    if (VAR_9->commitFileId < VAR_4->fileId) {
      if (VAR_6->compInfo.numOfBlocks > 0)
        VAR_6->leftOffset += VAR_6->compInfo.numOfBlocks * sizeof(SCompBlock);

      VAR_14 = FUNC_9(VAR_4, VAR_6, VAR_7);


      FUNC_2(VAR_9->hfd, VAR_6->compInfoOffset + sizeof(SCompInfo), VAR_1);
      if (VAR_6->compInfo.numOfBlocks > 0)
        FUNC_5(VAR_9->nfd, VAR_9->hfd, ((void*)0), VAR_6->compInfo.numOfBlocks * sizeof(SCompBlock));

    } else if (VAR_9->commitFileId == VAR_4->fileId) {
      int VAR_15 = VAR_4->pos ? VAR_4->slot + 1 : VAR_4->slot;
      VAR_6->leftOffset += VAR_15 * sizeof(SCompBlock);


      if (VAR_4->pos == 0 && VAR_6->compInfo.numOfBlocks > 0 && VAR_4->slot == VAR_6->compInfo.numOfBlocks &&
          VAR_6->compInfo.last) {
        VAR_14 = FUNC_9(VAR_4, VAR_6, VAR_7);
        if ( VAR_14 > 0 ) VAR_4->slot--;
      }


      if (VAR_4->pos > 0) VAR_6->compInfo.numOfBlocks--;

      if (VAR_4->slot > 0) {
        FUNC_2(VAR_9->hfd, VAR_6->compInfoOffset + sizeof(SCompInfo), VAR_1);
        FUNC_5(VAR_9->nfd, VAR_9->hfd, ((void*)0), VAR_4->slot * sizeof(SCompBlock));
      }

      if (VAR_4->slot < VAR_6->compInfo.numOfBlocks)
        VAR_6->last = 0;

    } else {


      VAR_6->last = 0;
    }
  }

  return VAR_14;
}
