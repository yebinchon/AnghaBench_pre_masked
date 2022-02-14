
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int8_t ;
typedef int int16_t ;
struct TYPE_6__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_5__ {int* data; int size; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*,int,int) ;
 int* VAR_2 ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_3, void *VAR_4,
                                int *VAR_5, AVPacket *VAR_6)
{
    AVFrame *VAR_7 = VAR_4;
    const uint8_t *VAR_8 = VAR_6->data;
    int VAR_9 = VAR_6->size;
    int VAR_10 = 0, VAR_11, VAR_12;
    int VAR_13;
    int16_t *VAR_14;
    int VAR_15[2];

    VAR_11 = *VAR_8++;
    if (VAR_9 < VAR_11 * 65 + 1) {
        FUNC_1(VAR_3, VAR_1, "expected %d bytes, got %d\n",
               VAR_11 * 65 + 1, VAR_9);
        return VAR_0;
    }


    VAR_7->nb_samples = VAR_11 * 32;
    if ((VAR_13 = FUNC_2(VAR_3, VAR_7, 0)) < 0)
        return VAR_13;
    VAR_14 = (int16_t *)VAR_7->data[0];

    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
        uint8_t VAR_16 = *VAR_8++;
        VAR_16 = (VAR_16 >> 1) | (VAR_16 << 7);
        VAR_15[0] = VAR_2[VAR_16 & 0xF];
        VAR_15[1] = VAR_2[VAR_16 >> 4];
        for (VAR_12 = 0; VAR_12 < 32; VAR_12++) {
            *VAR_14++ = FUNC_0((VAR_15[0] * (int8_t)*VAR_8++) >> 5);
            *VAR_14++ = FUNC_0((VAR_15[1] * (int8_t)*VAR_8++) >> 5);
        }
    }

    *VAR_5 = 1;

    return VAR_9;
}
