
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double uint16_t ;
typedef enum Mode { ____Placeholder_Mode } Mode ;
struct TYPE_8__ {TYPE_1__* subframe; } ;
struct TYPE_10__ {double* pitch_gain; TYPE_2__ frame; } ;
struct TYPE_9__ {size_t p_gain; size_t fixed_gain; } ;
struct TYPE_7__ {int p_gain; } ;
typedef TYPE_3__ AMRNBSubframe ;
typedef TYPE_4__ AMRContext ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 double** VAR_4 ;
 double** VAR_5 ;
 double** VAR_6 ;
 double* VAR_7 ;
 double* VAR_8 ;

__attribute__((used)) static void FUNC_0(AMRContext *VAR_9, const AMRNBSubframe *VAR_10,
                         const enum Mode VAR_11, const int VAR_12,
                         float *VAR_13)
{
    if (VAR_11 == VAR_0 || VAR_11 == VAR_3) {
        VAR_9->pitch_gain[4] = VAR_8 [VAR_10->p_gain ]
            * (1.0 / 16384.0);
        *VAR_13 = VAR_7[VAR_10->fixed_gain]
            * (1.0 / 2048.0);
    } else {
        const uint16_t *VAR_14;

        if (VAR_11 >= VAR_2) {
            VAR_14 = VAR_5[VAR_10->p_gain];
        } else if (VAR_11 >= VAR_1) {
            VAR_14 = VAR_6 [VAR_10->p_gain];
        } else {

            VAR_14 = VAR_4[(VAR_9->frame.subframe[VAR_12 & 2].p_gain << 1) + (VAR_12 & 1)];
        }

        VAR_9->pitch_gain[4] = VAR_14[0] * (1.0 / 16384.0);
        *VAR_13 = VAR_14[1] * (1.0 / 4096.0);
    }
}
