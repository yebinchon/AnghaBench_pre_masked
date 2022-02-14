
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int nlsf ;
typedef int lpc ;
typedef size_t int8_t ;
typedef int int16_t ;
struct TYPE_6__ {size_t wb; int subframes; int nlsf_interp_factor; } ;
struct TYPE_5__ {int* nlsf; float* lpc; scalar_t__ coded; } ;
typedef TYPE_1__ SilkFrame ;
typedef TYPE_2__ SilkContext ;
typedef int OpusRangeCoder ;


 int FUNC_0 (int,int) ;
 size_t FUNC_1 (int *,int ) ;
 int** VAR_0 ;
 int** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int** VAR_4 ;
 int** VAR_5 ;
 int** VAR_6 ;
 int** VAR_7 ;
 size_t** VAR_8 ;
 size_t** VAR_9 ;
 int VAR_10 ;
 int ** VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (float*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,float*,int) ;
 int FUNC_5 (int*,int,int ) ;

__attribute__((used)) static inline void FUNC_6(SilkContext *VAR_14, SilkFrame *VAR_15,
                                   OpusRangeCoder *VAR_16,
                                   float VAR_17[16], float VAR_18[16],
                                   int *VAR_19, int *VAR_20, int VAR_21)
{
    int VAR_22;
    int VAR_23;
    int8_t VAR_24, VAR_25[16];
    int16_t VAR_26[16];
    int16_t VAR_27[16];

    *VAR_19 = VAR_23 = VAR_14->wb ? 16 : 10;


    VAR_24 = FUNC_1(VAR_16, VAR_11[VAR_14->wb][VAR_21]);
    for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++) {
        int VAR_28 = VAR_14->wb ? VAR_7 [VAR_24][VAR_22] :
                            VAR_6[VAR_24][VAR_22];
        VAR_25[VAR_22] = FUNC_1(VAR_16, VAR_12[VAR_28]) - 4;
        if (VAR_25[VAR_22] == -4)
            VAR_25[VAR_22] -= FUNC_1(VAR_16, VAR_13);
        else if (VAR_25[VAR_22] == 4)
            VAR_25[VAR_22] += FUNC_1(VAR_16, VAR_13);
    }


    for (VAR_22 = VAR_23 - 1; VAR_22 >= 0; VAR_22--) {
        int VAR_29 = VAR_14->wb ? 9830 : 11796;

        VAR_26[VAR_22] = VAR_25[VAR_22] * 1024;
        if (VAR_25[VAR_22] < 0) VAR_26[VAR_22] += 102;
        else if (VAR_25[VAR_22] > 0) VAR_26[VAR_22] -= 102;
        VAR_26[VAR_22] = (VAR_26[VAR_22] * VAR_29) >> 16;

        if (VAR_22 + 1 < VAR_23) {
            int VAR_30 = VAR_14->wb ? VAR_5 [VAR_9 [VAR_24][VAR_22]][VAR_22] :
                                 VAR_4[VAR_8[VAR_24][VAR_22]][VAR_22];
            VAR_26[VAR_22] += (VAR_26[VAR_22+1] * VAR_30) >> 8;
        }
    }


    for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++) {
        const uint8_t * VAR_31 = VAR_14->wb ? VAR_1 [VAR_24] :
                                           VAR_0[VAR_24];
        int VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;



        VAR_32 = VAR_31[VAR_22];
        VAR_33 = VAR_22 ? VAR_31[VAR_22 - 1] : 0;
        VAR_34 = VAR_22 + 1 < VAR_23 ? VAR_31[VAR_22 + 1] : 256;
        VAR_35 = (1024 / (VAR_32 - VAR_33) + 1024 / (VAR_34 - VAR_32)) << 16;


        VAR_37 = FUNC_3(VAR_35);
        VAR_38 = (VAR_35 >> (VAR_37-8)) & 127;
        VAR_39 = ((VAR_37 & 1) ? 32768 : 46214) >> ((32 - VAR_37)>>1);
        VAR_36 = VAR_39 + ((213 * VAR_38 * VAR_39) >> 16);

        VAR_40 = VAR_32 * 128 + (VAR_26[VAR_22] * 16384) / VAR_36;
        VAR_27[VAR_22] = FUNC_0(VAR_40, 15);
    }


    FUNC_5(VAR_27, VAR_23, VAR_14->wb ? VAR_3 :
                                            VAR_2);



    *VAR_20 = 0;
    if (VAR_14->subframes == 4) {
        int VAR_41 = FUNC_1(VAR_16, VAR_10);
        if (VAR_41 != 4 && VAR_15->coded) {
            *VAR_20 = 1;
            if (VAR_41 != 0) {
                int16_t VAR_42[16];
                for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++)
                    VAR_42[VAR_22] = VAR_15->nlsf[VAR_22] +
                        ((VAR_27[VAR_22] - VAR_15->nlsf[VAR_22]) * VAR_41 >> 2);
                FUNC_4(VAR_42, VAR_17, VAR_23);
            } else
                FUNC_2(VAR_17, VAR_15->lpc, 16 * sizeof(float));
        } else
            VAR_41 = 4;
        VAR_14->nlsf_interp_factor = VAR_41;

        FUNC_4(VAR_27, VAR_18, VAR_23);
    } else {
        VAR_14->nlsf_interp_factor = 4;
        FUNC_4(VAR_27, VAR_18, VAR_23);
    }

    FUNC_2(VAR_15->nlsf, VAR_27, VAR_23 * sizeof(VAR_27[0]));
    FUNC_2(VAR_15->lpc, VAR_18, VAR_23 * sizeof(VAR_18[0]));
}
