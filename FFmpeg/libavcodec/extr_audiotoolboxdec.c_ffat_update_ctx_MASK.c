
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef int format ;
typedef int UInt32 ;
struct TYPE_16__ {int mChannelFlags; int mChannelLabel; } ;
struct TYPE_15__ {int* channel_map; int converter; } ;
struct TYPE_14__ {int channel_layout; int frame_size; int channels; scalar_t__ sample_rate; TYPE_4__* priv_data; } ;
struct TYPE_13__ {int mFramesPerPacket; int mNumberChannelDescriptions; TYPE_5__* mChannelDescriptions; int mChannelsPerFrame; scalar_t__ mSampleRate; } ;
typedef TYPE_1__ AudioStreamBasicDescription ;
typedef TYPE_1__ AudioChannelLayout ;
typedef int AudioChannelDescription ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ ATDecodeContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int*,int *) ;
 int FUNC_3 (int ,int ,int,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_7 (TYPE_1__*,int*) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (TYPE_5__*,int,int,int *) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_5)
{
    ATDecodeContext *VAR_6 = VAR_5->priv_data;
    AudioStreamBasicDescription VAR_7;
    UInt32 VAR_8 = sizeof(VAR_7);
    if (!FUNC_1(VAR_6->converter,
                                   VAR_2,
                                   &VAR_8, &VAR_7)) {
        if (VAR_7.mSampleRate)
            VAR_5->sample_rate = VAR_7.mSampleRate;
        VAR_5->channels = VAR_7.mChannelsPerFrame;
        VAR_5->channel_layout = FUNC_5(VAR_5->channels);
        VAR_5->frame_size = VAR_7.mFramesPerPacket;
    }

    if (!FUNC_1(VAR_6->converter,
                                   VAR_3,
                                   &VAR_8, &VAR_7)) {
        VAR_7.mSampleRate = VAR_5->sample_rate;
        VAR_7.mChannelsPerFrame = VAR_5->channels;
        FUNC_3(VAR_6->converter,
                                  VAR_3,
                                  VAR_8, &VAR_7);
    }

    if (!FUNC_2(VAR_6->converter, VAR_4,
                                       &VAR_8, ((void*)0)) && VAR_8) {
        AudioChannelLayout *VAR_9 = FUNC_6(VAR_8);
        uint64_t VAR_10 = 0;
        int VAR_11;
        if (!VAR_9)
            return FUNC_0(VAR_0);
        FUNC_1(VAR_6->converter, VAR_4,
                                  &VAR_8, VAR_9);
        if (!(VAR_9 = FUNC_7(VAR_9, &VAR_8)))
            return FUNC_0(VAR_0);
        for (VAR_11 = 0; VAR_11 < VAR_9->mNumberChannelDescriptions; VAR_11++) {
            int VAR_12 = FUNC_8(VAR_9->mChannelDescriptions[VAR_11].mChannelLabel);
            if (VAR_12 < 0)
                goto done;
            if (VAR_10 & (1 << VAR_12))
                goto done;
            VAR_10 |= 1 << VAR_12;
            VAR_9->mChannelDescriptions[VAR_11].mChannelFlags = VAR_11;
        }
        VAR_5->channel_layout = VAR_10;
        FUNC_9(VAR_9->mChannelDescriptions, VAR_9->mNumberChannelDescriptions,
              sizeof(AudioChannelDescription), &VAR_1);
        for (VAR_11 = 0; VAR_11 < VAR_9->mNumberChannelDescriptions; VAR_11++)
            VAR_6->channel_map[VAR_11] = VAR_9->mChannelDescriptions[VAR_11].mChannelFlags;
done:
        FUNC_4(VAR_9);
    }

    if (!VAR_5->frame_size)
        VAR_5->frame_size = 2048;

    return 0;
}
