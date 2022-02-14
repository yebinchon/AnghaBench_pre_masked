
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int params; int * seqPool; int * cctxPool; int * bufPool; int factory; } ;
typedef TYPE_1__ ZSTDMT_CCtx ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int *,unsigned int) ;
 int * FUNC_4 (int *,unsigned int) ;
 int * FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (TYPE_1__*,unsigned int) ;
 int * FUNC_7 (int *,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_8(ZSTDMT_CCtx* VAR_1, unsigned VAR_2)
{
    if (FUNC_2(VAR_1->factory, VAR_2)) return FUNC_1(VAR_0);
    FUNC_0( FUNC_6(VAR_1, VAR_2) );
    VAR_1->bufPool = FUNC_4(VAR_1->bufPool, VAR_2);
    if (VAR_1->bufPool == ((void*)0)) return FUNC_1(VAR_0);
    VAR_1->cctxPool = FUNC_5(VAR_1->cctxPool, VAR_2);
    if (VAR_1->cctxPool == ((void*)0)) return FUNC_1(VAR_0);
    VAR_1->seqPool = FUNC_7(VAR_1->seqPool, VAR_2);
    if (VAR_1->seqPool == ((void*)0)) return FUNC_1(VAR_0);
    FUNC_3(&VAR_1->params, VAR_2);
    return 0;
}
