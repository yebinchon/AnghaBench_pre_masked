
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* signature; void* timer; int emptyNum; scalar_t__ totalLen; int msgHdr; TYPE_1__* pConn; } ;
struct TYPE_5__ {int tmrCtrl; int mutex; int fd; } ;
typedef TYPE_1__ SUdpConn ;
typedef TYPE_2__ SUdpBuf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (void (*) (void*,void*),int ,TYPE_2__*,int ,void**) ;

void FUNC_6(void *VAR_1, void *VAR_2) {
  SUdpBuf *VAR_3 = (SUdpBuf *)VAR_1;
  if (VAR_3->signature != VAR_1) return;
  if (VAR_3->timer != VAR_2) return;

  SUdpConn *VAR_4 = VAR_3->pConn;

  FUNC_0(&VAR_4->mutex);

  if (FUNC_2(VAR_3->msgHdr) > 0) {
    FUNC_4(VAR_3->msgHdr, VAR_4->fd);
    VAR_3->totalLen = 0;
    VAR_3->emptyNum = 0;
  } else {
    VAR_3->emptyNum++;
    if (VAR_3->emptyNum > 200) {
      FUNC_3(VAR_3);
      VAR_3 = ((void*)0);
    }
  }

  FUNC_1(&VAR_4->mutex);

  if (VAR_3) FUNC_5(FUNC_6, VAR_0, VAR_3, VAR_4->tmrCtrl, &VAR_3->timer);
}
