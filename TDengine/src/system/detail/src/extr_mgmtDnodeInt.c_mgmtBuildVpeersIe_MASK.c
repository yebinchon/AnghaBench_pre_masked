
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int totalBlocks; } ;
struct TYPE_12__ {int maxSessions; int cacheBlockSize; int daysPerFile; int daysToKeep1; int daysToKeep2; int daysToKeep; int commitTime; char replications; int rowsInFileBlock; int blocksPerMeter; TYPE_1__ cacheNumOfBlocks; void* vgId; } ;
struct TYPE_16__ {TYPE_3__ cfg; } ;
struct TYPE_15__ {void* vnode; void* ip; } ;
struct TYPE_14__ {TYPE_6__* vpeerDesc; TYPE_3__ cfg; void* vnode; } ;
struct TYPE_13__ {int vgId; int numOfVnodes; TYPE_2__* vnodeGid; int dbName; } ;
struct TYPE_11__ {int ip; int vnode; } ;
typedef TYPE_3__ SVnodeCfg ;
typedef TYPE_4__ SVgObj ;
typedef TYPE_5__ SVPeersMsg ;
typedef TYPE_6__ SVPeerDesc ;
typedef TYPE_7__ SDbObj ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_7__* FUNC_2 (int ) ;

char *FUNC_3(char *VAR_0, SVgObj *VAR_1, int VAR_2) {
  SVPeersMsg *VAR_3 = (SVPeersMsg *)VAR_0;
  SDbObj * VAR_4;

  VAR_4 = FUNC_2(VAR_1->dbName);
  VAR_3->vnode = FUNC_0(VAR_2);

  VAR_3->cfg = VAR_4->cfg;
  SVnodeCfg *VAR_5 = &VAR_3->cfg;
  VAR_5->vgId = FUNC_0(VAR_1->vgId);
  VAR_5->maxSessions = FUNC_0(VAR_5->maxSessions);
  VAR_5->cacheBlockSize = FUNC_0(VAR_5->cacheBlockSize);
  VAR_5->cacheNumOfBlocks.totalBlocks = FUNC_0(VAR_5->cacheNumOfBlocks.totalBlocks);
  VAR_5->daysPerFile = FUNC_0(VAR_5->daysPerFile);
  VAR_5->daysToKeep1 = FUNC_0(VAR_5->daysToKeep1);
  VAR_5->daysToKeep2 = FUNC_0(VAR_5->daysToKeep2);
  VAR_5->daysToKeep = FUNC_0(VAR_5->daysToKeep);
  VAR_5->commitTime = FUNC_0(VAR_5->commitTime);
  VAR_5->blocksPerMeter = FUNC_1(VAR_5->blocksPerMeter);
  VAR_5->replications = (char)VAR_1->numOfVnodes;
  VAR_5->rowsInFileBlock = FUNC_0(VAR_5->rowsInFileBlock);
  return VAR_0;
}
