
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {int bytes; void* colId; int type; } ;
struct TYPE_17__ {char* secret; char* cipheringKey; int encrypt; int spi; } ;
struct TYPE_16__ {int vnode; scalar_t__ sid; char* meterId; int numOfColumns; int sqlLen; scalar_t__ sversion; char* secret; char* cipheringKey; int encrypt; int spi; TYPE_2__* schema; void* timeStamp; int uid; void* lastCreate; } ;
struct TYPE_15__ {int vnode; scalar_t__ sid; char* meterId; int numOfColumns; scalar_t__ maxBytes; int sqlLen; char* pSql; TYPE_7__* schema; int pointsPerFileBlock; int bytesPerPoint; void* sversion; void* timeStamp; int uid; } ;
struct TYPE_12__ {scalar_t__ maxSessions; int rowsInFileBlock; } ;
struct TYPE_14__ {TYPE_1__ cfg; int * pCachePool; } ;
struct TYPE_13__ {int bytes; int colId; int type; } ;
typedef int TSKEY ;
typedef TYPE_3__ SVnodeObj ;
typedef TYPE_4__ SMeterObj ;
typedef int SMColumn ;
typedef TYPE_5__ SCreateMsg ;
typedef TYPE_6__ SConnSec ;
typedef TYPE_7__ SColumn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*,int,scalar_t__,char*) ;
 void* FUNC_3 (void*) ;
 void* FUNC_4 (scalar_t__) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_6__*) ;
 TYPE_3__* VAR_8 ;
 int FUNC_9 (int) ;

int FUNC_10(char *VAR_9, int VAR_10) {
  int VAR_11;
  SMeterObj * VAR_12 = ((void*)0);
  SConnSec VAR_13;
  SCreateMsg *VAR_14 = (SCreateMsg *)VAR_9;

  VAR_14->vnode = FUNC_5(VAR_14->vnode);
  VAR_14->sid = FUNC_4(VAR_14->sid);
  VAR_14->lastCreate = FUNC_3(VAR_14->lastCreate);
  VAR_14->timeStamp = FUNC_3(VAR_14->timeStamp);

  if (VAR_14->vnode >= VAR_6 || VAR_14->vnode < 0) {
    FUNC_1("vid:%d is out of range", VAR_14->vnode);
    VAR_11 = VAR_0;
    goto _create_over;
  }

  SVnodeObj *VAR_15 = VAR_8 + VAR_14->vnode;
  if (VAR_15->pCachePool == ((void*)0)) {
    FUNC_1("vid:%d is not activated yet", VAR_14->vnode);
    FUNC_9(VAR_14->vnode);
    VAR_11 = VAR_1;
    goto _create_over;
  }

  if (VAR_14->sid >= VAR_15->cfg.maxSessions || VAR_14->sid < 0) {
    FUNC_1("vid:%d sid:%d id:%s, sid is out of range", VAR_14->vnode, VAR_14->sid, VAR_14->meterId);
    VAR_11 = VAR_0;
    goto _create_over;
  }

  VAR_14->numOfColumns = FUNC_5(VAR_14->numOfColumns);
  if (VAR_14->numOfColumns <= 0) {
    FUNC_2("vid:%d sid:%d id:%s, numOfColumns is out of range", VAR_14->vnode, VAR_14->sid, VAR_14->meterId);
    VAR_11 = VAR_3;
    goto _create_over;
  }

  VAR_14->sqlLen = FUNC_5(VAR_14->sqlLen);
  VAR_12 = (SMeterObj *)FUNC_0(1, sizeof(SMeterObj) + VAR_14->sqlLen + 1);
  if (VAR_12 == ((void*)0)) {
    FUNC_1("vid:%d sid:%d id:%s, no memory to allocate meterObj", VAR_14->vnode, VAR_14->sid, VAR_14->meterId);
    VAR_11 = VAR_2;
    goto _create_over;
  }






  VAR_12->schema = (SColumn *)FUNC_0(1, VAR_14->numOfColumns * sizeof(SColumn));

  VAR_12->vnode = VAR_14->vnode;
  VAR_12->sid = VAR_14->sid;
  VAR_12->uid = VAR_14->uid;
  FUNC_6(VAR_12->meterId, VAR_14->meterId, VAR_7);
  VAR_12->numOfColumns = VAR_14->numOfColumns;
  VAR_12->timeStamp = VAR_14->timeStamp;
  VAR_12->sversion = FUNC_4(VAR_14->sversion);
  VAR_12->maxBytes = 0;

  for (int VAR_16 = 0; VAR_16 < VAR_12->numOfColumns; ++VAR_16) {
    VAR_12->schema[VAR_16].type = VAR_14->schema[VAR_16].type;
    VAR_12->schema[VAR_16].bytes = FUNC_5(VAR_14->schema[VAR_16].bytes);
    VAR_12->schema[VAR_16].colId = FUNC_5(VAR_14->schema[VAR_16].colId);
    VAR_12->bytesPerPoint += VAR_12->schema[VAR_16].bytes;
    if (VAR_12->maxBytes < VAR_12->schema[VAR_16].bytes) VAR_12->maxBytes = VAR_12->schema[VAR_16].bytes;
  }

  if (VAR_14->sqlLen > 0) {
    VAR_12->sqlLen = VAR_14->sqlLen;
    VAR_12->pSql = ((char *)VAR_12) + sizeof(SMeterObj);
    FUNC_6(VAR_12->pSql, (char *)VAR_14->schema + VAR_14->numOfColumns * sizeof(SMColumn), VAR_14->sqlLen);
    VAR_12->pSql[VAR_14->sqlLen] = 0;
  }

  VAR_12->pointsPerFileBlock = VAR_15->cfg.rowsInFileBlock;

  if (sizeof(TSKEY) != VAR_12->schema[0].bytes) {
    FUNC_1("key length is not matched, required key length:%d", sizeof(TSKEY));
    VAR_11 = VAR_3;
    goto _create_over;
  }


  VAR_13.spi = VAR_14->spi;
  VAR_13.encrypt = VAR_14->encrypt;
  FUNC_6(VAR_13.secret, VAR_14->secret, VAR_5);
  FUNC_6(VAR_13.cipheringKey, VAR_14->cipheringKey, VAR_5);

  VAR_11 = FUNC_8(VAR_12, &VAR_13);

_create_over:
  if (VAR_11 != VAR_4) {
    FUNC_2("vid:%d sid:%d id:%s, failed to create meterObj", VAR_14->vnode, VAR_14->sid, VAR_14->meterId);
    FUNC_7(VAR_12);
  }

  return VAR_11;
}
