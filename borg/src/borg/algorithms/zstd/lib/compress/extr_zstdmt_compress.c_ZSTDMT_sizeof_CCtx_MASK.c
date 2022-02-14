
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTDMT_jobDescription ;
struct TYPE_4__ {size_t capacity; } ;
struct TYPE_5__ {int jobIDMask; TYPE_1__ roundBuff; int cdictLocal; int seqPool; int cctxPool; int bufPool; int factory; } ;
typedef TYPE_2__ ZSTDMT_CCtx ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;

size_t FUNC_5(ZSTDMT_CCtx* VAR_0)
{
    if (VAR_0 == ((void*)0)) return 0;
    return sizeof(*VAR_0)
            + FUNC_0(VAR_0->factory)
            + FUNC_2(VAR_0->bufPool)
            + (VAR_0->jobIDMask+1) * sizeof(ZSTDMT_jobDescription)
            + FUNC_1(VAR_0->cctxPool)
            + FUNC_3(VAR_0->seqPool)
            + FUNC_4(VAR_0->cdictLocal)
            + VAR_0->roundBuff.capacity;
}
