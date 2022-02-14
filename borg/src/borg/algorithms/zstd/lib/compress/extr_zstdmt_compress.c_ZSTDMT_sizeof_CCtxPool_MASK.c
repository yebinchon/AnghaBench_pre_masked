
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_CCtx ;
struct TYPE_3__ {unsigned int totalCCtx; int poolMutex; int * cctx; } ;
typedef TYPE_1__ ZSTDMT_CCtxPool ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static size_t FUNC_4(ZSTDMT_CCtxPool* VAR_0)
{
    FUNC_0(&VAR_0->poolMutex);
    { unsigned const VAR_1 = VAR_0->totalCCtx;
        size_t const VAR_2 = sizeof(*VAR_0)
                                + (VAR_1-1) * sizeof(ZSTD_CCtx*);
        unsigned VAR_3;
        size_t VAR_4 = 0;
        for (VAR_3=0; VAR_3<VAR_1; VAR_3++) {
            VAR_4 += FUNC_2(VAR_0->cctx[VAR_3]);
        }
        FUNC_1(&VAR_0->poolMutex);
        FUNC_3(VAR_1 > 0);
        return VAR_2 + VAR_4;
    }
}
