
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ pa_usec_t ;
typedef int int64_t ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_11__ {scalar_t__ audio_codec_id; TYPE_1__* priv_data; } ;
struct TYPE_10__ {int data; int pts; } ;
struct TYPE_9__ {int channels; int last_period; int mainloop; int stream; int timefilter; scalar_t__ wallclock; } ;
typedef TYPE_1__ PulseData ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,size_t) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,void const*,size_t) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,scalar_t__*,int*) ;
 int FUNC_12 (int ,void const**,size_t*) ;
 int FUNC_13 (int ,int *,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_17(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    PulseData *VAR_7 = VAR_5->priv_data;
    int VAR_8;
    size_t VAR_9;
    const void *VAR_10 = ((void*)0);
    int64_t VAR_11;
    pa_usec_t VAR_12;
    int VAR_13;

    FUNC_14(VAR_7->mainloop);

    FUNC_1(VAR_7, VAR_8, VAR_4);

    while (!VAR_10) {
        int VAR_14;

        VAR_14 = FUNC_12(VAR_7->stream, &VAR_10, &VAR_9);
        FUNC_2(VAR_8, VAR_14 == 0, VAR_4);

        if (VAR_9 <= 0) {
            FUNC_16(VAR_7->mainloop);
            FUNC_1(VAR_7, VAR_8, VAR_4);
        } else if (!VAR_10) {


            VAR_14 = FUNC_10(VAR_7->stream);
            FUNC_2(VAR_8, VAR_14 == 0, VAR_4);
        }
    }

    if (FUNC_6(VAR_6, VAR_9) < 0) {
        VAR_8 = FUNC_0(VAR_3);
        goto unlock_and_fail;
    }

    VAR_11 = FUNC_4();
    FUNC_9(FUNC_13(VAR_7->stream, ((void*)0), ((void*)0)));

    if (FUNC_11(VAR_7->stream, &VAR_12, &VAR_13) >= 0) {
        enum AVCodecID VAR_15 =
            VAR_5->audio_codec_id == VAR_0 ? VAR_2 : VAR_5->audio_codec_id;
        int VAR_16 = ((FUNC_3(VAR_15) >> 3) * VAR_7->channels);
        int VAR_17 = VAR_9 / VAR_16;


        if (VAR_13) {
            VAR_11 += VAR_12;
        } else
            VAR_11 -= VAR_12;
        if (VAR_7->wallclock)
            VAR_6->pts = FUNC_7(VAR_7->timefilter, VAR_11, VAR_7->last_period);

        VAR_7->last_period = VAR_17;
    } else {
        FUNC_5(VAR_5, VAR_1, "pa_stream_get_latency() failed\n");
    }

    FUNC_8(VAR_6->data, VAR_10, VAR_9);
    FUNC_10(VAR_7->stream);

    FUNC_15(VAR_7->mainloop);
    return 0;

unlock_and_fail:
    FUNC_15(VAR_7->mainloop);
    return VAR_8;
}
