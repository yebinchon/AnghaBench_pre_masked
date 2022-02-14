
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_14__ {int name; } ;
struct TYPE_13__ {scalar_t__ payloadLen; scalar_t__ allocSize; int payload; int count; } ;
struct TYPE_12__ {TYPE_3__ cmd; } ;
struct TYPE_11__ {scalar_t__ nAllocSize; int pData; int meterId; int numOfMeters; } ;
typedef int STaosDigest ;
typedef TYPE_1__ STableDataBlocks ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SMeterMetaInfo ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 TYPE_4__* FUNC_5 (TYPE_3__*,int ) ;

int32_t FUNC_6(SSqlObj* VAR_2, STableDataBlocks* VAR_3) {
  SSqlCmd* VAR_4 = &VAR_2->cmd;

  VAR_4->count = VAR_3->numOfMeters;
  SMeterMetaInfo* VAR_5 = FUNC_5(VAR_4, 0);
  FUNC_2(VAR_5->name, VAR_3->meterId);






  int VAR_6 = FUNC_3(VAR_4, VAR_3->nAllocSize + sizeof(STaosDigest));
  if (VAR_0 != VAR_6) return VAR_6;
  FUNC_1(VAR_4->payload, VAR_3->pData, VAR_3->nAllocSize);





  VAR_4->payloadLen = VAR_3->nAllocSize - VAR_1;

  FUNC_0(VAR_4->allocSize >= VAR_4->payloadLen + VAR_1 + sizeof(STaosDigest));
  return FUNC_4(VAR_2, VAR_5->name, 0);
}
