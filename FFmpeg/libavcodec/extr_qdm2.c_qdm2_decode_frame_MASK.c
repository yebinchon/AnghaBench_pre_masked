
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_13__ {TYPE_1__* priv_data; } ;
struct TYPE_12__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_11__ {int size; int * data; } ;
struct TYPE_10__ {int checksum_size; int frame_size; int channels; } ;
typedef TYPE_1__ QDM2Context ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_1__*,int const*,int *) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0, void *VAR_1,
                             int *VAR_2, AVPacket *VAR_3)
{
    AVFrame *VAR_4 = VAR_1;
    const uint8_t *VAR_5 = VAR_3->data;
    int VAR_6 = VAR_3->size;
    QDM2Context *VAR_7 = VAR_0->priv_data;
    int16_t *VAR_8;
    int VAR_9, VAR_10;

    if(!VAR_5)
        return 0;
    if(VAR_6 < VAR_7->checksum_size)
        return -1;


    VAR_4->nb_samples = 16 * VAR_7->frame_size;
    if ((VAR_10 = FUNC_0(VAR_0, VAR_4, 0)) < 0)
        return VAR_10;
    VAR_8 = (int16_t *)VAR_4->data[0];

    for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
        if ((VAR_10 = FUNC_1(VAR_7, VAR_5, VAR_8)) < 0)
            return VAR_10;
        VAR_8 += VAR_7->channels * VAR_7->frame_size;
    }

    *VAR_2 = 1;

    return VAR_7->checksum_size;
}
