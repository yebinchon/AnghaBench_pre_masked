
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_15__ {int numOfVnodes; int privateIp; TYPE_4__* vload; int diskAvailable; int status; int openVnodes; } ;
struct TYPE_14__ {int dbName; } ;
struct TYPE_13__ {scalar_t__ dropStatus; int vnode; scalar_t__ vgId; int pointsWritten; int compStorage; int totalStorage; void* status; } ;
struct TYPE_11__ {scalar_t__ maxSessions; int vgId; } ;
struct TYPE_10__ {int pointsWritten; int compStorage; int totalStorage; } ;
struct TYPE_12__ {TYPE_2__ cfg; TYPE_1__ vnodeStatistic; } ;
typedef TYPE_3__ SVnodeObj ;
typedef TYPE_4__ SVnodeLoad ;
typedef TYPE_5__ SVgObj ;
typedef TYPE_6__ SDnodeObj ;
typedef int SDbObj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 TYPE_6__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int) ;
 int * FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (float*) ;
 int FUNC_5 (void (*) (void*,void*),int,int *,int ,int **) ;
 int FUNC_6 (int ,int,int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* VAR_10 ;

void FUNC_7(void *VAR_11, void *VAR_12) {
  SDnodeObj *VAR_13 = &VAR_3;
  VAR_13->openVnodes = VAR_8;
  VAR_13->status = VAR_0;

  float VAR_14 = 0;
  FUNC_4(&VAR_14);
  VAR_13->diskAvailable = VAR_7;

  for (int VAR_15 = 0; VAR_15 < VAR_13->numOfVnodes; ++VAR_15) {
    SVnodeLoad *VAR_16 = &(VAR_13->vload[VAR_15]);
    SVnodeObj * VAR_17 = VAR_10 + VAR_15;


    if (VAR_16->dropStatus == VAR_1) {
      if (VAR_10[VAR_15].cfg.maxSessions <= 0) {
        VAR_16->dropStatus = VAR_2;
        VAR_16->status = VAR_2;
        FUNC_1("vid:%d, drop finished", VAR_13->privateIp, VAR_15);
        FUNC_6(VAR_4, 10000, ((void*)0), VAR_6);
      }
    }

    if (VAR_10[VAR_15].cfg.maxSessions <= 0) {
      continue;
    }

    VAR_16->vnode = VAR_15;
    VAR_16->status = VAR_2;
    VAR_16->totalStorage = VAR_17->vnodeStatistic.totalStorage;
    VAR_16->compStorage = VAR_17->vnodeStatistic.compStorage;
    VAR_16->pointsWritten = VAR_17->vnodeStatistic.pointsWritten;
    uint32_t VAR_18 = VAR_17->cfg.vgId;

    SVgObj *VAR_19 = FUNC_3(VAR_18);
    if (VAR_19 == ((void*)0)) {
      FUNC_0("vgroup:%d is not there, but associated with vnode %d", VAR_18, VAR_15);
      VAR_16->dropStatus = VAR_1;
      continue;
    }

    SDbObj *VAR_20 = FUNC_2(VAR_19->dbName);
    if (VAR_20 == ((void*)0)) {
      FUNC_0("vgroup:%d not belongs to any database, vnode:%d", VAR_18, VAR_15);
      continue;
    }

    if (VAR_16->vgId == 0 || VAR_16->dropStatus == VAR_1) {
      FUNC_0("vid:%d, mgmt not exist, drop it", VAR_15);
      VAR_16->dropStatus = VAR_1;
    }
  }

  FUNC_5(FUNC_7, VAR_9 * 1000, ((void*)0), VAR_6, &VAR_5);
  if (VAR_5 == ((void*)0)) {
    FUNC_0("Failed to start status timer");
  }
}
