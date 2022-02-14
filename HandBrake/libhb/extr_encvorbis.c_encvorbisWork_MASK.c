
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int list; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_15__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_work_object_t ;
struct TYPE_13__ {int flags; } ;
struct TYPE_16__ {TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;
typedef int hb_buffer_list_t ;


 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_4__*) ;

int FUNC_4( hb_work_object_t * VAR_3, hb_buffer_t ** VAR_4,
                   hb_buffer_t ** VAR_5 )
{
    hb_work_private_t * VAR_6 = VAR_3->private_data;
    hb_buffer_t * VAR_7 = *VAR_4;
    hb_buffer_t * VAR_8;
    hb_buffer_list_t VAR_9;

    *VAR_4 = ((void*)0);
    FUNC_2(&VAR_9);
    if (VAR_7->s.flags & VAR_0)
    {

        *VAR_5 = VAR_7;
        return VAR_1;
    }

    FUNC_3(VAR_6->list, VAR_7);

    VAR_8 = FUNC_0( VAR_3 );
    while (VAR_8)
    {
        FUNC_1(&VAR_9, VAR_8);
        VAR_8 = FUNC_0( VAR_3 );
    }

    *VAR_5 = FUNC_2(&VAR_9);
    return VAR_2;
}
