
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int connInit ;
struct TYPE_25__ {TYPE_2__* vpeerDesc; } ;
struct TYPE_24__ {TYPE_8__* pMeterMeta; int pMetricMeta; } ;
struct TYPE_23__ {int cid; char* peerIp; void* peerPort; TYPE_4__* ahandle; void* shandle; void* peerId; int meterId; scalar_t__ encrypt; scalar_t__ spi; scalar_t__ sid; } ;
struct TYPE_22__ {int vnodeIdx; } ;
struct TYPE_21__ {scalar_t__ retry; scalar_t__ maxRetry; size_t index; scalar_t__ ip; int vnode; int * thandle; TYPE_3__* pTscObj; TYPE_5__ cmd; } ;
struct TYPE_20__ {int user; } ;
struct TYPE_19__ {scalar_t__ ip; int vnode; } ;
struct TYPE_18__ {TYPE_2__* vpeerDesc; } ;
typedef TYPE_1__ SVnodeSidList ;
typedef TYPE_2__ SVPeerDesc ;
typedef TYPE_3__ STscObj ;
typedef TYPE_4__ SSqlObj ;
typedef TYPE_5__ SSqlCmd ;
typedef TYPE_6__ SRpcConnInit ;
typedef TYPE_7__ SMeterMetaInfo ;
typedef TYPE_8__ SMeterMeta ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;
 void* VAR_2 ;
 void* FUNC_3 (int ,scalar_t__,int,int ) ;
 void* FUNC_4 (TYPE_6__*,scalar_t__*) ;
 int FUNC_5 (char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char*,TYPE_4__*) ;
 TYPE_7__* FUNC_7 (TYPE_5__*,int ) ;
 TYPE_1__* FUNC_8 (int ,int ) ;
 int VAR_7 ;
 int FUNC_9 (char*,TYPE_4__*,int,scalar_t__,size_t,int *) ;

void FUNC_10(SSqlObj *VAR_8, uint8_t *VAR_9) {
  char VAR_10[40] = {0};
  SVPeerDesc *VAR_11 = ((void*)0);
  static int VAR_12 = 0;
  STscObj * VAR_13 = VAR_8->pTscObj;

  VAR_8->thandle = ((void*)0);

  SSqlCmd * VAR_14 = &VAR_8->cmd;
  SMeterMetaInfo *VAR_15 = FUNC_7(VAR_14, 0);

  if (FUNC_0(VAR_15)) {
    SVnodeSidList *VAR_16 = FUNC_8(VAR_15->pMetricMeta, VAR_14->vnodeIdx);
    if (VAR_16 != ((void*)0)) {
      VAR_11 = VAR_16->vpeerDesc;
    }
  } else {
    SMeterMeta *VAR_17 = VAR_15->pMeterMeta;
    if (VAR_17 == ((void*)0)) {
      FUNC_6("%p pMeterMeta is NULL", VAR_8);
      VAR_8->retry = VAR_8->maxRetry;
      return;
    }
    VAR_11 = VAR_17->vpeerDesc;
  }

  if (VAR_11 == ((void*)0)) {
    VAR_8->retry = VAR_8->maxRetry;
    FUNC_6("%p pVPeerDesc is NULL", VAR_8);
  }

  while (VAR_8->retry < VAR_8->maxRetry) {
    (VAR_8->retry)++;
    *VAR_9 = 0;
    void *VAR_18 = FUNC_3(VAR_6, VAR_3, VAR_11[0].vnode, VAR_13->user);

    if (VAR_18 == ((void*)0)) {
      SRpcConnInit VAR_19;
      FUNC_2(&VAR_19, 0, sizeof(VAR_19));
      VAR_19.cid = VAR_12;
      VAR_19.sid = 0;
      VAR_19.spi = 0;
      VAR_19.encrypt = 0;
      VAR_19.meterId = VAR_8->pTscObj->user;
      VAR_19.peerId = FUNC_1((VAR_11[0].vnode << VAR_0));
      VAR_19.shandle = VAR_2;
      VAR_19.ahandle = VAR_8;
      VAR_19.peerIp = VAR_4;
      VAR_19.peerPort = VAR_5;
      VAR_18 = FUNC_4(&VAR_19, VAR_9);
      VAR_12 = (VAR_12 + 1) % VAR_7;
    }

    VAR_8->thandle = VAR_18;
    VAR_8->ip = VAR_3;
    VAR_8->vnode = VAR_11[0].vnode;


    break;
  }
}
