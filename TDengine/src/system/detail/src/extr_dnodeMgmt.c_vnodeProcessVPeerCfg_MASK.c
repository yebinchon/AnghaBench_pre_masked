
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {void* maxSessions; int replications; } ;
struct TYPE_16__ {scalar_t__ status; TYPE_2__ cfg; } ;
struct TYPE_15__ {void* vnode; void* ip; } ;
struct TYPE_11__ {void* totalBlocks; } ;
struct TYPE_13__ {int replications; void* maxSessions; void* rowsInFileBlock; int blocksPerMeter; void* commitTime; void* daysToKeep; void* daysToKeep2; void* daysToKeep1; void* daysPerFile; TYPE_1__ cacheNumOfBlocks; void* cacheBlockSize; void* vgId; } ;
struct TYPE_14__ {TYPE_6__* vpeerDesc; TYPE_3__ cfg; void* vnode; } ;
typedef TYPE_3__ SVnodeCfg ;
typedef TYPE_4__ SVPeersMsg ;
typedef int SMgmtObj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,...) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,TYPE_6__*) ;
 int FUNC_6 (int,TYPE_3__*,TYPE_6__*) ;
 TYPE_7__* VAR_2 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,TYPE_3__*,TYPE_6__*) ;
 int FUNC_10 (int,void*,void*) ;

int FUNC_11(char *VAR_3, int VAR_4, SMgmtObj *VAR_5) {
  SVPeersMsg *VAR_6 = (SVPeersMsg *)VAR_3;
  int VAR_7, VAR_8;

  VAR_8 = FUNC_2(VAR_6->vnode);
  if (VAR_8 >= VAR_0) {
    FUNC_0("vid:%d, vnode is out of range", VAR_8);
    return -1;
  }

  if (VAR_2[VAR_8].status == VAR_1) {
    FUNC_1("vid:%d, vnode is still under creating", VAR_8);
    return 0;
  }

  SVnodeCfg *VAR_9 = &VAR_6->cfg;
  VAR_9->vgId = FUNC_2(VAR_9->vgId);
  VAR_9->maxSessions = FUNC_2(VAR_9->maxSessions);
  VAR_9->cacheBlockSize = FUNC_2(VAR_9->cacheBlockSize);
  VAR_9->cacheNumOfBlocks.totalBlocks = FUNC_2(VAR_9->cacheNumOfBlocks.totalBlocks);
  VAR_9->daysPerFile = FUNC_2(VAR_9->daysPerFile);
  VAR_9->daysToKeep1 = FUNC_2(VAR_9->daysToKeep1);
  VAR_9->daysToKeep2 = FUNC_2(VAR_9->daysToKeep2);
  VAR_9->daysToKeep = FUNC_2(VAR_9->daysToKeep);
  VAR_9->commitTime = FUNC_2(VAR_9->commitTime);
  VAR_9->blocksPerMeter = FUNC_3(VAR_9->blocksPerMeter);
  VAR_9->rowsInFileBlock = FUNC_2(VAR_9->rowsInFileBlock);

  if (VAR_9->replications > 0) {
    FUNC_1("vid:%d, vpeer cfg received, replica:%d session:%d, vnodeList replica:%d session:%d",
        VAR_8, VAR_9->replications, VAR_9->maxSessions, VAR_2[VAR_8].cfg.replications, VAR_2[VAR_8].cfg.maxSessions);
    for (VAR_7 = 0; VAR_7 < VAR_9->replications; ++VAR_7) {
      VAR_6->vpeerDesc[VAR_7].vnode = FUNC_2(VAR_6->vpeerDesc[VAR_7].vnode);
      VAR_6->vpeerDesc[VAR_7].ip = FUNC_2(VAR_6->vpeerDesc[VAR_7].ip);
      FUNC_1("vid:%d, vpeer:%d ip:0x%x vid:%d ", VAR_8, VAR_7, VAR_6->vpeerDesc[VAR_7].ip, VAR_6->vpeerDesc[VAR_7].vnode);
    }
  }

  if (VAR_2[VAR_8].cfg.maxSessions == 0) {
    if (VAR_9->maxSessions > 0) {
      return FUNC_6(VAR_8, VAR_9, VAR_6->vpeerDesc);
    }
  } else {
    if (VAR_9->maxSessions > 0) {
      if (VAR_9->maxSessions != VAR_2[VAR_8].cfg.maxSessions) {
          FUNC_4(VAR_8);
      }

      FUNC_5(VAR_8, VAR_9->replications, VAR_6->vpeerDesc);
      FUNC_9(VAR_8, VAR_9, VAR_6->vpeerDesc);

      if (VAR_9->maxSessions != VAR_2[VAR_8].cfg.maxSessions) {
        FUNC_10(VAR_8, VAR_2[VAR_8].cfg.maxSessions, VAR_9->maxSessions);
        VAR_2[VAR_8].cfg.maxSessions = VAR_9->maxSessions;
        FUNC_7(VAR_8);
      }
    } else {
      FUNC_8(VAR_8);
    }
  }

  return 0;
}
