
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum BandType { ____Placeholder_BandType } BandType ;
struct TYPE_8__ {int table; } ;
struct TYPE_7__ {int avctx; } ;
struct TYPE_6__ {int num_window_groups; int max_sfb; } ;
typedef TYPE_1__ IndividualChannelStream ;
typedef int INTFLOAT ;
typedef int GetBitContext ;
typedef TYPE_2__ AACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 int* VAR_11 ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int,int) ;
 TYPE_3__ VAR_12 ;

__attribute__((used)) static int FUNC_6(AACContext *VAR_13, INTFLOAT VAR_14[120], GetBitContext *VAR_15,
                               unsigned int VAR_16,
                               IndividualChannelStream *VAR_17,
                               enum BandType VAR_18[120],
                               int VAR_19[120])
{
    int VAR_20, VAR_21, VAR_22 = 0;
    int VAR_23[3] = { VAR_16, VAR_16 - VAR_5, 0 };
    int VAR_24;
    int VAR_25 = 1;
    for (VAR_20 = 0; VAR_20 < VAR_17->num_window_groups; VAR_20++) {
        for (VAR_21 = 0; VAR_21 < VAR_17->max_sfb;) {
            int VAR_26 = VAR_19[VAR_22];
            if (VAR_18[VAR_22] == VAR_10) {
                for (; VAR_21 < VAR_26; VAR_21++, VAR_22++)
                    VAR_14[VAR_22] = FUNC_0(0.);
            } else if ((VAR_18[VAR_22] == VAR_2) ||
                       (VAR_18[VAR_22] == VAR_3)) {
                for (; VAR_21 < VAR_26; VAR_21++, VAR_22++) {
                    VAR_23[2] += FUNC_5(VAR_15, VAR_12.table, 7, 3) - VAR_9;
                    VAR_24 = FUNC_1(VAR_23[2], -155, 100);
                    if (VAR_23[2] != VAR_24) {
                        FUNC_3(VAR_13->avctx,
                                              "If you heard an audible artifact, there may be a bug in the decoder. "
                                              "Clipped intensity stereo position (%d -> %d)",
                                              VAR_23[2], VAR_24);
                    }



                    VAR_14[VAR_22] = VAR_11[-VAR_24 + VAR_8];

                }
            } else if (VAR_18[VAR_22] == VAR_4) {
                for (; VAR_21 < VAR_26; VAR_21++, VAR_22++) {
                    if (VAR_25-- > 0)
                        VAR_23[1] += FUNC_4(VAR_15, VAR_7) - VAR_6;
                    else
                        VAR_23[1] += FUNC_5(VAR_15, VAR_12.table, 7, 3) - VAR_9;
                    VAR_24 = FUNC_1(VAR_23[1], -100, 155);
                    if (VAR_23[1] != VAR_24) {
                        FUNC_3(VAR_13->avctx,
                                              "If you heard an audible artifact, there may be a bug in the decoder. "
                                              "Clipped noise gain (%d -> %d)",
                                              VAR_23[1], VAR_24);
                    }



                    VAR_14[VAR_22] = -VAR_11[VAR_24 + VAR_8];

                }
            } else {
                for (; VAR_21 < VAR_26; VAR_21++, VAR_22++) {
                    VAR_23[0] += FUNC_5(VAR_15, VAR_12.table, 7, 3) - VAR_9;
                    if (VAR_23[0] > 255U) {
                        FUNC_2(VAR_13->avctx, VAR_1,
                               "Scalefactor (%d) out of range.\n", VAR_23[0]);
                        return VAR_0;
                    }



                    VAR_14[VAR_22] = -VAR_11[VAR_23[0] - 100 + VAR_8];

                }
            }
        }
    }
    return 0;
}
