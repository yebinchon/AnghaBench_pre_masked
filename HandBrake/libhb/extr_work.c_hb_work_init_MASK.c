
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int volatile* die; int * error; int ** current_job; int * jobs; } ;
typedef TYPE_1__ hb_work_t ;
typedef int hb_thread_t ;
typedef int hb_list_t ;
typedef int hb_job_t ;
typedef int hb_error_code ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int * FUNC_1 (char*,int ,TYPE_1__*,int ) ;
 int VAR_1 ;

hb_thread_t * FUNC_2( hb_list_t * VAR_2, volatile int * VAR_3, hb_error_code * VAR_4, hb_job_t ** VAR_5 )
{
    hb_work_t * VAR_6 = FUNC_0( sizeof( hb_work_t ), 1 );

    VAR_6->jobs = VAR_2;
    VAR_6->current_job = VAR_5;
    VAR_6->die = VAR_3;
    VAR_6->error = VAR_4;

    return FUNC_1( "work", VAR_1, VAR_6, VAR_0 );
}
