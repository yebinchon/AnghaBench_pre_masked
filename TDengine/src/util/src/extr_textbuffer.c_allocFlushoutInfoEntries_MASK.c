
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tFlushoutInfo ;
struct TYPE_4__ {int nAllocSize; int * pFlushoutInfo; } ;
struct TYPE_5__ {TYPE_1__ flushoutData; } ;
typedef TYPE_2__ tFileMeta ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static bool FUNC_2(tFileMeta *VAR_0) {
  VAR_0->flushoutData.nAllocSize = VAR_0->flushoutData.nAllocSize << 1;

  tFlushoutInfo *VAR_1 = (tFlushoutInfo *)FUNC_1(VAR_0->flushoutData.pFlushoutInfo,
                                                sizeof(tFlushoutInfo) * VAR_0->flushoutData.nAllocSize);
  if (VAR_1 == ((void*)0)) {
    FUNC_0("out of memory!\n");
    return 0;
  }

  VAR_0->flushoutData.pFlushoutInfo = VAR_1;
  return 1;
}
