
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int meterId; int peerId; int ownId; int tranId; struct TYPE_5__* signature; } ;
struct TYPE_4__ {int version; char msgType; scalar_t__ tranId; scalar_t__ content; int meterId; scalar_t__ uid; int destId; int sourceId; scalar_t__ encrypt; scalar_t__ tcp; scalar_t__ spi; } ;
typedef TYPE_1__ STaosHeader ;
typedef int STaosDigest ;
typedef TYPE_2__ SRpcConn ;
typedef int SMsgNode ;


 void* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,int ,size_t) ;
 int FUNC_5 (char*,TYPE_2__*) ;
 int FUNC_6 (int ) ;

char *FUNC_7(void *VAR_0, char VAR_1, int VAR_2) {
  STaosHeader *VAR_3;
  char * VAR_4;
  SRpcConn * VAR_5 = (SRpcConn *)VAR_0;

  if (VAR_5 == ((void*)0) || VAR_5->signature != VAR_5) {
    FUNC_5("pConn:%p, connection has to be openned first before building a message", VAR_5);
    return ((void*)0);
  }

  VAR_2 += sizeof(SMsgNode) + sizeof(STaosHeader) + sizeof(STaosDigest);
  VAR_4 = (char *)FUNC_2((size_t)VAR_2);
  FUNC_4(VAR_4, 0, (size_t)VAR_2);
  VAR_3 = (STaosHeader *)(VAR_4 + sizeof(SMsgNode));
  VAR_3->version = 1;
  VAR_3->msgType = VAR_1;
  VAR_3->spi = 0;
  VAR_3->tcp = 0;
  VAR_3->encrypt = 0;
  VAR_3->tranId = FUNC_0(&VAR_5->tranId, 1);
  if (VAR_3->tranId == 0) VAR_3->tranId = FUNC_0(&VAR_5->tranId, 1);

  VAR_3->sourceId = VAR_5->ownId;
  VAR_3->destId = VAR_5->peerId;
  VAR_3->uid = (uint32_t)VAR_5 + (uint32_t)FUNC_1();
  FUNC_3(VAR_3->meterId, VAR_5->meterId, FUNC_6(VAR_3->meterId));

  return (char *)VAR_3->content;
}
