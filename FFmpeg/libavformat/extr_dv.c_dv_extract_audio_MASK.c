
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int* audio_min_samples; int difseg_size; int height; int n_difchan; int** audio_shuffle; int audio_stride; } ;
typedef TYPE_1__ AVDVProfile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_4 (int const*,int ) ;

__attribute__((used)) static int FUNC_5(const uint8_t *VAR_4, uint8_t **VAR_5,
                            const AVDVProfile *VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    uint16_t VAR_17, VAR_18;
    const uint8_t *VAR_19;
    uint8_t *VAR_20, VAR_21;

    VAR_19 = FUNC_4(VAR_4, VAR_3);
    if (!VAR_19)
        return 0;

    VAR_13 = VAR_19[1] & 0x3f;
    VAR_14 = VAR_19[4] >> 3 & 0x07;
    VAR_15 = VAR_19[4] & 0x07;

    if (VAR_15 > 1)
        return -1;

    if (VAR_14 >= FUNC_0(VAR_2))
        return VAR_0;

    VAR_7 = (VAR_6->audio_min_samples[VAR_14] + VAR_13) * 4;
    VAR_16 = VAR_6->difseg_size / 2;



    VAR_21 = (VAR_6->height == 720 && !(VAR_4[1] & 0x0C)) ? 2 : 0;

    if (VAR_21 + VAR_6->n_difchan > (VAR_15 == 1 ? 2 : 4)) {
        FUNC_2(((void*)0), VAR_1, "too many dv pcm frames\n");
        return VAR_0;
    }


    for (VAR_8 = 0; VAR_8 < VAR_6->n_difchan; VAR_8++) {
        FUNC_1(VAR_21<4);
        VAR_20 = VAR_5[VAR_21++];
        if (!VAR_20)
            break;


        for (VAR_9 = 0; VAR_9 < VAR_6->difseg_size; VAR_9++) {
            VAR_4 += 6 * 80;
            if (VAR_15 == 1 && VAR_9 == VAR_16) {

                FUNC_1(VAR_21<4);
                VAR_20 = VAR_5[VAR_21++];
                if (!VAR_20)
                    break;
            }


            for (VAR_10 = 0; VAR_10 < 9; VAR_10++) {
                for (VAR_11 = 8; VAR_11 < 80; VAR_11 += 2) {
                    if (VAR_15 == 0) {
                        VAR_12 = VAR_6->audio_shuffle[VAR_9][VAR_10] +
                             (VAR_11 - 8) / 2 * VAR_6->audio_stride;
                        if (VAR_12 * 2 >= VAR_7)
                            continue;



                        VAR_20[VAR_12 * 2] = VAR_4[VAR_11 + 1];
                        VAR_20[VAR_12 * 2 + 1] = VAR_4[VAR_11];

                        if (VAR_20[VAR_12 * 2 + 1] == 0x80 && VAR_20[VAR_12 * 2] == 0x00)
                            VAR_20[VAR_12 * 2 + 1] = 0;
                    } else {
                        VAR_17 = ((uint16_t)VAR_4[VAR_11] << 4) |
                             ((uint16_t)VAR_4[VAR_11 + 2] >> 4);
                        VAR_18 = ((uint16_t)VAR_4[VAR_11 + 1] << 4) |
                             ((uint16_t)VAR_4[VAR_11 + 2] & 0x0f);
                        VAR_17 = (VAR_17 == 0x800 ? 0 : FUNC_3(VAR_17));
                        VAR_18 = (VAR_18 == 0x800 ? 0 : FUNC_3(VAR_18));

                        VAR_12 = VAR_6->audio_shuffle[VAR_9 % VAR_16][VAR_10] +
                             (VAR_11 - 8) / 3 * VAR_6->audio_stride;
                        if (VAR_12 * 2 >= VAR_7)
                            continue;



                        VAR_20[VAR_12 * 2] = VAR_17 & 0xff;
                        VAR_20[VAR_12 * 2 + 1] = VAR_17 >> 8;
                        VAR_12 = VAR_6->audio_shuffle[VAR_9 % VAR_16 + VAR_16][VAR_10] +
                             (VAR_11 - 8) / 3 * VAR_6->audio_stride;


                        VAR_20[VAR_12 * 2] = VAR_18 & 0xff;
                        VAR_20[VAR_12 * 2 + 1] = VAR_18 >> 8;
                        ++VAR_11;
                    }
                }

                VAR_4 += 16 * 80;
            }
        }
    }

    return VAR_7;
}
