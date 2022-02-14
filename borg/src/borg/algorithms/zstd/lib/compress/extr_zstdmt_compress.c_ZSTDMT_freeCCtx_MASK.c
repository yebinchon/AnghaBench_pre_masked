
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* buffer; } ;
struct TYPE_7__ {int cMem; TYPE_1__ roundBuff; int cdictLocal; int serial; int seqPool; int cctxPool; int bufPool; scalar_t__ jobIDMask; int jobs; int factory; } ;
typedef TYPE_2__ ZSTDMT_CCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int ) ;

size_t FUNC_9(ZSTDMT_CCtx* VAR_0)
{
    if (VAR_0==((void*)0)) return 0;
    FUNC_0(VAR_0->factory);
    FUNC_5(VAR_0);
    FUNC_3(VAR_0->jobs, VAR_0->jobIDMask+1, VAR_0->cMem);
    FUNC_1(VAR_0->bufPool);
    FUNC_2(VAR_0->cctxPool);
    FUNC_4(VAR_0->seqPool);
    FUNC_6(&VAR_0->serial);
    FUNC_8(VAR_0->cdictLocal);
    if (VAR_0->roundBuff.buffer)
        FUNC_7(VAR_0->roundBuff.buffer, VAR_0->cMem);
    FUNC_7(VAR_0, VAR_0->cMem);
    return 0;
}
