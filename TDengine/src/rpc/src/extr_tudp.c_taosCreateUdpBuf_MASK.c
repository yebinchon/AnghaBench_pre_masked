
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_9__ {void* s_addr; } ;
struct TYPE_12__ {scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct TYPE_11__ {short port; int timer; struct TYPE_11__* signature; TYPE_5__ destAdd; int msgHdr; TYPE_2__* pConn; void* ip; } ;
struct TYPE_10__ {int tmrCtrl; } ;
typedef TYPE_2__ SUdpConn ;
typedef TYPE_3__ SUdpBuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int *,TYPE_5__*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,TYPE_3__*,int ,int *) ;

SUdpBuf *FUNC_5(SUdpConn *VAR_4, uint32_t VAR_5, short VAR_6) {
  SUdpBuf *VAR_7 = (SUdpBuf *)FUNC_1(sizeof(SUdpBuf));
  FUNC_2(VAR_7, 0, sizeof(SUdpBuf));

  VAR_7->ip = VAR_5;
  VAR_7->port = VAR_6;
  VAR_7->pConn = VAR_4;

  VAR_7->destAdd.sin_family = VAR_0;
  VAR_7->destAdd.sin_addr.s_addr = VAR_5;
  VAR_7->destAdd.sin_port = (uint16_t)FUNC_0((uint16_t)VAR_6);
  FUNC_3(&(VAR_7->msgHdr), &(VAR_7->destAdd), VAR_1);
  VAR_7->signature = VAR_7;
  FUNC_4(VAR_3, VAR_2, VAR_7, VAR_4->tmrCtrl, &VAR_7->timer);




  return VAR_7;
}
