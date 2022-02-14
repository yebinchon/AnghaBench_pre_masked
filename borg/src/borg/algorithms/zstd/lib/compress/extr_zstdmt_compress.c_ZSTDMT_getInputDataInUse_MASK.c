
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t size; scalar_t__ start; } ;
typedef TYPE_2__ range_t ;
struct TYPE_9__ {unsigned int doneJobID; unsigned int nextJobID; unsigned int jobIDMask; TYPE_1__* jobs; } ;
typedef TYPE_3__ ZSTDMT_CCtx ;
struct TYPE_7__ {size_t consumed; TYPE_2__ src; TYPE_2__ prefix; int job_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static range_t FUNC_3(ZSTDMT_CCtx* VAR_1)
{
    unsigned const VAR_2 = VAR_1->doneJobID;
    unsigned const VAR_3 = VAR_1->nextJobID;
    unsigned VAR_4;

    for (VAR_4 = VAR_2; VAR_4 < VAR_3; ++VAR_4) {
        unsigned const VAR_5 = VAR_4 & VAR_1->jobIDMask;
        size_t VAR_6;

        FUNC_0(&VAR_1->jobs[VAR_5].job_mutex);
        VAR_6 = VAR_1->jobs[VAR_5].consumed;
        FUNC_1(&VAR_1->jobs[VAR_5].job_mutex);

        if (VAR_6 < VAR_1->jobs[VAR_5].src.size) {
            range_t VAR_7 = VAR_1->jobs[VAR_5].prefix;
            if (VAR_7.size == 0) {

                VAR_7 = VAR_1->jobs[VAR_5].src;
            }

            FUNC_2(VAR_7.start <= VAR_1->jobs[VAR_5].src.start);
            return VAR_7;
        }
    }
    return VAR_0;
}
