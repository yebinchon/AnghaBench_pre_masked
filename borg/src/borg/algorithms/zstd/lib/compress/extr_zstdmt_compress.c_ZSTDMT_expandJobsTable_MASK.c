
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int jobIDMask; int * jobs; int cMem; } ;
typedef TYPE_1__ ZSTDMT_CCtx ;
typedef int U32 ;


 size_t FUNC_0 (int ) ;
 int * FUNC_1 (int*,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_4 (ZSTDMT_CCtx* VAR_1, U32 VAR_2) {
    U32 VAR_3 = VAR_2 + 2;
    if (VAR_3 > VAR_1->jobIDMask+1) {
        FUNC_2(VAR_1->jobs, VAR_1->jobIDMask+1, VAR_1->cMem);
        VAR_1->jobIDMask = 0;
        VAR_1->jobs = FUNC_1(&VAR_3, VAR_1->cMem);
        if (VAR_1->jobs==((void*)0)) return FUNC_0(VAR_0);
        FUNC_3((VAR_3 != 0) && ((VAR_3 & (VAR_3 - 1)) == 0));
        VAR_1->jobIDMask = VAR_3 - 1;
    }
    return 0;
}
