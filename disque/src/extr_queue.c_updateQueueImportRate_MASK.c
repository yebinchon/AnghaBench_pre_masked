
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int current_import_jobs_time; int prev_import_jobs_time; scalar_t__ current_import_jobs_count; scalar_t__ prev_import_jobs_count; } ;
typedef TYPE_1__ queue ;
struct TYPE_5__ {int mstime; } ;


 TYPE_3__ VAR_0 ;

void FUNC_0(queue *VAR_1) {



    if (VAR_0.mstime - VAR_1->current_import_jobs_time > 1000) {
        VAR_1->prev_import_jobs_time = VAR_1->current_import_jobs_time;
        VAR_1->prev_import_jobs_count = VAR_1->current_import_jobs_count;
        VAR_1->current_import_jobs_time = VAR_0.mstime;
        VAR_1->current_import_jobs_count = 0;
    }

    VAR_1->current_import_jobs_count++;
}
