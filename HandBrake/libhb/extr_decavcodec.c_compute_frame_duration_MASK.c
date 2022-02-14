
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_14__ {double duration; double field_duration; TYPE_4__* context; TYPE_1__* title; } ;
typedef TYPE_5__ hb_work_private_t ;
struct TYPE_17__ {TYPE_2__* iformat; TYPE_6__** streams; } ;
struct TYPE_16__ {long long num; long long den; } ;
struct TYPE_15__ {TYPE_7__ time_base; TYPE_7__ avg_frame_rate; scalar_t__ nb_frames; scalar_t__ duration; } ;
struct TYPE_12__ {int num; int den; } ;
struct TYPE_13__ {int ticks_per_frame; TYPE_3__ time_base; } ;
struct TYPE_11__ {scalar_t__ raw_codec_id; } ;
struct TYPE_10__ {size_t video_id; scalar_t__ opaque_priv; } ;
typedef TYPE_6__ AVStream ;
typedef TYPE_7__ AVRational ;
typedef TYPE_8__ AVFormatContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0( hb_work_private_t *VAR_1 )
{
    double VAR_2 = 0.;
    int64_t VAR_3 = 64LL;


    if ( VAR_1->context->ticks_per_frame > 1 )
        VAR_3 *= VAR_1->context->ticks_per_frame;

    if ( VAR_1->title->opaque_priv )
    {



        AVFormatContext *VAR_4 = (AVFormatContext*)VAR_1->title->opaque_priv;
        AVStream *VAR_5 = VAR_4->streams[VAR_1->title->video_id];
        if ( VAR_5->nb_frames && VAR_5->duration )
        {


            VAR_2 = ( (double)VAR_5->duration * (double)VAR_5->time_base.num ) /
                       ( (double)VAR_5->nb_frames * (double)VAR_5->time_base.den );
        }



        else if (VAR_4->iformat->raw_codec_id == VAR_0)
        {




            AVRational *VAR_6 = ((void*)0);
            if ( VAR_5->avg_frame_rate.den * 64LL > VAR_5->avg_frame_rate.num &&
                 VAR_5->avg_frame_rate.num > VAR_5->avg_frame_rate.den * 8LL )
            {
                VAR_6 = &(VAR_5->avg_frame_rate);
                VAR_2 = (double)VAR_6->den / (double)VAR_6->num;
            }
            else if ( VAR_5->time_base.num * 64LL > VAR_5->time_base.den &&
                      VAR_5->time_base.den > VAR_5->time_base.num * 8LL )
            {
                VAR_6 = &(VAR_5->time_base);
                VAR_2 = (double)VAR_6->num / (double)VAR_6->den;
            }
        }
        if ( !VAR_2 &&
             VAR_1->context->time_base.num * VAR_3 > VAR_1->context->time_base.den &&
             VAR_1->context->time_base.den > VAR_1->context->time_base.num * 8LL )
        {
            VAR_2 = (double)VAR_1->context->time_base.num /
                        (double)VAR_1->context->time_base.den;
            if ( VAR_1->context->ticks_per_frame > 1 )
            {


                VAR_2 *= VAR_1->context->ticks_per_frame;
            }
        }
    }
    else
    {
        if ( VAR_1->context->time_base.num * VAR_3 > VAR_1->context->time_base.den &&
             VAR_1->context->time_base.den > VAR_1->context->time_base.num * 8LL )
        {
            VAR_2 = (double)VAR_1->context->time_base.num /
                            (double)VAR_1->context->time_base.den;
            if ( VAR_1->context->ticks_per_frame > 1 )
            {


                VAR_2 *= VAR_1->context->ticks_per_frame;
            }
        }
    }
    if ( VAR_2 == 0 )
    {

        VAR_2 = 1001. / 24000.;
    }
    VAR_1->duration = VAR_2 * 90000.;
    VAR_1->field_duration = VAR_1->duration;
    if ( VAR_1->context->ticks_per_frame > 1 )
    {
        VAR_1->field_duration /= VAR_1->context->ticks_per_frame;
    }
}
