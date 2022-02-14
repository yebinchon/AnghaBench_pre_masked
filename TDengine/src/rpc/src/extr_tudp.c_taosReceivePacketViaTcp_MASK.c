
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int pthread_t ;
typedef int pthread_attr_t ;
struct TYPE_14__ {int dataLen; TYPE_1__* pSet; int pTimer; TYPE_2__* pConn; int port; int ip; int data; } ;
struct TYPE_13__ {int port; int handle; } ;
struct TYPE_12__ {int tranId; int destId; int sourceId; scalar_t__ content; } ;
struct TYPE_11__ {TYPE_1__* pSet; } ;
struct TYPE_10__ {int label; int tmrCtrl; } ;
typedef TYPE_1__ SUdpConnSet ;
typedef TYPE_2__ SUdpConn ;
typedef TYPE_3__ STaosHeader ;
typedef TYPE_4__ SPacketInfo ;
typedef TYPE_5__ SMonitor ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_3__*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int ,void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int ,int ,TYPE_5__*,int ,int *) ;

int FUNC_9(uint32_t VAR_4, STaosHeader *VAR_5, SUdpConn *VAR_6) {
  SUdpConnSet * VAR_7 = VAR_6->pSet;
  SPacketInfo * VAR_8 = (SPacketInfo *)VAR_5->content;
  int VAR_9 = 0;
  pthread_attr_t VAR_10;
  pthread_t VAR_11;

  FUNC_7("%s receive packet via TCP, handle:0x%x, source:0x%08x dest:0x%08x tranId:%d", VAR_7->label, VAR_8->handle,
         VAR_5->sourceId, VAR_5->destId, VAR_5->tranId);

  SMonitor *VAR_12 = (SMonitor *)FUNC_0(1, sizeof(SMonitor));
  VAR_12->dataLen = sizeof(STaosHeader) + sizeof(SPacketInfo);
  FUNC_1(VAR_12->data, VAR_5, (size_t)VAR_12->dataLen);
  VAR_12->pSet = VAR_7;
  VAR_12->ip = VAR_4;
  VAR_12->port = VAR_8->port;
  VAR_12->pConn = VAR_6;
  FUNC_8(VAR_2, 0, VAR_12, VAR_7->tmrCtrl, &VAR_12->pTimer);

  FUNC_3(&VAR_10);
  FUNC_4(&VAR_10, VAR_0);
  VAR_9 = FUNC_5(&(VAR_11), &VAR_10, VAR_3, (void *)VAR_12);
  if (VAR_9 < 0) {
    FUNC_7("%s failed to create thread to read tcp data, reason:%s", VAR_7->label, FUNC_6(VAR_1));
    VAR_12->pSet = ((void*)0);
  }

  FUNC_2(&VAR_10);
  return VAR_9;
}
