
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int thread; int mutex; scalar_t__ hash; int fd; int * signature; } ;
struct TYPE_5__ {int server; int threads; int tcpFd; int tmrCtrl; TYPE_2__* udpConn; int tcpThread; } ;
typedef TYPE_1__ SUdpConnSet ;
typedef TYPE_2__ SUdpConn ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,TYPE_2__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(void *VAR_0) {
  SUdpConnSet *VAR_1 = (SUdpConnSet *)VAR_0;
  SUdpConn * VAR_2;

  if (VAR_1 == ((void*)0)) return;
  if (VAR_1->server == 1) {
    FUNC_0(VAR_1->tcpThread);
  }

  for (int VAR_3 = 0; VAR_3 < VAR_1->threads; ++VAR_3) {
    VAR_2 = VAR_1->udpConn + VAR_3;
    VAR_2->signature = ((void*)0);
    FUNC_0(VAR_2->thread);
    FUNC_5(VAR_2->fd);
    if (VAR_2->hash) {
      FUNC_4(VAR_2->hash);
      FUNC_2(&VAR_2->mutex);
    }
  }

  for (int VAR_4 = 0; VAR_4 < VAR_1->threads; ++VAR_4) {
    VAR_2 = VAR_1->udpConn + VAR_4;
    FUNC_1(VAR_2->thread, ((void*)0));
    FUNC_3("chandle:%p is closed", VAR_2);
  }

  if (VAR_1->tcpFd >= 0) FUNC_6(VAR_1->tcpFd);
  VAR_1->tcpFd = -1;
  FUNC_7(VAR_1->tmrCtrl);
  FUNC_8(VAR_1);
}
