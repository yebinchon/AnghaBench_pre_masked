
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ b4; scalar_t__ b2; scalar_t__ b1; } ;
typedef TYPE_1__ mant_groups ;
struct TYPE_9__ {int channels; int* end_freq; scalar_t__** fixed_coeffs; scalar_t__* channel_in_cpl; } ;
typedef TYPE_2__ AC3DecodeContext ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,size_t,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_3(AC3DecodeContext *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;
    int VAR_5 = 0;
    mant_groups VAR_6;

    VAR_6.b1 = VAR_6.b2 = VAR_6.b4 = 0;

    for (VAR_3 = 1; VAR_3 <= VAR_1->channels; VAR_3++) {

        FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_6);


        if (VAR_1->channel_in_cpl[VAR_3]) {
            if (!VAR_5) {
                FUNC_1(VAR_1, VAR_2, VAR_0, &VAR_6);
                FUNC_0(VAR_1);
                VAR_5 = 1;
            }
            VAR_4 = VAR_1->end_freq[VAR_0];
        } else {
            VAR_4 = VAR_1->end_freq[VAR_3];
        }
        do
            VAR_1->fixed_coeffs[VAR_3][VAR_4] = 0;
        while (++VAR_4 < 256);
    }


    FUNC_2(VAR_1);
}
