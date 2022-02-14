
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int destAdd ;
struct TYPE_10__ {int totalLen; int msgHdr; int timer; } ;
struct TYPE_9__ {int mutex; int fd; int tmrCtrl; int * hash; int localPort; int label; struct TYPE_9__* signature; } ;
typedef TYPE_2__ SUdpConn ;
typedef TYPE_3__ SUdpBuf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sockaddr_in*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,char*,size_t,int ,struct sockaddr*,int) ;
 int FUNC_5 (char*,int ,int ,short,int,int,int ,void*) ;
 int FUNC_6 (int *,TYPE_3__*,int ,short) ;
 TYPE_3__* FUNC_7 (TYPE_2__*,int ,short) ;
 scalar_t__ FUNC_8 (int *,int ,short) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_4 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,short,char*,int,void*) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (int ,int ,TYPE_3__*,int ,int *) ;

int FUNC_14(uint32_t VAR_5, short VAR_6, char *VAR_7, int VAR_8, void *VAR_9) {
  SUdpConn *VAR_10 = (SUdpConn *)VAR_9;
  SUdpBuf * VAR_11;

  if (VAR_10 == ((void*)0) || VAR_10->signature != VAR_10) return -1;

  if (VAR_8 >= VAR_2) return FUNC_11(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

  if (VAR_10->hash == ((void*)0)) {
    struct sockaddr_in VAR_12;
    FUNC_1(&VAR_12, 0, sizeof(VAR_12));
    VAR_12.sin_family = VAR_0;
    VAR_12.sin_addr.s_addr = VAR_5;
    VAR_12.sin_port = FUNC_0((uint16_t)VAR_6);

    int VAR_13 = (int)FUNC_4(VAR_10->fd, VAR_7, (size_t)VAR_8, 0, (struct sockaddr *)&VAR_12, sizeof(VAR_12));
    FUNC_5("%s msg is sent to 0x%x:%hu len:%d ret:%d localPort:%hu chandle:0x%x", VAR_10->label, VAR_12.sin_addr.s_addr,
           VAR_6, VAR_8, VAR_13, VAR_10->localPort, VAR_9);

    return VAR_13;
  }

  FUNC_2(&VAR_10->mutex);

  VAR_11 = (SUdpBuf *)FUNC_8(VAR_10->hash, VAR_5, VAR_6);
  if (VAR_11 == ((void*)0)) {
    VAR_11 = FUNC_7(VAR_10, VAR_5, VAR_6);
    FUNC_6(VAR_10->hash, VAR_11, VAR_5, VAR_6);
  }

  if ((VAR_11->totalLen + VAR_8 > VAR_2) || (FUNC_9(VAR_11->msgHdr) >= VAR_1)) {
    FUNC_13(VAR_4, VAR_3, VAR_11, VAR_10->tmrCtrl, &VAR_11->timer);

    FUNC_10(VAR_11->msgHdr, VAR_10->fd);
    VAR_11->totalLen = 0;
  }

  FUNC_12(VAR_11->msgHdr, VAR_7, VAR_8);

  VAR_11->totalLen += VAR_8;

  FUNC_3(&VAR_10->mutex);

  return VAR_8;
}
