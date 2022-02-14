
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int x264_picture_t ;
typedef int x264_nal_t ;
struct TYPE_18__ {int x264; TYPE_2__* api; } ;
typedef TYPE_3__ hb_work_private_t ;
struct TYPE_19__ {TYPE_3__* private_data; } ;
typedef TYPE_4__ hb_work_object_t ;
struct TYPE_16__ {int flags; } ;
struct TYPE_20__ {TYPE_1__ s; } ;
typedef TYPE_5__ hb_buffer_t ;
typedef int hb_buffer_list_t ;
struct TYPE_17__ {int (* encoder_encode ) (int ,int **,int*,int *,int *) ;scalar_t__ (* encoder_delayed_frames ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_5__*) ;
 TYPE_5__* FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (TYPE_4__*,int *,int,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int **,int*,int *,int *) ;
 TYPE_5__* FUNC_5 (TYPE_4__*,TYPE_5__*) ;

int FUNC_6( hb_work_object_t * VAR_3, hb_buffer_t ** VAR_4,
                  hb_buffer_t ** VAR_5 )
{
    hb_work_private_t *VAR_6 = VAR_3->private_data;
    hb_buffer_t *VAR_7 = *VAR_4;

    *VAR_5 = ((void*)0);

    if (VAR_7->s.flags & VAR_0)
    {


        x264_picture_t VAR_8;
        int VAR_9;
        x264_nal_t *VAR_10;
        hb_buffer_list_t VAR_11;

        FUNC_1(&VAR_11);


        while ( VAR_6->api->encoder_delayed_frames( VAR_6->x264 ) )
        {
            VAR_6->api->encoder_encode( VAR_6->x264, &VAR_10, &VAR_9, ((void*)0), &VAR_8 );
            if ( VAR_9 == 0 )
                continue;
            if ( VAR_9 < 0 )
                break;

            hb_buffer_t *VAR_12 = FUNC_2( VAR_3, &VAR_8, VAR_9, VAR_10 );
            FUNC_0(&VAR_11, VAR_12);
        }

        FUNC_0(&VAR_11, VAR_7);

        *VAR_5 = FUNC_1(&VAR_11);
        *VAR_4 = ((void*)0);
        return VAR_1;
    }


    *VAR_5 = FUNC_5( VAR_3, VAR_7 );
    return VAR_2;
}
