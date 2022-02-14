
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int robj ;
struct TYPE_6__ {int * name; scalar_t__ jobs_out; scalar_t__ jobs_in; scalar_t__ prev_import_jobs_count; int prev_import_jobs_time; scalar_t__ current_import_jobs_count; int current_import_jobs_time; int * clients; int * needjobs_responders; scalar_t__ needjobs_adhoc_attempt; scalar_t__ needjobs_adhoc_time; scalar_t__ needjobs_bcast_attempt; scalar_t__ needjobs_bcast_time; int atime; int ctime; int sl; scalar_t__ flags; } ;
typedef TYPE_1__ queue ;
struct TYPE_7__ {int queues; int mstime; int unixtime; } ;


 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int) ;

queue *FUNC_5(robj *VAR_2) {
    if (FUNC_1(VAR_0.queues,VAR_2) != ((void*)0)) return ((void*)0);

    queue *VAR_3 = FUNC_4(sizeof(queue));
    VAR_3->name = VAR_2;
    VAR_3->flags = 0;
    FUNC_2(VAR_2);
    VAR_3->sl = FUNC_3(VAR_1);
    VAR_3->ctime = VAR_0.unixtime;
    VAR_3->atime = VAR_0.unixtime;
    VAR_3->needjobs_bcast_time = 0;
    VAR_3->needjobs_bcast_attempt = 0;
    VAR_3->needjobs_adhoc_time = 0;
    VAR_3->needjobs_adhoc_attempt = 0;
    VAR_3->needjobs_responders = ((void*)0);
    VAR_3->clients = ((void*)0);

    VAR_3->current_import_jobs_time = VAR_0.mstime;
    VAR_3->current_import_jobs_count = 0;
    VAR_3->prev_import_jobs_time = VAR_0.mstime;
    VAR_3->prev_import_jobs_count = 0;
    VAR_3->jobs_in = 0;
    VAR_3->jobs_out = 0;

    FUNC_2(VAR_2);
    FUNC_0(VAR_0.queues,VAR_3->name,VAR_3);
    return VAR_3;
}
