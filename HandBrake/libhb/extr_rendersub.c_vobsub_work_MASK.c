
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int sub_list; } ;
typedef TYPE_3__ hb_filter_private_t ;
struct TYPE_17__ {TYPE_1__* subtitle; TYPE_3__* private_data; } ;
typedef TYPE_4__ hb_filter_object_t ;
struct TYPE_15__ {int flags; } ;
struct TYPE_18__ {TYPE_2__ s; } ;
typedef TYPE_5__ hb_buffer_t ;
struct TYPE_14__ {int fifo_out; } ;


 int FUNC_0 (TYPE_3__*,TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__**) ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_5__*) ;

__attribute__((used)) static int FUNC_4( hb_filter_object_t * VAR_3,
                        hb_buffer_t ** VAR_4,
                        hb_buffer_t ** VAR_5 )
{
    hb_filter_private_t * VAR_6 = VAR_3->private_data;
    hb_buffer_t * VAR_7 = *VAR_4;
    hb_buffer_t * VAR_8;

    if (VAR_7->s.flags & VAR_0)
    {
        *VAR_4 = ((void*)0);
        *VAR_5 = VAR_7;
        return VAR_1;
    }



    while( ( VAR_8 = FUNC_2( VAR_3->subtitle->fifo_out ) ) )
    {
        if (VAR_8->s.flags & VAR_0)
        {
            FUNC_1(&VAR_8);
            break;
        }
        FUNC_3( VAR_6->sub_list, VAR_8 );
    }

    FUNC_0( VAR_6, VAR_7 );
    *VAR_4 = ((void*)0);
    *VAR_5 = VAR_7;

    return VAR_2;
}
