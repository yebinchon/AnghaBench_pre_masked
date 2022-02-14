
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* int32_t ;
struct TYPE_7__ {char* pQuickRsp; int secret; scalar_t__ spi; } ;
struct TYPE_6__ {int auth; scalar_t__ timeStamp; } ;
struct TYPE_5__ {void* msgLen; scalar_t__ spi; } ;
typedef TYPE_1__ STaosHeader ;
typedef TYPE_2__ STaosDigest ;
typedef TYPE_3__ SRpcConn ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 char* FUNC_2 (void*,char,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,char*,int) ;
 int FUNC_5 (char*) ;

int FUNC_6(void *VAR_1, char VAR_2, char VAR_3) {
  char * VAR_4;
  int VAR_5;
  STaosHeader *VAR_6;
  char * VAR_7;
  int VAR_8;
  SRpcConn * VAR_9 = (SRpcConn *)VAR_1;

  VAR_4 = FUNC_2(VAR_1, VAR_2, 32);
  if (VAR_4 == ((void*)0)) return 0;

  *VAR_4 = VAR_3;
  VAR_5 = 1;

  VAR_6 = (STaosHeader *)(VAR_4 - sizeof(STaosHeader));
  VAR_7 = (char *)VAR_6;
  VAR_8 = VAR_5 + (int32_t)sizeof(STaosHeader);

  if (VAR_9->spi) {

    VAR_6->spi = VAR_9->spi;
    STaosDigest *VAR_10 = (STaosDigest *)(VAR_4 + VAR_5);
    VAR_10->timeStamp = FUNC_0(FUNC_3());
    VAR_8 += sizeof(STaosDigest);
    VAR_6->msgLen = (int32_t)FUNC_0((uint32_t)VAR_8);
    FUNC_1((uint8_t *)VAR_6, VAR_8 - VAR_0, VAR_10->auth, VAR_9->secret);
  } else {
    VAR_6->msgLen = (int32_t)FUNC_0((uint32_t)VAR_8);
  }

  FUNC_5(VAR_9->pQuickRsp);
  VAR_9->pQuickRsp = VAR_7;
  FUNC_4(VAR_9, (char *)VAR_6, VAR_8);

  return VAR_8;
}
