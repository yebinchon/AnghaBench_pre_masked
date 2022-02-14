
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int meterId; int peerId; int ownId; int tranId; struct TYPE_5__* signature; } ;
struct TYPE_4__ {int version; char msgType; scalar_t__ tranId; scalar_t__ content; int meterId; scalar_t__ uid; scalar_t__ port; int destId; int sourceId; scalar_t__ encrypt; scalar_t__ tcp; scalar_t__ spi; } ;
typedef TYPE_1__ STaosHeader ;
typedef TYPE_2__ SRpcConn ;
typedef int SMsgNode ;


 void* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,TYPE_2__*) ;
 int FUNC_4 (int ) ;

char *FUNC_5(void *VAR_0, char VAR_1, char *VAR_2) {
  STaosHeader *VAR_3;
  SRpcConn * VAR_4 = (SRpcConn *)VAR_0;

  if (VAR_4 == ((void*)0) || VAR_4->signature != VAR_4) {
    FUNC_3("pConn:%p, connection has to be openned first before building a message", VAR_4);
    return ((void*)0);
  }

  VAR_3 = (STaosHeader *)(VAR_2 + sizeof(SMsgNode));
  VAR_3->version = 1;
  VAR_3->msgType = VAR_1;
  VAR_3->spi = 0;
  VAR_3->tcp = 0;
  VAR_3->encrypt = 0;
  VAR_3->tranId = FUNC_0(&VAR_4->tranId, 1);
  if (VAR_3->tranId == 0) VAR_3->tranId = FUNC_0(&VAR_4->tranId, 1);

  VAR_3->sourceId = VAR_4->ownId;
  VAR_3->destId = VAR_4->peerId;
  VAR_3->port = 0;
  VAR_3->uid = (uint32_t)VAR_4 + (uint32_t)FUNC_1();

  FUNC_2(VAR_3->meterId, VAR_4->meterId, FUNC_4(VAR_3->meterId));

  return (char *)VAR_3->content;
}
