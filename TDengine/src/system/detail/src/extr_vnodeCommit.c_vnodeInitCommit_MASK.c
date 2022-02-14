
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef double int64_t ;
struct TYPE_6__ {double totalBlocks; } ;
struct TYPE_7__ {scalar_t__ commitLog; TYPE_1__ cacheNumOfBlocks; scalar_t__ cacheBlockSize; } ;
struct TYPE_8__ {double mappingSize; double mappingThreshold; scalar_t__ commitInProcess; size_t pWrite; int version; TYPE_2__ cfg; int logFn; int logOFn; int logMutex; } ;
typedef TYPE_3__ SVnodeObj ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*,int,int) ;
 char* VAR_0 ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_6 (int,int ) ;
 size_t FUNC_7 (int,int ,int *) ;

int FUNC_8(int VAR_2) {
  size_t VAR_3 = 0;
  uint64_t VAR_4 = 0;
  SVnodeObj *VAR_5 = VAR_1 + VAR_2;

  FUNC_2(&(VAR_5->logMutex), ((void*)0));

  FUNC_4(VAR_5->logFn, "%s/vnode%d/db/submit%d.log", VAR_0, VAR_2, VAR_2);
  FUNC_4(VAR_5->logOFn, "%s/vnode%d/db/submit%d.olog", VAR_0, VAR_2, VAR_2);
  VAR_5->mappingSize = ((int64_t)VAR_5->cfg.cacheBlockSize) * VAR_5->cfg.cacheNumOfBlocks.totalBlocks * 1.5;
  VAR_5->mappingThreshold = VAR_5->mappingSize * 0.7;


  VAR_3 = FUNC_7(VAR_2, VAR_5->logOFn, &VAR_4);
  if (VAR_3 < 0) return -1;
  if (VAR_3 > 0) {
    if (VAR_5->commitInProcess == 0) FUNC_5(VAR_5);
    FUNC_3(VAR_5->logOFn);
  }


  VAR_3 = FUNC_7(VAR_2, VAR_5->logFn, &VAR_4);
  if (VAR_3 < 0) return -1;

  if (VAR_5->cfg.commitLog == 0) return 0;

  if (VAR_3 == 0) VAR_4 = VAR_5->version;
  if (FUNC_6(VAR_2, VAR_4) < 0) {
    FUNC_0("vid:%d, commit log init failed", VAR_2);
    return -1;
  }

  VAR_5->pWrite += VAR_3;
  FUNC_1("vid:%d, commit log is initialized", VAR_2);

  return 0;
}
