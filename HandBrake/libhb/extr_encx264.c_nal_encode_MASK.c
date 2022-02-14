
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int i_type; scalar_t__ b_keyframe; int i_dts; int i_pts; } ;
typedef TYPE_3__ x264_picture_t ;
struct TYPE_19__ {int i_payload; int i_type; scalar_t__ i_ref_idc; int p_payload; } ;
typedef TYPE_4__ x264_nal_t ;
struct TYPE_20__ {int chapter_queue; TYPE_7__* job; } ;
typedef TYPE_5__ hb_work_private_t ;
struct TYPE_21__ {TYPE_1__* config; TYPE_5__* private_data; } ;
typedef TYPE_6__ hb_work_object_t ;
struct TYPE_22__ {int inline_parameter_sets; int height; int width; } ;
typedef TYPE_7__ hb_job_t ;
struct TYPE_17__ {scalar_t__ frametype; int flags; int renderOffset; void* stop; int start; void* duration; } ;
struct TYPE_23__ {int size; TYPE_2__ s; scalar_t__ data; } ;
typedef TYPE_8__ hb_buffer_t ;
struct TYPE_16__ {int init_delay; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_8__**) ;
 int FUNC_1 (int ,TYPE_8__*) ;
 TYPE_8__* FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,int ,int) ;

__attribute__((used)) static hb_buffer_t *FUNC_4( hb_work_object_t *VAR_9, x264_picture_t *VAR_10,
                                int VAR_11, x264_nal_t *VAR_12 )
{
    hb_buffer_t *VAR_13 = ((void*)0);
    hb_work_private_t *VAR_14 = VAR_9->private_data;
    hb_job_t *VAR_15 = VAR_14->job;


    VAR_13 = FUNC_2( VAR_15->width, VAR_15->height );
    VAR_13->size = 0;
    VAR_13->s.frametype = 0;


    VAR_13->s.duration = VAR_0;
    VAR_13->s.start = VAR_10->i_pts;
    VAR_13->s.stop = VAR_0;
    VAR_13->s.renderOffset = VAR_10->i_dts;
    if ( !VAR_9->config->init_delay && VAR_10->i_dts < 0 )
    {
        VAR_9->config->init_delay = -VAR_10->i_dts;
    }


    switch (VAR_10->i_type)
    {
        case 129:
            VAR_13->s.frametype = VAR_6;
            break;

        case 128:
            VAR_13->s.frametype = VAR_7;
            break;

        case 132:
            VAR_13->s.frametype = VAR_3;
            break;

        case 131:
            VAR_13->s.frametype = VAR_4;
            break;

        case 130:
        default:
            VAR_13->s.frametype = VAR_5;
            break;
    }
    VAR_13->s.flags = 0;

    if (VAR_10->b_keyframe)
    {
        VAR_13->s.flags |= VAR_1;




        FUNC_1(VAR_14->chapter_queue, VAR_13);
    }






    int VAR_16;
    VAR_13->s.flags &= ~VAR_2;
    for( VAR_16 = 0; VAR_16 < VAR_11; VAR_16++ )
    {
        int VAR_17 = VAR_12[VAR_16].i_payload;
        FUNC_3(VAR_13->data + VAR_13->size, VAR_12[VAR_16].p_payload, VAR_17);
        if( VAR_17 < 1 )
        {
            continue;
        }


        switch( VAR_12[VAR_16].i_type )
        {



            case 133:
            case 137:
                if (!VAR_15->inline_parameter_sets)
                {
                    continue;
                }
                break;

            case 134:
            case 135:
            case 136:
            default:
                break;
        }







        if (VAR_12[VAR_16].i_ref_idc != VAR_8)
        {
            if (VAR_13->s.frametype == VAR_3)
            {
                VAR_13->s.frametype = VAR_4;
            }
            VAR_13->s.flags |= VAR_2;
        }

        VAR_13->size += VAR_17;
    }

    if ( VAR_13->size <= 0 )
    {

        FUNC_0( &VAR_13 );
    }
    return VAR_13;
}
