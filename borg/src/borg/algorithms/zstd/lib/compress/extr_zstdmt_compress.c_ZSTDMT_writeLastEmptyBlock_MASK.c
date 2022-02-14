
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ capacity; int * start; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {int lastJob; scalar_t__ firstJob; scalar_t__ consumed; int cSize; TYPE_4__ dstBuff; TYPE_2__ src; int bufPool; } ;
typedef TYPE_1__ ZSTDMT_jobDescription ;


 int FUNC_0 (int ) ;
 TYPE_4__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(ZSTDMT_jobDescription* VAR_3)
{
    FUNC_4(VAR_3->lastJob == 1);
    FUNC_4(VAR_3->src.size == 0);
    FUNC_4(VAR_3->firstJob == 0);
    FUNC_4(VAR_3->dstBuff.start == ((void*)0));
    VAR_3->dstBuff = FUNC_1(VAR_3->bufPool);
    if (VAR_3->dstBuff.start == ((void*)0)) {
      VAR_3->cSize = FUNC_0(VAR_2);
      return;
    }
    FUNC_4(VAR_3->dstBuff.capacity >= VAR_0);
    VAR_3->src = VAR_1;
    VAR_3->cSize = FUNC_3(VAR_3->dstBuff.start, VAR_3->dstBuff.capacity);
    FUNC_4(!FUNC_2(VAR_3->cSize));
    FUNC_4(VAR_3->consumed == 0);
}
