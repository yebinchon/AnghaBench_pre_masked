
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int doneJobID; unsigned int nextJobID; unsigned int jobIDMask; TYPE_2__* jobs; } ;
typedef TYPE_3__ ZSTDMT_CCtx ;
struct TYPE_5__ {scalar_t__ size; } ;
struct TYPE_6__ {scalar_t__ consumed; int job_mutex; int job_cond; TYPE_1__ src; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(ZSTDMT_CCtx* VAR_0)
{
    FUNC_0(4, "ZSTDMT_waitForAllJobsCompleted");
    while (VAR_0->doneJobID < VAR_0->nextJobID) {
        unsigned const VAR_1 = VAR_0->doneJobID & VAR_0->jobIDMask;
        FUNC_1(&VAR_0->jobs[VAR_1].job_mutex);
        while (VAR_0->jobs[VAR_1].consumed < VAR_0->jobs[VAR_1].src.size) {
            FUNC_0(4, "waiting for jobCompleted signal from job %u", VAR_0->doneJobID);
            FUNC_2(&VAR_0->jobs[VAR_1].job_cond, &VAR_0->jobs[VAR_1].job_mutex);
        }
        FUNC_3(&VAR_0->jobs[VAR_1].job_mutex);
        VAR_0->doneJobID++;
    }
}
