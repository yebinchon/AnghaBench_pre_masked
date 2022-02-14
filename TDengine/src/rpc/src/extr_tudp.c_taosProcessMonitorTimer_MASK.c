
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* pTimer; int ip; scalar_t__ dataLen; int data; TYPE_1__* pSet; } ;
struct TYPE_5__ {int tmrCtrl; int shandle; int (* fp ) (char*,scalar_t__,int ,int ,int ,int *,int *) ;int label; } ;
typedef TYPE_1__ SUdpConnSet ;
typedef TYPE_2__ SMonitor ;


 int FUNC_0 (TYPE_2__*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,int ,size_t) ;
 int FUNC_3 (char*,scalar_t__,int ,int ,int ,int *,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (void (*) (void*,void*),int,TYPE_2__*,int ,void**) ;
 int FUNC_6 (void**) ;

void FUNC_7(void *VAR_0, void *VAR_1) {
  SMonitor *VAR_2 = (SMonitor *)VAR_0;
  if (VAR_2->pTimer != VAR_1) return;

  SUdpConnSet *VAR_3 = VAR_2->pSet;
  VAR_2->pTimer = ((void*)0);

  if (VAR_3) {
    char *VAR_4 = FUNC_1((size_t)VAR_2->dataLen);
    FUNC_2(VAR_4, VAR_2->data, (size_t)VAR_2->dataLen);

    FUNC_4("%s monitor timer is expired, update the link status", VAR_3->label);
    (*VAR_3->fp)(VAR_4, VAR_2->dataLen, VAR_2->ip, 0, VAR_3->shandle, ((void*)0), ((void*)0));
    FUNC_5(FUNC_7, 200, VAR_2, VAR_3->tmrCtrl, &VAR_2->pTimer);
  } else {
    FUNC_6(&VAR_2->pTimer);
    FUNC_0(VAR_2);
  }
}
