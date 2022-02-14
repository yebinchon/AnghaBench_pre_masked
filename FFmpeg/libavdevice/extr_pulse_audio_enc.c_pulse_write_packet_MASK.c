
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int writable_size ;
typedef scalar_t__ int64_t ;
struct TYPE_18__ {TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_17__ {scalar_t__ dts; scalar_t__ duration; scalar_t__ size; int data; } ;
struct TYPE_16__ {int member_0; int member_1; } ;
struct TYPE_15__ {int time_base; TYPE_1__* codecpar; } ;
struct TYPE_14__ {scalar_t__ timestamp; scalar_t__ minreq; int mainloop; int stream; scalar_t__ nonblocking; } ;
struct TYPE_13__ {scalar_t__ channels; int format; int sample_rate; } ;
typedef TYPE_2__ PulseData ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVRational ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,char*,...) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_4__,int ) ;
 int FUNC_5 (TYPE_6__*,int ,scalar_t__*,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,scalar_t__,int *,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_14(AVFormatContext *VAR_6, AVPacket *VAR_7)
{
    PulseData *VAR_8 = VAR_6->priv_data;
    int VAR_9;
    int64_t VAR_10;

    if (!VAR_7)
        return FUNC_13(VAR_8);

    if (VAR_7->dts != VAR_3)
        VAR_8->timestamp = VAR_7->dts;

    if (VAR_7->duration) {
        VAR_8->timestamp += VAR_7->duration;
    } else {
        AVStream *VAR_11 = VAR_6->streams[0];
        AVRational VAR_12 = { 1, VAR_11->codecpar->sample_rate };
        int64_t VAR_13 = VAR_7->size / (FUNC_2(VAR_11->codecpar->format) * VAR_11->codecpar->channels);
        VAR_8->timestamp += FUNC_4(VAR_13, VAR_12, VAR_11->time_base);
    }

    FUNC_10(VAR_8->mainloop);
    if (!FUNC_1(FUNC_6(VAR_8->stream))) {
        FUNC_3(VAR_8, VAR_2, "PulseAudio stream is in invalid state.\n");
        goto fail;
    }
    while (FUNC_7(VAR_8->stream) < VAR_8->minreq) {
        if (VAR_8->nonblocking) {
            FUNC_11(VAR_8->mainloop);
            return FUNC_0(VAR_4);
        } else
            FUNC_12(VAR_8->mainloop);
    }

    if ((VAR_9 = FUNC_8(VAR_8->stream, VAR_7->data, VAR_7->size, ((void*)0), 0, VAR_5)) < 0) {
        FUNC_3(VAR_8, VAR_2, "pa_stream_write failed: %s\n", FUNC_9(VAR_9));
        goto fail;
    }
    if ((VAR_10 = FUNC_7(VAR_8->stream)) >= VAR_8->minreq)
        FUNC_5(VAR_6, VAR_1, &VAR_10, sizeof(VAR_10));

    FUNC_11(VAR_8->mainloop);

    return 0;
  fail:
    FUNC_11(VAR_8->mainloop);
    return VAR_0;
}
