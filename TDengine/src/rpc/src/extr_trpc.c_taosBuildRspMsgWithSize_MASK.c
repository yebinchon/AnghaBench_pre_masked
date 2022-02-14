
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int meterId; int peerId; int ownId; int inTranId; struct TYPE_5__* signature; } ;
struct TYPE_4__ {int version; char msgType; scalar_t__ content; int meterId; scalar_t__ uid; int destId; int sourceId; int tranId; scalar_t__ encrypt; scalar_t__ tcp; scalar_t__ spi; } ;
typedef TYPE_1__ STaosHeader ;
typedef int STaosDigest ;
typedef TYPE_2__ SRpcConn ;
typedef int SMsgNode ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int ,size_t) ;
 int FUNC_3 (char*,TYPE_2__*,...) ;
 int FUNC_4 (int ) ;

char *FUNC_5(void *VAR_0, char VAR_1, int VAR_2) {
  STaosHeader *VAR_3;
  char * VAR_4;
  SRpcConn * VAR_5 = (SRpcConn *)VAR_0;

  if (VAR_5 == ((void*)0) || VAR_5->signature != VAR_5) {
    FUNC_3("pConn:%p, connection has to be opened first before building a message", VAR_5);
    return ((void*)0);
  }

  VAR_2 += sizeof(SMsgNode) + sizeof(STaosHeader) + sizeof(STaosDigest);
  VAR_4 = (char *)FUNC_0((size_t)VAR_2);
  if (VAR_4 == ((void*)0)) {
    FUNC_3("pConn:%p, malloc(%d) failed when building a type:%d message", VAR_5, VAR_2, VAR_1);
    return ((void*)0);
  }

  FUNC_2(VAR_4, 0, (size_t)VAR_2);
  VAR_3 = (STaosHeader *)VAR_4;
  VAR_3->version = 1;
  VAR_3->msgType = VAR_1;
  VAR_3->spi = 0;
  VAR_3->tcp = 0;
  VAR_3->encrypt = 0;
  VAR_3->tranId = VAR_5->inTranId;
  VAR_3->sourceId = VAR_5->ownId;
  VAR_3->destId = VAR_5->peerId;
  VAR_3->uid = 0;
  FUNC_1(VAR_3->meterId, VAR_5->meterId, FUNC_4(VAR_3->meterId));

  return (char *)VAR_3->content;
}
