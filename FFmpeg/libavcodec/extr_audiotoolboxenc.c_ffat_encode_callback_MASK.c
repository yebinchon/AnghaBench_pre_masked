
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_17__ {int available; } ;
struct TYPE_16__ {int used_frame_queue; int encoding_frame; TYPE_8__ frame_queue; scalar_t__ eof; } ;
struct TYPE_15__ {int channels; int sample_fmt; TYPE_5__* priv_data; } ;
struct TYPE_14__ {int nb_samples; int * data; } ;
struct TYPE_13__ {int mNumberBuffers; TYPE_1__* mBuffers; } ;
struct TYPE_12__ {int mNumberChannels; int mDataByteSize; int mData; } ;
typedef int OSStatus ;
typedef int AudioStreamPacketDescription ;
typedef int AudioConverterRef ;
typedef TYPE_2__ AudioBufferList ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ ATDecodeContext ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int *,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_8__*) ;

__attribute__((used)) static OSStatus FUNC_5(AudioConverterRef VAR_0, UInt32 *VAR_1,
                                     AudioBufferList *VAR_2,
                                     AudioStreamPacketDescription **VAR_3,
                                     void *VAR_4)
{
    AVCodecContext *VAR_5 = VAR_4;
    ATDecodeContext *VAR_6 = VAR_5->priv_data;
    AVFrame *VAR_7;
    int VAR_8;

    if (!VAR_6->frame_queue.available) {
        if (VAR_6->eof) {
            *VAR_1 = 0;
            return 0;
        } else {
            *VAR_1 = 0;
            return 1;
        }
    }

    VAR_7 = FUNC_4(&VAR_6->frame_queue);

    VAR_2->mNumberBuffers = 1;
    VAR_2->mBuffers[0].mNumberChannels = VAR_5->channels;
    VAR_2->mBuffers[0].mDataByteSize = VAR_7->nb_samples *
                                        FUNC_2(VAR_5->sample_fmt) *
                                        VAR_5->channels;
    VAR_2->mBuffers[0].mData = VAR_7->data[0];
    if (*VAR_1 > VAR_7->nb_samples)
        *VAR_1 = VAR_7->nb_samples;

    FUNC_1(VAR_6->encoding_frame);
    VAR_8 = FUNC_0(VAR_6->encoding_frame, VAR_7);
    if (VAR_8 < 0) {
        *VAR_1 = 0;
        return VAR_8;
    }

    FUNC_3(VAR_5, &VAR_6->used_frame_queue, VAR_7);

    return 0;
}
