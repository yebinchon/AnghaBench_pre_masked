
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int input_done; scalar_t__ first_pts; int list; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_17__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_work_object_t ;
struct TYPE_15__ {int flags; scalar_t__ start; } ;
struct TYPE_18__ {TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;
typedef int hb_buffer_list_t ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_4__*) ;

int FUNC_6(hb_work_object_t *VAR_4, hb_buffer_t **VAR_5,
                     hb_buffer_t **VAR_6)
{
    hb_work_private_t *VAR_7 = VAR_4->private_data;
    hb_buffer_t * VAR_8 = *VAR_5;
    hb_buffer_t * VAR_9;
    hb_buffer_list_t VAR_10;

    FUNC_4(&VAR_10);
    if (VAR_8->s.flags & VAR_1)
    {

        VAR_7->input_done = 1;
        FUNC_1(VAR_4, &VAR_10);
        FUNC_3(&VAR_10, FUNC_2());
        *VAR_6 = FUNC_4(&VAR_10);
        return VAR_2;
    }

    if (VAR_7->first_pts == VAR_0)
    {
        VAR_7->first_pts = VAR_8->s.start;
    }

    FUNC_5(VAR_7->list, VAR_8);
    *VAR_5 = ((void*)0);

    VAR_9 = FUNC_0(VAR_4);
    while (VAR_9)
    {
        FUNC_3(&VAR_10, VAR_9);
        VAR_9 = FUNC_0(VAR_4);
    }

    *VAR_6 = FUNC_4(&VAR_10);
    return VAR_3;
}
