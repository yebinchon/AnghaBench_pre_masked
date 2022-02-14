
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
struct TYPE_10__ {int* data; scalar_t__ size; } ;
struct TYPE_9__ {scalar_t__ block_size; size_t* shuffle; scalar_t__ is_pal; scalar_t__ is_12bit; } ;
typedef TYPE_1__ DVAudioContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 void* FUNC_0 (int const*) ;
 void* FUNC_1 (int const) ;
 int FUNC_2 (int*,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_1, void *VAR_2,
                        int *VAR_3, AVPacket *VAR_4)
{
    DVAudioContext *VAR_5 = VAR_1->priv_data;
    AVFrame *VAR_6 = VAR_2;
    const uint8_t *VAR_7 = VAR_4->data;
    int16_t *VAR_8;
    int VAR_9, VAR_10;

    if (VAR_4->size < VAR_5->block_size)
        return VAR_0;

    VAR_6->nb_samples = FUNC_2(VAR_4->data + 244, VAR_5->is_pal);
    if ((VAR_9 = FUNC_3(VAR_1, VAR_6, 0)) < 0)
        return VAR_9;
    VAR_8 = (int16_t *)VAR_6->data[0];

    for (VAR_10 = 0; VAR_10 < VAR_6->nb_samples; VAR_10++) {
       const uint8_t *VAR_11 = &VAR_7[VAR_5->shuffle[VAR_10]];

       if (VAR_5->is_12bit) {
           *VAR_8++ = FUNC_1((VAR_11[0] << 4) | ((VAR_11[2] >> 4) & 0x0f));
           *VAR_8++ = FUNC_1((VAR_11[1] << 4) | ((VAR_11[2] >> 0) & 0x0f));
       } else {
           *VAR_8++ = FUNC_0(&VAR_11[0]);
           *VAR_8++ = FUNC_0(&VAR_11[VAR_5->is_pal ? 4320 : 3600]);
       }
    }

    *VAR_3 = 1;

    return VAR_5->block_size;
}
