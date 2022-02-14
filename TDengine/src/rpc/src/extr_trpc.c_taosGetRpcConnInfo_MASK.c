
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {short peerPort; int chann; int sid; int peerIp; int peerId; } ;
typedef TYPE_1__ SRpcConn ;



void FUNC_0(void *VAR_0, uint32_t *VAR_1, uint32_t *VAR_2, short *VAR_3, int *VAR_4, int *VAR_5) {
  SRpcConn *VAR_6 = (SRpcConn *)VAR_0;

  *VAR_1 = VAR_6->peerId;
  *VAR_2 = VAR_6->peerIp;
  *VAR_3 = VAR_6->peerPort;

  *VAR_4 = VAR_6->chann;
  *VAR_5 = VAR_6->sid;
}
