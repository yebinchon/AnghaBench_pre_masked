
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef scalar_t__ int64_t ;
struct TYPE_16__ {int den; void* num; } ;
struct TYPE_18__ {int version; int compcount; int* components; int has_audio; int audio_stream_index; int video_stream_index; TYPE_3__* vst; void* framecnt; TYPE_14__ fps; void* compoff; void* first_frame; void* next_frame; void* first_framesz; void* next_framesz; void* last_frame; } ;
typedef TYPE_2__ ThpDemuxContext ;
struct TYPE_21__ {TYPE_4__* pb; TYPE_2__* priv_data; } ;
struct TYPE_20__ {scalar_t__ maxsize; } ;
struct TYPE_19__ {int index; TYPE_1__* codecpar; void* duration; void* nb_frames; } ;
struct TYPE_17__ {void* sample_rate; void* channels; scalar_t__ codec_tag; int codec_id; int codec_type; void* height; void* width; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_14__ FUNC_1 (int ,int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (TYPE_14__) ;
 TYPE_3__* FUNC_4 (TYPE_5__*,int *) ;
 void* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int*,int) ;
 int FUNC_7 (TYPE_4__*,void*,int ) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*,int,int,void*) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_7)
{
    ThpDemuxContext *VAR_8 = VAR_7->priv_data;
    AVStream *VAR_9;
    AVIOContext *VAR_10 = VAR_7->pb;
    int64_t VAR_11= FUNC_8(VAR_10);
    int VAR_12;


                           FUNC_5(VAR_10);
    VAR_8->version = FUNC_5(VAR_10);

                           FUNC_5(VAR_10);
                           FUNC_5(VAR_10);

    VAR_8->fps = FUNC_1(FUNC_2(FUNC_5(VAR_10)), VAR_5);
    VAR_8->framecnt = FUNC_5(VAR_10);
    VAR_8->first_framesz = FUNC_5(VAR_10);
    VAR_10->maxsize = FUNC_5(VAR_10);
    if(VAR_11>0 && (!VAR_10->maxsize || VAR_11 < VAR_10->maxsize))
        VAR_10->maxsize= VAR_11;

    VAR_8->compoff = FUNC_5(VAR_10);
                           FUNC_5(VAR_10);
    VAR_8->first_frame = FUNC_5(VAR_10);
    VAR_8->last_frame = FUNC_5(VAR_10);

    VAR_8->next_framesz = VAR_8->first_framesz;
    VAR_8->next_frame = VAR_8->first_frame;


    FUNC_7 (VAR_10, VAR_8->compoff, VAR_6);
    VAR_8->compcount = FUNC_5(VAR_10);


    FUNC_6(VAR_10, VAR_8->components, 16);

    for (VAR_12 = 0; VAR_12 < VAR_8->compcount; VAR_12++) {
        if (VAR_8->components[VAR_12] == 0) {
            if (VAR_8->vst)
                break;


            VAR_9 = FUNC_4(VAR_7, ((void*)0));
            if (!VAR_9)
                return FUNC_0(VAR_4);



            FUNC_9(VAR_9, 64, VAR_8->fps.den, VAR_8->fps.num);
            VAR_9->codecpar->codec_type = VAR_1;
            VAR_9->codecpar->codec_id = VAR_3;
            VAR_9->codecpar->codec_tag = 0;
            VAR_9->codecpar->width = FUNC_5(VAR_10);
            VAR_9->codecpar->height = FUNC_5(VAR_10);
            VAR_9->codecpar->sample_rate = FUNC_3(VAR_8->fps);
            VAR_9->nb_frames =
            VAR_9->duration = VAR_8->framecnt;
            VAR_8->vst = VAR_9;
            VAR_8->video_stream_index = VAR_9->index;

            if (VAR_8->version == 0x11000)
                FUNC_5(VAR_10);
        } else if (VAR_8->components[VAR_12] == 1) {
            if (VAR_8->has_audio != 0)
                break;


            VAR_9 = FUNC_4(VAR_7, ((void*)0));
            if (!VAR_9)
                return FUNC_0(VAR_4);

            VAR_9->codecpar->codec_type = VAR_0;
            VAR_9->codecpar->codec_id = VAR_2;
            VAR_9->codecpar->codec_tag = 0;
            VAR_9->codecpar->channels = FUNC_5(VAR_10);
            VAR_9->codecpar->sample_rate = FUNC_5(VAR_10);
            VAR_9->duration = FUNC_5(VAR_10);

            FUNC_9(VAR_9, 64, 1, VAR_9->codecpar->sample_rate);

            VAR_8->audio_stream_index = VAR_9->index;
            VAR_8->has_audio = 1;
        }
    }

    return 0;
}
