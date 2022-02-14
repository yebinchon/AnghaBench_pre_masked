
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_25__ {int afq; int handle; } ;
struct TYPE_24__ {int numBufs; void** bufs; int* bufferIdentifiers; int* bufSizes; int* bufElSizes; int member_0; } ;
struct TYPE_23__ {int numInSamples; int member_0; } ;
struct TYPE_22__ {int numOutBytes; int member_0; } ;
struct TYPE_21__ {int channels; int frame_size; TYPE_7__* priv_data; } ;
struct TYPE_20__ {int nb_samples; void** data; } ;
struct TYPE_19__ {int size; int duration; int pts; void* data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ AACENC_OutArgs ;
typedef TYPE_5__ AACENC_InArgs ;
typedef scalar_t__ AACENC_ERROR ;
typedef TYPE_6__ AACENC_BufDesc ;
typedef TYPE_7__ AACContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,TYPE_6__*,TYPE_6__*,TYPE_5__*,TYPE_4__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*,int ,char*,int ) ;
 int FUNC_5 (int *,TYPE_2__ const*) ;
 int FUNC_6 (int *,int ,int *,int *) ;
 int FUNC_7 (TYPE_3__*,TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_6, AVPacket *VAR_7,
                            const AVFrame *VAR_8, int *VAR_9)
{
    AACContext *VAR_10 = VAR_6->priv_data;
    AACENC_BufDesc VAR_11 = { 0 }, VAR_12 = { 0 };
    AACENC_InArgs VAR_13 = { 0 };
    AACENC_OutArgs VAR_14 = { 0 };
    int VAR_15 = VAR_4;
    int VAR_16, VAR_17;
    int VAR_18 = VAR_5;
    int VAR_19, VAR_20;
    void *VAR_21, *VAR_22;
    int VAR_23;
    uint8_t VAR_24[1];
    AACENC_ERROR VAR_25;


    if (!VAR_8) {


        VAR_21 = VAR_24;
        VAR_16 = 0;

        VAR_13.numInSamples = -1;
    } else {
        VAR_21 = VAR_8->data[0];
        VAR_16 = 2 * VAR_6->channels * VAR_8->nb_samples;

        VAR_13.numInSamples = VAR_6->channels * VAR_8->nb_samples;


        if ((VAR_23 = FUNC_5(&VAR_10->afq, VAR_8)) < 0)
            return VAR_23;
    }

    VAR_17 = 2;
    VAR_11.numBufs = 1;
    VAR_11.bufs = &VAR_21;
    VAR_11.bufferIdentifiers = &VAR_15;
    VAR_11.bufSizes = &VAR_16;
    VAR_11.bufElSizes = &VAR_17;


    if ((VAR_23 = FUNC_7(VAR_6, VAR_7, FUNC_1(8192, 768 * VAR_6->channels), 0)) < 0)
        return VAR_23;

    VAR_22 = VAR_7->data;
    VAR_19 = VAR_7->size;
    VAR_20 = 1;
    VAR_12.numBufs = 1;
    VAR_12.bufs = &VAR_22;
    VAR_12.bufferIdentifiers = &VAR_18;
    VAR_12.bufSizes = &VAR_19;
    VAR_12.bufElSizes = &VAR_20;

    if ((VAR_25 = FUNC_2(VAR_10->handle, &VAR_11, &VAR_12, &VAR_13,
                            &VAR_14)) != VAR_1) {
        if (!VAR_8 && VAR_25 == VAR_0)
            return 0;
        FUNC_4(VAR_6, VAR_2, "Unable to encode frame: %s\n",
               FUNC_3(VAR_25));
        return FUNC_0(VAR_3);
    }

    if (!VAR_14.numOutBytes)
        return 0;


    FUNC_6(&VAR_10->afq, VAR_6->frame_size, &VAR_7->pts,
                       &VAR_7->duration);

    VAR_7->size = VAR_14.numOutBytes;
    *VAR_9 = 1;
    return 0;
}
