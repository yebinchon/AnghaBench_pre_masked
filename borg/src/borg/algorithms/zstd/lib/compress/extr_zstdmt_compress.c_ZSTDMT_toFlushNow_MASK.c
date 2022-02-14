
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; } ;
struct TYPE_6__ {size_t cSize; size_t dstFlushed; scalar_t__ consumed; int job_mutex; TYPE_1__ src; } ;
typedef TYPE_2__ ZSTDMT_jobDescription ;
struct TYPE_7__ {unsigned int doneJobID; unsigned int const nextJobID; unsigned int const jobIDMask; TYPE_2__* jobs; } ;
typedef TYPE_3__ ZSTDMT_CCtx ;


 scalar_t__ FUNC_0 (size_t const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

size_t FUNC_4(ZSTDMT_CCtx* VAR_0)
{
    size_t VAR_1;
    unsigned const VAR_2 = VAR_0->doneJobID;
    FUNC_3(VAR_2 <= VAR_0->nextJobID);
    if (VAR_2 == VAR_0->nextJobID) return 0;


    { unsigned const VAR_3 = VAR_2 & VAR_0->jobIDMask;
        ZSTDMT_jobDescription* const VAR_4 = &VAR_0->jobs[VAR_3];
        FUNC_1(&VAR_4->job_mutex);
        { size_t const VAR_5 = VAR_4->cSize;
            size_t const VAR_6 = FUNC_0(VAR_5) ? 0 : VAR_5;
            size_t const VAR_7 = FUNC_0(VAR_5) ? 0 : VAR_4->dstFlushed;
            FUNC_3(VAR_7 <= VAR_6);
            VAR_1 = VAR_6 - VAR_7;
            if (VAR_1==0 && (VAR_4->consumed >= VAR_4->src.size)) {

                FUNC_3(VAR_4->consumed < VAR_4->src.size);
            }
        }
        FUNC_2(&VAR_0->jobs[VAR_3].job_mutex);
    }

    return VAR_1;
}
