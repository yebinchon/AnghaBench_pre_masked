
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {scalar_t__ sample_rate; int channel_layout; int channels; int frame_size; TYPE_1__* priv_data; } ;
struct TYPE_8__ {scalar_t__ sampleRate; int numChannels; size_t* pChannelType; int frameSize; } ;
struct TYPE_7__ {int handle; } ;
typedef TYPE_1__ FDKAACDecContext ;
typedef TYPE_2__ CStreamInfo ;
typedef TYPE_3__ AVCodecContext ;
typedef size_t AUDIO_CHANNEL_TYPE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 size_t FUNC_0 (int*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ,char*,...) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_23)
{
    FDKAACDecContext *VAR_24 = VAR_23->priv_data;
    CStreamInfo *VAR_25 = FUNC_1(VAR_24->handle);
    int VAR_26[0x24] = { 0 };
    int VAR_27, VAR_28 = 0;
    uint64_t VAR_29 = 0;

    if (!VAR_25) {
        FUNC_3(VAR_23, VAR_21, "Unable to get stream info\n");
        return VAR_9;
    }

    if (VAR_25->sampleRate <= 0) {
        FUNC_3(VAR_23, VAR_21, "Stream info not initialized\n");
        return VAR_9;
    }
    VAR_23->sample_rate = VAR_25->sampleRate;
    VAR_23->frame_size = VAR_25->frameSize;

    for (VAR_27 = 0; VAR_27 < VAR_25->numChannels; VAR_27++) {
        AUDIO_CHANNEL_TYPE VAR_30 = VAR_25->pChannelType[VAR_27];
        if (VAR_30 <= VAR_5 || VAR_30 >= FUNC_0(VAR_26)) {
            FUNC_3(VAR_23, VAR_22, "unknown channel type\n");
            break;
        }
        VAR_26[VAR_30]++;
    }
    FUNC_3(VAR_23, VAR_20,
           "%d channels - front:%d side:%d back:%d lfe:%d top:%d\n",
           VAR_25->numChannels,
           VAR_26[VAR_2], VAR_26[VAR_6],
           VAR_26[VAR_0], VAR_26[VAR_4],
           VAR_26[VAR_3] + VAR_26[VAR_7] +
           VAR_26[VAR_1] + VAR_26[VAR_8]);

    switch (VAR_26[VAR_2]) {
    case 4:
        VAR_29 |= VAR_16 | VAR_14 |
                     VAR_15;
        break;
    case 3:
        VAR_29 |= VAR_16 | VAR_13;
        break;
    case 2:
        VAR_29 |= VAR_16;
        break;
    case 1:
        VAR_29 |= VAR_13;
        break;
    default:
        FUNC_3(VAR_23, VAR_22,
               "unsupported number of front channels: %d\n",
               VAR_26[VAR_2]);
        VAR_28 = 1;
        break;
    }
    if (VAR_26[VAR_6] > 0) {
        if (VAR_26[VAR_6] == 2) {
            VAR_29 |= VAR_18 | VAR_19;
        } else {
            FUNC_3(VAR_23, VAR_22,
                   "unsupported number of side channels: %d\n",
                   VAR_26[VAR_6]);
            VAR_28 = 1;
        }
    }
    if (VAR_26[VAR_0] > 0) {
        switch (VAR_26[VAR_0]) {
        case 3:
            VAR_29 |= VAR_11 | VAR_12 | VAR_10;
            break;
        case 2:
            VAR_29 |= VAR_11 | VAR_12;
            break;
        case 1:
            VAR_29 |= VAR_10;
            break;
        default:
            FUNC_3(VAR_23, VAR_22,
                   "unsupported number of back channels: %d\n",
                   VAR_26[VAR_0]);
            VAR_28 = 1;
            break;
        }
    }
    if (VAR_26[VAR_4] > 0) {
        if (VAR_26[VAR_4] == 1) {
            VAR_29 |= VAR_17;
        } else {
            FUNC_3(VAR_23, VAR_22,
                   "unsupported number of LFE channels: %d\n",
                   VAR_26[VAR_4]);
            VAR_28 = 1;
        }
    }
    if (!VAR_28 &&
        FUNC_2(VAR_29) != VAR_25->numChannels) {
        FUNC_3(VAR_23, VAR_22, "unsupported channel configuration\n");
        VAR_28 = 1;
    }
    if (VAR_28)
        VAR_23->channel_layout = 0;
    else
        VAR_23->channel_layout = VAR_29;

    VAR_23->channels = VAR_25->numChannels;

    return 0;
}
