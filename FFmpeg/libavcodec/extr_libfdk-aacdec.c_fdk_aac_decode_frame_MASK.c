
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_14__ {int frame_size; int channels; int sample_fmt; TYPE_1__* priv_data; } ;
struct TYPE_13__ {int nb_samples; int * extended_data; } ;
struct TYPE_12__ {int size; int data; } ;
struct TYPE_11__ {int decoder_buffer_size; scalar_t__ decoder_buffer; int handle; } ;
typedef int INT_PCM ;
typedef TYPE_1__ FDKAACDecContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;
typedef scalar_t__ AAC_DECODER_ERROR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *,int,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,char*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_5, void *VAR_6,
                                int *VAR_7, AVPacket *VAR_8)
{
    FDKAACDecContext *VAR_9 = VAR_5->priv_data;
    AVFrame *VAR_10 = VAR_6;
    int VAR_11;
    AAC_DECODER_ERROR VAR_12;
    UINT VAR_13 = VAR_8->size;

    VAR_12 = FUNC_1(VAR_9->handle, &VAR_8->data, &VAR_8->size, &VAR_13);
    if (VAR_12 != VAR_1) {
        FUNC_3(VAR_5, VAR_4, "aacDecoder_Fill() failed: %x\n", VAR_12);
        return VAR_2;
    }

    VAR_12 = FUNC_0(VAR_9->handle, (INT_PCM *) VAR_9->decoder_buffer, VAR_9->decoder_buffer_size / sizeof(INT_PCM), 0);
    if (VAR_12 == VAR_0) {
        VAR_11 = VAR_8->size - VAR_13;
        goto end;
    }
    if (VAR_12 != VAR_1) {
        FUNC_3(VAR_5, VAR_4,
               "aacDecoder_DecodeFrame() failed: %x\n", VAR_12);
        VAR_11 = VAR_3;
        goto end;
    }

    if ((VAR_11 = FUNC_5(VAR_5)) < 0)
        goto end;
    VAR_10->nb_samples = VAR_5->frame_size;

    if ((VAR_11 = FUNC_4(VAR_5, VAR_10, 0)) < 0)
        goto end;

    FUNC_6(VAR_10->extended_data[0], VAR_9->decoder_buffer,
           VAR_5->channels * VAR_5->frame_size *
           FUNC_2(VAR_5->sample_fmt));

    *VAR_7 = 1;
    VAR_11 = VAR_8->size - VAR_13;

end:
    return VAR_11;
}
