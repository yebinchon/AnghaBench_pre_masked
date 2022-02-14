
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pChann ;
struct TYPE_5__ {int sessions; void* qhandle; int mutex; int * hash; int * tmrCtrl; int * idPool; int * connList; } ;
struct TYPE_4__ {int numOfChanns; scalar_t__ idMgmt; void* qhandle; int label; TYPE_2__* channList; } ;
typedef TYPE_1__ STaosRpc ;
typedef int SRpcConn ;
typedef TYPE_2__ SRpcChann ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,size_t) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int ,int,...) ;
 int VAR_2 ;
 int * FUNC_4 (int) ;
 int * FUNC_5 (int,int,int ) ;
 int * FUNC_6 (int,int,int,int ) ;

int FUNC_7(void *VAR_3, int VAR_4, int VAR_5, void *VAR_6) {
  STaosRpc * VAR_7 = (STaosRpc *)VAR_3;
  SRpcChann *VAR_8;

  if (VAR_7 == ((void*)0)) return -1;
  if (VAR_4 >= VAR_7->numOfChanns || VAR_4 < 0) {
    FUNC_3("%s: cid:%d, chann is out of range, max:%d", VAR_7->label, VAR_4, VAR_7->numOfChanns);
    return -1;
  }

  VAR_8 = VAR_7->channList + VAR_4;
  FUNC_1(VAR_8, 0, sizeof(SRpcChann));

  size_t VAR_9 = sizeof(SRpcConn) * VAR_5;
  VAR_8->connList = (SRpcConn *)FUNC_0(1, VAR_9);
  if (VAR_8->connList == ((void*)0)) {
    FUNC_3("%s cid:%d, failed to allocate memory for taos connections, size:%d", VAR_7->label, VAR_4, VAR_9);
    return -1;
  }

  if (VAR_7->idMgmt == VAR_0) {
    VAR_8->idPool = FUNC_4(VAR_5);
    if (VAR_8->idPool == ((void*)0)) {
      FUNC_3("%s cid:%d, failed to init ID pool", VAR_7->label, VAR_4);
      return -1;
    }
  }

  VAR_8->tmrCtrl = FUNC_6(VAR_5 * 2 + 1, 50, 10000, VAR_7->label);
  if (VAR_8->tmrCtrl == ((void*)0)) {
    FUNC_3("%s cid:%d, failed to init timers", VAR_7->label, VAR_4);
    return -1;
  }

  VAR_8->hash = FUNC_5(VAR_5, sizeof(VAR_8), VAR_2);
  if (VAR_8->hash == ((void*)0)) {
    FUNC_3("%s cid:%d, failed to init string hash", VAR_7->label, VAR_4);
    return -1;
  }

  FUNC_2(&VAR_8->mutex, ((void*)0));
  VAR_8->sessions = VAR_5;

  VAR_8->qhandle = VAR_6 ? VAR_6 : VAR_7->qhandle;

  return VAR_1;
}
