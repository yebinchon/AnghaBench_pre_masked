
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {double prev_import_jobs_time; double current_import_jobs_count; scalar_t__ current_import_jobs_time; scalar_t__ prev_import_jobs_count; } ;
typedef TYPE_1__ queue ;
struct TYPE_5__ {double mstime; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (double) ;
 TYPE_2__ VAR_1 ;

uint32_t FUNC_1(queue *VAR_2) {
    double VAR_3 = VAR_1.mstime - VAR_2->prev_import_jobs_time;
    double VAR_4 = (double)VAR_2->prev_import_jobs_count +
                              VAR_2->current_import_jobs_count;



    if ((VAR_1.mstime - VAR_2->current_import_jobs_time) > VAR_0)
        return 0;


    if (VAR_3 < 50) VAR_3 = 50;

    return FUNC_0((double)VAR_4*1000/VAR_3);
}
