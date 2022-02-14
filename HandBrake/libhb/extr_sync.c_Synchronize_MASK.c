
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * fifo_out; TYPE_3__* common; } ;
typedef TYPE_2__ sync_stream_t ;
struct TYPE_10__ {int mutex; int found_first_pts; TYPE_1__* job; scalar_t__ start_found; } ;
typedef TYPE_3__ sync_common_t ;
struct TYPE_8__ {int * die; int done; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6( sync_stream_t * VAR_0 )
{
    sync_common_t * VAR_1 = VAR_0->common;





    if (VAR_0->fifo_out != ((void*)0) && VAR_1->start_found)
    {
        while (!VAR_1->job->done && !*VAR_1->job->die)
        {
            if (FUNC_3(VAR_0->fifo_out))
            {
                break;
            }
        }
    }

    FUNC_4(VAR_1->mutex);

    if (!FUNC_2(VAR_1))
    {
        FUNC_5(VAR_1->mutex);
        return;
    }
    if (!VAR_1->found_first_pts)
    {
        FUNC_1(VAR_1);
    }
    FUNC_0(VAR_1);

    FUNC_5(VAR_1->mutex);
}
