
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_16__ {int size; int stream_index; int flags; int dts; int pts; int * data; } ;
struct TYPE_15__ {TYPE_1__* tracks; } ;
struct TYPE_14__ {int sample_queue; TYPE_4__* rtp_ctx; } ;
typedef TYPE_1__ MOVTrack ;
typedef TYPE_2__ MOVMuxContext ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*,int ,TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int *,int *,int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int,TYPE_1__*,int *) ;

int FUNC_12(AVFormatContext *VAR_4, AVPacket *VAR_5,
                             int VAR_6, int VAR_7,
                             uint8_t *VAR_8, int VAR_9)
{
    MOVMuxContext *VAR_10 = VAR_4->priv_data;
    MOVTrack *VAR_11 = &VAR_10->tracks[VAR_6];
    AVFormatContext *VAR_12 = VAR_11->rtp_ctx;
    uint8_t *VAR_13 = ((void*)0);
    int VAR_14;
    AVIOContext *VAR_15 = ((void*)0);
    AVPacket VAR_16;
    int VAR_17 = 0, VAR_18;

    if (!VAR_12)
        return FUNC_0(VAR_1);
    if (!VAR_12->pb)
        return FUNC_0(VAR_2);

    if (VAR_8)
        FUNC_9(&VAR_11->sample_queue, VAR_8, VAR_9, VAR_7);
    else
        FUNC_9(&VAR_11->sample_queue, VAR_5->data, VAR_5->size, VAR_7);


    FUNC_7(VAR_12, 0, VAR_5, VAR_4, 0);



    VAR_14 = FUNC_4(VAR_12->pb, &VAR_13);
    if ((VAR_17 = FUNC_8(&VAR_12->pb,
                                        VAR_3)) < 0)
        goto done;

    if (VAR_14 <= 0)
        goto done;


    if ((VAR_17 = FUNC_5(&VAR_15)) < 0)
        goto done;
    FUNC_3(&VAR_16);
    VAR_18 = FUNC_11(VAR_15, VAR_13, VAR_14, VAR_11, &VAR_16.dts);
    FUNC_2(&VAR_13);


    VAR_16.size = VAR_14 = FUNC_4(VAR_15, &VAR_13);
    VAR_16.data = VAR_13;
    VAR_16.pts = VAR_16.dts;
    VAR_16.stream_index = VAR_6;
    if (VAR_5->flags & VAR_0)
        VAR_16.flags |= VAR_0;
    if (VAR_18 > 0)
        FUNC_6(VAR_4, &VAR_16);
done:
    FUNC_1(VAR_13);
    FUNC_10(&VAR_11->sample_queue);
    return VAR_17;
}
