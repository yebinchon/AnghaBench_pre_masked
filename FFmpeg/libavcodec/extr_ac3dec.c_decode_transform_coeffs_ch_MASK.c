
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mant_groups ;
struct TYPE_5__ {int* start_freq; int* end_freq; int** fixed_coeffs; int*** pre_mantissa; int** dexps; int * channel_uses_aht; } ;
typedef TYPE_1__ AC3DecodeContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int *) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static inline void FUNC_2(AC3DecodeContext *VAR_1, int VAR_2,
                                              int VAR_3, mant_groups *VAR_4)
{
    if (!VAR_1->channel_uses_aht[VAR_3]) {
        FUNC_0(VAR_1, VAR_3, VAR_4);
    } else {


        int VAR_5;
        if (VAR_0 && !VAR_2)
            FUNC_1(VAR_1, VAR_3);
        for (VAR_5 = VAR_1->start_freq[VAR_3]; VAR_5 < VAR_1->end_freq[VAR_3]; VAR_5++) {
            VAR_1->fixed_coeffs[VAR_3][VAR_5] = VAR_1->pre_mantissa[VAR_3][VAR_5][VAR_2] >> VAR_1->dexps[VAR_3][VAR_5];
        }
    }
}
