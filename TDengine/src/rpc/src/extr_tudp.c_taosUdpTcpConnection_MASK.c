
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int pthread_t ;
typedef int pthread_attr_t ;
typedef int clientAddr ;
struct TYPE_8__ {int fd; TYPE_2__* pSet; int port; int ip; } ;
struct TYPE_7__ {scalar_t__ tcpFd; int label; int port; int ip; } ;
typedef TYPE_2__ SUdpConnSet ;
typedef TYPE_3__ STransfer ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct sockaddr*,int*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int *,int ,void*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (char*,int ,int ,int ,int ) ;
 int FUNC_11 (char*,int ,char*,...) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int VAR_2 ;
 int FUNC_15 (char*,int ) ;

void *FUNC_16(void *VAR_3) {
  int VAR_4 = -1;
  struct sockaddr_in VAR_5;
  pthread_attr_t VAR_6;
  pthread_t VAR_7;
  uint32_t VAR_8;
  char VAR_9[20];

  SUdpConnSet *VAR_10 = (SUdpConnSet *)VAR_3;

  VAR_10->tcpFd = FUNC_14(VAR_10->ip, VAR_10->port);
  if (VAR_10->tcpFd < 0) {
    FUNC_10("%s failed to create TCP socket %s:%d for UDP server, reason:%s", VAR_10->label, VAR_10->ip, VAR_10->port,
           FUNC_8(VAR_1));
    FUNC_13();
    return ((void*)0);
  }

  FUNC_11("%s UDP server is created, ip:%s:%d", VAR_10->label, VAR_10->ip, VAR_10->port);

  FUNC_5(&VAR_6);
  FUNC_6(&VAR_6, VAR_0);

  while (1) {
    if (VAR_10->tcpFd < 0) break;
    socklen_t VAR_11 = sizeof(VAR_5);
    VAR_4 = FUNC_0(VAR_10->tcpFd, (struct sockaddr *)&VAR_5, &VAR_11);

    if (VAR_4 < 0) {
      FUNC_9("%s UDP server TCP accept failure, reason:%s", VAR_10->label, FUNC_8(VAR_1));
      continue;
    }

    VAR_8 = VAR_5.sin_addr.s_addr;
    FUNC_15(VAR_9, VAR_8);
    FUNC_11("%s UDP server TCP connection from ip:%s:%u", VAR_10->label, VAR_9, FUNC_2(VAR_5.sin_port));

    STransfer *VAR_12 = FUNC_3(sizeof(STransfer));
    VAR_12->fd = VAR_4;
    VAR_12->ip = VAR_8;
    VAR_12->port = VAR_5.sin_port;
    VAR_12->pSet = VAR_10;

    if (FUNC_7(&(VAR_7), &VAR_6, VAR_2, (void *)VAR_12) < 0) {
      FUNC_11("%s failed to create thread for UDP server, reason:%s", VAR_10->label, FUNC_8(VAR_1));
      FUNC_1(VAR_12);
      FUNC_12(VAR_4);
    }
  }

  FUNC_4(&VAR_6);
  return ((void*)0);
}
