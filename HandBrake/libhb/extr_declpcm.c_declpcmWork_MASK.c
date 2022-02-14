
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int size; int pos; int offset; scalar_t__ frame; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_16__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_work_object_t ;
struct TYPE_14__ {int flags; } ;
struct TYPE_17__ {int size; scalar_t__ data; TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;
typedef int hb_buffer_list_t ;


 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5( hb_work_object_t * VAR_3, hb_buffer_t ** VAR_4,
                 hb_buffer_t ** VAR_5 )
{
    hb_work_private_t * VAR_6 = VAR_3->private_data;
    hb_buffer_t *VAR_7 = *VAR_4;
    hb_buffer_t *VAR_8 = ((void*)0);
    hb_buffer_list_t VAR_9;

    FUNC_2(&VAR_9);
    if (VAR_7->s.flags & VAR_0)
    {

        *VAR_5 = VAR_7;
        *VAR_4 = ((void*)0);
        return VAR_1;
    }



    if (VAR_6->size)
    {
        FUNC_4(VAR_6->frame + VAR_6->pos, VAR_7->data + 6, VAR_6->size - VAR_6->pos);
        VAR_8 = FUNC_0( VAR_3 );
        FUNC_1(&VAR_9, VAR_8);
    }


    FUNC_3( VAR_3, VAR_7 );
    int VAR_10 = VAR_6->offset;
    int VAR_11 = VAR_7->size - VAR_10;
    VAR_6->pos = VAR_11;
    FUNC_4( VAR_6->frame, VAR_7->data + VAR_10, VAR_11 );
    if (VAR_11 >= VAR_6->size)
    {
        VAR_8 = FUNC_0( VAR_3 );
        FUNC_1(&VAR_9, VAR_8);
        VAR_6->size = 0;
    }

    *VAR_5 = FUNC_2(&VAR_9);
    return VAR_2;
}
