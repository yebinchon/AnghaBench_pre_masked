
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_12__ {TYPE_1__* priv_data; } ;
struct TYPE_11__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_10__ {int size; int * data; } ;
struct TYPE_9__ {int initial_decode_frame; int delta; } ;
typedef TYPE_1__ CinAudioContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;
 scalar_t__* VAR_0 ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_1, void *VAR_2,
                                 int *VAR_3, AVPacket *VAR_4)
{
    AVFrame *VAR_5 = VAR_2;
    const uint8_t *VAR_6 = VAR_4->data;
    CinAudioContext *VAR_7 = VAR_1->priv_data;
    const uint8_t *VAR_8 = VAR_6 + VAR_4->size;
    int16_t *VAR_9;
    int VAR_10, VAR_11;


    VAR_5->nb_samples = VAR_4->size - VAR_7->initial_decode_frame;
    if ((VAR_11 = FUNC_2(VAR_1, VAR_5, 0)) < 0)
        return VAR_11;
    VAR_9 = (int16_t *)VAR_5->data[0];

    VAR_10 = VAR_7->delta;
    if (VAR_7->initial_decode_frame) {
        VAR_7->initial_decode_frame = 0;
        VAR_10 = FUNC_3(FUNC_0(VAR_6), 16);
        VAR_6 += 2;
        *VAR_9++ = VAR_10;
    }
    while (VAR_6 < VAR_8) {
        VAR_10 += VAR_0[*VAR_6++];
        VAR_10 = FUNC_1(VAR_10);
        *VAR_9++ = VAR_10;
    }
    VAR_7->delta = VAR_10;

    *VAR_3 = 1;

    return VAR_4->size;
}
