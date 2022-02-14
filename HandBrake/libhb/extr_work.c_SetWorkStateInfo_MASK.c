
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int error; } ;
struct TYPE_9__ {TYPE_1__ working; } ;
struct TYPE_10__ {TYPE_2__ param; } ;
typedef TYPE_3__ hb_state_t ;
struct TYPE_11__ {int h; int * done_error; } ;
typedef TYPE_4__ hb_job_t ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(hb_job_t *VAR_0)
{
    hb_state_t VAR_1;

    if (VAR_0 == ((void*)0))
    {
        return;
    }
    FUNC_0(VAR_0->h, &VAR_1);
    VAR_1.param.working.error = *VAR_0->done_error;
    FUNC_1( VAR_0->h, &VAR_1 );
}
