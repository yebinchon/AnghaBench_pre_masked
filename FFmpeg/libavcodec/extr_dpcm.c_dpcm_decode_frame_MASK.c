
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int int8_t ;
typedef int int16_t ;
struct TYPE_15__ {int channels; int codec_tag; TYPE_1__* codec; TYPE_2__* priv_data; } ;
struct TYPE_14__ {int nb_samples; size_t** data; } ;
struct TYPE_13__ {int size; int data; } ;
struct TYPE_12__ {int* array; int* sample; int* sol_table; } ;
struct TYPE_11__ {int id; } ;
typedef int GetByteContext ;
typedef TYPE_2__ DPCMContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int ,char*) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__*,int ) ;
 int* VAR_3 ;
 int FUNC_9 (int,int) ;
 int* VAR_4 ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_5, void *VAR_6,
                             int *VAR_7, AVPacket *VAR_8)
{
    int VAR_9 = VAR_8->size;
    DPCMContext *VAR_10 = VAR_5->priv_data;
    AVFrame *VAR_11 = VAR_6;
    int VAR_12 = 0, VAR_13;
    int VAR_14[2];
    int VAR_15 = 0;
    int VAR_16 = VAR_5->channels - 1;
    int16_t *VAR_17, *VAR_18;
    GetByteContext VAR_19;

    if (VAR_16 && (VAR_9 & 1))
        VAR_9--;
    FUNC_6(&VAR_19, VAR_8->data, VAR_9);


    switch(VAR_5->codec->id) {
    case 131:
        VAR_12 = VAR_9 - 8;
        break;
    case 132:
        VAR_12 = VAR_9 - 6 - VAR_5->channels;
        break;
    case 128:
        VAR_12 = VAR_9 - 2 * VAR_5->channels;
        break;
    case 129:
        if (VAR_5->codec_tag != 3)
            VAR_12 = VAR_9 * 2;
        else
            VAR_12 = VAR_9;
        break;
    case 133:
    case 130:
        VAR_12 = VAR_9;
        break;
    }
    if (VAR_12 <= 0) {
        FUNC_3(VAR_5, VAR_0, "packet is too small\n");
        return FUNC_0(VAR_2);
    }
    if (VAR_12 % VAR_5->channels) {
        FUNC_3(VAR_5, VAR_1, "channels have differing number of samples\n");
    }


    VAR_11->nb_samples = (VAR_12 + VAR_5->channels - 1) / VAR_5->channels;
    if ((VAR_13 = FUNC_8(VAR_5, VAR_11, 0)) < 0)
        return VAR_13;
    VAR_17 = (int16_t *)VAR_11->data[0];
    VAR_18 = VAR_17 + VAR_12;

    switch(VAR_5->codec->id) {

    case 131:
        FUNC_7(&VAR_19, 6);

        if (VAR_16) {
            VAR_14[1] = FUNC_9(FUNC_4(&VAR_19) << 8, 16);
            VAR_14[0] = FUNC_9(FUNC_4(&VAR_19) << 8, 16);
        } else {
            VAR_14[0] = FUNC_9(FUNC_5(&VAR_19), 16);
        }


        while (VAR_17 < VAR_18) {
            VAR_14[VAR_15] += VAR_10->array[FUNC_4(&VAR_19)];
            VAR_14[VAR_15] = FUNC_1(VAR_14[VAR_15]);
            *VAR_17++ = VAR_14[VAR_15];


            VAR_15 ^= VAR_16;
        }
        break;

    case 132:
        FUNC_7(&VAR_19, 6);

        for (VAR_15 = 0; VAR_15 < VAR_5->channels; VAR_15++) {
            VAR_14[VAR_15] = FUNC_9(FUNC_5(&VAR_19), 16);
            *VAR_17++ = VAR_14[VAR_15];
        }

        VAR_15 = 0;
        while (VAR_17 < VAR_18) {
            VAR_14[VAR_15] += VAR_3[FUNC_4(&VAR_19)];
            VAR_14[VAR_15] = FUNC_1(VAR_14[VAR_15]);
            *VAR_17++ = VAR_14[VAR_15];


            VAR_15 ^= VAR_16;
        }
        break;

    case 128:
    {
        int VAR_20[2] = { 4, 4 };

        for (VAR_15 = 0; VAR_15 < VAR_5->channels; VAR_15++)
            VAR_14[VAR_15] = FUNC_9(FUNC_5(&VAR_19), 16);

        VAR_15 = 0;
        while (VAR_17 < VAR_18) {
            int VAR_21 = FUNC_4(&VAR_19);
            int VAR_22 = VAR_21 & 3;

            if (VAR_22 == 3)
                VAR_20[VAR_15]++;
            else
                VAR_20[VAR_15] -= (2 * VAR_22);
            VAR_21 = FUNC_9((VAR_21 &~ 3) << 8, 16);


            if (VAR_20[VAR_15] < 0)
                VAR_20[VAR_15] = 0;

            VAR_21 >>= VAR_20[VAR_15];
            VAR_14[VAR_15] += VAR_21;

            VAR_14[VAR_15] = FUNC_1(VAR_14[VAR_15]);
            *VAR_17++ = VAR_14[VAR_15];


            VAR_15 ^= VAR_16;
        }
        break;
    }
    case 129:
        if (VAR_5->codec_tag != 3) {
            uint8_t *VAR_23 = VAR_11->data[0],
                    *VAR_24 = VAR_23 + VAR_12;
            while (VAR_23 < VAR_24) {
                int VAR_25 = FUNC_4(&VAR_19);

                VAR_10->sample[0] += VAR_10->sol_table[VAR_25 >> 4];
                VAR_10->sample[0] = FUNC_2(VAR_10->sample[0]);
                *VAR_23++ = VAR_10->sample[0];

                VAR_10->sample[VAR_16] += VAR_10->sol_table[VAR_25 & 0x0F];
                VAR_10->sample[VAR_16] = FUNC_2(VAR_10->sample[VAR_16]);
                *VAR_23++ = VAR_10->sample[VAR_16];
            }
        } else {
            while (VAR_17 < VAR_18) {
                int VAR_26 = FUNC_4(&VAR_19);
                if (VAR_26 & 0x80) VAR_10->sample[VAR_15] -= VAR_4[VAR_26 & 0x7F];
                else VAR_10->sample[VAR_15] += VAR_4[VAR_26 & 0x7F];
                VAR_10->sample[VAR_15] = FUNC_1(VAR_10->sample[VAR_15]);
                *VAR_17++ = VAR_10->sample[VAR_15];

                VAR_15 ^= VAR_16;
            }
        }
        break;

    case 130:
        while (VAR_17 < VAR_18) {
            int8_t VAR_27 = FUNC_4(&VAR_19);

            if (!(VAR_27 & 1))
                VAR_10->sample[VAR_15] = 0;
            VAR_10->sample[VAR_15] += VAR_10->array[VAR_27 + 128];
            VAR_10->sample[VAR_15] = FUNC_1(VAR_10->sample[VAR_15]);
            *VAR_17++ = VAR_10->sample[VAR_15];
            VAR_15 ^= VAR_16;
        }
        break;

    case 133: {
        int VAR_28 = 0;

        while (VAR_17 < VAR_18) {
            uint8_t VAR_29 = FUNC_4(&VAR_19);

            *VAR_17++ = VAR_10->sample[VAR_28] += VAR_10->array[VAR_29];
            VAR_28 ^= 1;
        }
        }
        break;
    }

    *VAR_7 = 1;

    return VAR_8->size;
}
