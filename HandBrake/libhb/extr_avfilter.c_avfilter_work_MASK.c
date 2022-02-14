
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int list; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_17__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_filter_object_t ;
struct TYPE_15__ {int flags; scalar_t__ start; scalar_t__ stop; scalar_t__ duration; } ;
struct TYPE_18__ {TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5( hb_filter_object_t * VAR_4,
                          hb_buffer_t ** VAR_5, hb_buffer_t ** VAR_6 )
{
    hb_filter_private_t * VAR_7 = VAR_4->private_data;
    hb_buffer_t * VAR_8 = *VAR_5;

    if (VAR_8->s.flags & VAR_1)
    {
        hb_buffer_t * VAR_9 = FUNC_0(VAR_7, ((void*)0));
        hb_buffer_t * VAR_10 = FUNC_4(&VAR_7->list);
        if (VAR_10 != ((void*)0) && VAR_10->s.start != VAR_0)
        {
            VAR_10->s.stop = VAR_10->s.start + VAR_10->s.duration;
        }
        FUNC_3(&VAR_7->list, VAR_9);
        FUNC_1(&VAR_7->list, VAR_8);
        *VAR_6 = FUNC_2(&VAR_7->list);
        *VAR_5 = ((void*)0);
        return VAR_2;
    }

    *VAR_6 = FUNC_0(VAR_7, VAR_8);

    return VAR_3;
}
