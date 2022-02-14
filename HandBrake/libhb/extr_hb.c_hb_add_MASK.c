
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sequence_id; TYPE_2__* h; } ;
typedef TYPE_1__ hb_job_t ;
struct TYPE_9__ {int sequence_id; int jobs; } ;
typedef TYPE_2__ hb_handle_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;

int FUNC_2( hb_handle_t * VAR_0, hb_job_t * VAR_1 )
{
    hb_job_t *VAR_2 = FUNC_0(VAR_1);
    VAR_2->h = VAR_0;
    VAR_2->sequence_id = ++VAR_0->sequence_id;
    FUNC_1(VAR_0->jobs, VAR_2);

    return VAR_2->sequence_id;
}
