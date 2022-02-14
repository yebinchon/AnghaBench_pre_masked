
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_26__ {scalar_t__ codec_type; } ;
struct TYPE_25__ {TYPE_4__* pb; TYPE_1__** streams; TYPE_5__* priv_data; } ;
struct TYPE_24__ {scalar_t__ riff_start; scalar_t__ movi_list; int riff_id; } ;
struct TYPE_23__ {int seekable; } ;
struct TYPE_22__ {scalar_t__ last_dts; int audio_strm_length; int packet_count; } ;
struct TYPE_21__ {int stream_index; int size; scalar_t__ dts; scalar_t__ duration; int flags; unsigned char* data; } ;
struct TYPE_20__ {TYPE_7__* codecpar; TYPE_3__* priv_data; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVIStream ;
typedef TYPE_4__ AVIOContext ;
typedef TYPE_5__ AVIContext ;
typedef TYPE_6__ AVFormatContext ;
typedef TYPE_7__ AVCodecParameters ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_6__*,int const,int *,unsigned int,int) ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_4__*,char*,char*) ;
 int FUNC_2 (unsigned char*,int const,scalar_t__) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,unsigned char*,int) ;
 int FUNC_9 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    unsigned char VAR_7[5];
    unsigned int VAR_8 = 0;
    const int VAR_9 = VAR_6->stream_index;
    int VAR_10 = VAR_6->size;
    AVIContext *VAR_11 = VAR_5->priv_data;
    AVIOContext *VAR_12 = VAR_5->pb;
    AVIStream *VAR_13 = VAR_5->streams[VAR_9]->priv_data;
    AVCodecParameters *VAR_14 = VAR_5->streams[VAR_9]->codecpar;

    if (VAR_6->dts != VAR_3)
        VAR_13->last_dts = VAR_6->dts + VAR_6->duration;

    VAR_13->packet_count++;


    if ((VAR_12->seekable & VAR_0) &&
        (FUNC_5(VAR_12) - VAR_11->riff_start > VAR_1)) {
        FUNC_4(VAR_5);
        FUNC_9(VAR_12, VAR_11->movi_list);

        if (VAR_11->riff_id == 1)
            FUNC_3(VAR_5);

        FUNC_9(VAR_12, VAR_11->riff_start);
        VAR_11->movi_list = FUNC_1(VAR_5, VAR_12, "AVIX", "movi");
    }

    FUNC_2(VAR_7, VAR_9, VAR_14->codec_type);
    if (VAR_6->flags & VAR_4)
        VAR_8 = 0x10;
    if (VAR_14->codec_type == VAR_2)
        VAR_13->audio_strm_length += VAR_10;

    if (VAR_5->pb->seekable & VAR_0) {
        int VAR_15;
        VAR_15 = FUNC_0(VAR_5, VAR_9, ((void*)0), VAR_8, VAR_10);
        if (VAR_15 < 0)
            return VAR_15;
    }

    FUNC_8(VAR_12, VAR_7, 4);
    FUNC_7(VAR_12, VAR_10);
    FUNC_8(VAR_12, VAR_6->data, VAR_10);
    if (VAR_10 & 1)
        FUNC_6(VAR_12, 0);

    return 0;
}
