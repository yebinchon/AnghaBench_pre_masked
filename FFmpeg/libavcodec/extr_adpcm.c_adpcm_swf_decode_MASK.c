
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int8_t ;
typedef int int16_t ;
struct TYPE_7__ {TYPE_1__* status; } ;
struct TYPE_6__ {int channels; TYPE_3__* priv_data; } ;
struct TYPE_5__ {int predictor; int step_index; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AVCodecContext ;
typedef TYPE_3__ ADPCMDecodeContext ;


 size_t FUNC_0 (size_t,int ,int) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int const*,int) ;
 scalar_t__** VAR_1 ;

__attribute__((used)) static void FUNC_6(AVCodecContext *VAR_2, const uint8_t *VAR_3, int VAR_4, int16_t *VAR_5)
{
    ADPCMDecodeContext *VAR_6 = VAR_2->priv_data;
    GetBitContext VAR_7;
    const int8_t *VAR_8;
    int VAR_9, VAR_10, VAR_11, VAR_12;
    int VAR_13 = VAR_4*8;
    int VAR_14;

    FUNC_5(&VAR_7, VAR_3, VAR_13);


    VAR_11 = FUNC_2(&VAR_7, 2)+2;
    VAR_8 = VAR_1[VAR_11-2];
    VAR_9 = 1 << (VAR_11-2);
    VAR_10 = 1 << (VAR_11-1);

    while (FUNC_3(&VAR_7) <= VAR_13 - 22*VAR_2->channels) {
        for (VAR_14 = 0; VAR_14 < VAR_2->channels; VAR_14++) {
            *VAR_5++ = VAR_6->status[VAR_14].predictor = FUNC_4(&VAR_7, 16);
            VAR_6->status[VAR_14].step_index = FUNC_2(&VAR_7, 6);
        }

        for (VAR_12 = 0; FUNC_3(&VAR_7) <= VAR_13 - VAR_11*VAR_2->channels && VAR_12 < 4095; VAR_12++) {
            int VAR_15;

            for (VAR_15 = 0; VAR_15 < VAR_2->channels; VAR_15++) {

                int VAR_16 = FUNC_2(&VAR_7, VAR_11);
                int VAR_17 = VAR_0[VAR_6->status[VAR_15].step_index];
                int VAR_18 = 0;
                int VAR_19 = VAR_9;

                do {
                    if (VAR_16 & VAR_19)
                        VAR_18 += VAR_17;
                    VAR_17 >>= 1;
                    VAR_19 >>= 1;
                } while(VAR_19);
                VAR_18 += VAR_17;

                if (VAR_16 & VAR_10)
                    VAR_6->status[VAR_15].predictor -= VAR_18;
                else
                    VAR_6->status[VAR_15].predictor += VAR_18;

                VAR_6->status[VAR_15].step_index += VAR_8[VAR_16 & (~VAR_10)];

                VAR_6->status[VAR_15].step_index = FUNC_0(VAR_6->status[VAR_15].step_index, 0, 88);
                VAR_6->status[VAR_15].predictor = FUNC_1(VAR_6->status[VAR_15].predictor);

                *VAR_5++ = VAR_6->status[VAR_15].predictor;
            }
        }
    }
}
