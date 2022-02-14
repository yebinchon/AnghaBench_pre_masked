
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int frame_count; TYPE_4__** buf; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_17__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_filter_object_t ;
struct TYPE_15__ {int flags; } ;
struct TYPE_18__ {TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;
typedef int hb_buffer_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (TYPE_2__*) ;
 TYPE_4__* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(hb_filter_object_t * VAR_3,
                         hb_buffer_t ** VAR_4,
                         hb_buffer_t ** VAR_5 )
{
    hb_filter_private_t *VAR_6 = VAR_3->private_data;
    hb_buffer_t *VAR_7 = *VAR_4;

    *VAR_4 = ((void*)0);
    if (VAR_7->s.flags & VAR_0)
    {
        hb_buffer_list_t VAR_8;
        hb_buffer_t *VAR_9;


        VAR_9 = FUNC_4(VAR_6);
        FUNC_2(&VAR_8, VAR_9);


        FUNC_0(&VAR_8, VAR_7);
        *VAR_5 = FUNC_1(&VAR_8);

        return VAR_1;
    }

    VAR_6->buf[VAR_6->frame_count++] = VAR_7;
    *VAR_5 = FUNC_3(VAR_6);

    return VAR_2;
}
