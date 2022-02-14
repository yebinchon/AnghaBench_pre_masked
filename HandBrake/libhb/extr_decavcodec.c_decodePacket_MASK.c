
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


struct TYPE_16__ {scalar_t__ io_pattern; } ;
struct TYPE_17__ {TYPE_1__ config; scalar_t__ decode; } ;
struct TYPE_21__ {int video_codec_opened; int packet_info; TYPE_5__* title; TYPE_8__* context; int threads; int codec; TYPE_2__ qsv; } ;
typedef TYPE_6__ hb_work_private_t ;
struct TYPE_22__ {TYPE_6__* private_data; } ;
typedef TYPE_7__ hb_work_object_t ;
struct TYPE_18__ {int den; int num; } ;
struct TYPE_23__ {int error_concealment; TYPE_3__ pkt_timebase; scalar_t__ extradata_size; int extradata; TYPE_1__* hwaccel_context; int err_recognition; int workaround_bugs; } ;
struct TYPE_19__ {int den; int num; } ;
struct TYPE_20__ {int flags; TYPE_4__ video_timebase; } ;
typedef int AVDictionary ;
typedef TYPE_8__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **,char*,char*,int ) ;
 int FUNC_2 (int *) ;
 TYPE_8__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*,int *) ;
 int FUNC_5 (TYPE_8__**) ;
 scalar_t__ FUNC_6 (TYPE_8__*,int ,int **,int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (TYPE_6__*,TYPE_8__*) ;

__attribute__((used)) static int FUNC_9( hb_work_object_t * VAR_7 )
{
    hb_work_private_t * VAR_8 = VAR_7->private_data;



    if ( !VAR_8->video_codec_opened )
    {
        AVCodecContext * VAR_9 = FUNC_3(VAR_8->codec);
        if (FUNC_8(VAR_8, VAR_9))
        {



            return VAR_5;
        }

        FUNC_5(&VAR_8->context);
        VAR_8->context = VAR_9;

        VAR_8->context->workaround_bugs = VAR_1;
        VAR_8->context->err_recognition = VAR_0;
        VAR_8->context->error_concealment = VAR_3|VAR_2;
        AVDictionary * VAR_10 = ((void*)0);
        FUNC_1( &VAR_10, "refcounted_frames", "1", 0 );
        if (VAR_8->title->flags & VAR_4)
        {
            FUNC_1( &VAR_10, "flags", "output_corrupt", 0 );
        }


        if ( FUNC_6( VAR_8->context, VAR_8->codec, &VAR_10, VAR_8->threads ) )
        {
            FUNC_0( &VAR_10 );
            FUNC_7( "decavcodecvWork: avcodec_open failed" );


            FUNC_2( &VAR_8->context->extradata );
            VAR_8->context->extradata_size = 0;
            return VAR_5;
        }
        VAR_8->context->pkt_timebase.num = VAR_8->title->video_timebase.num;
        VAR_8->context->pkt_timebase.den = VAR_8->title->video_timebase.den;
        FUNC_0( &VAR_10 );
        VAR_8->video_codec_opened = 1;
    }

    FUNC_4(VAR_8, &VAR_8->packet_info);

    return VAR_5;
}
