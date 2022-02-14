
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sequence_id; } ;
typedef TYPE_1__ hb_job_t ;
typedef scalar_t__ gint ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;

void
FUNC_3(gint VAR_1)
{
    hb_job_t * VAR_2;
    gint VAR_3;




    VAR_3 = FUNC_0(VAR_0) - 1;
    while ((VAR_2 = FUNC_1(VAR_0, VAR_3--)) != ((void*)0))
    {
        if (VAR_2->sequence_id == VAR_1)
            FUNC_2(VAR_0, VAR_2);
    }
}
