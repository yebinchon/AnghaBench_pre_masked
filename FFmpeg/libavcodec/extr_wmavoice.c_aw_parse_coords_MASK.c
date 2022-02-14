
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int aw_idx_is_ext; int aw_pulse_range; int* aw_n_pulses; int* aw_first_pulse_off; } ;
typedef TYPE_1__ WMAVoiceContext ;
typedef int GetBitContext ;


 int FUNC_0 (int const,int const) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(WMAVoiceContext *VAR_1, GetBitContext *VAR_2,
                            const int *VAR_3)
{
    static const int16_t VAR_4[94] = {
        -11, -9, -7, -5, -3, -1, 1, 3, 5, 7, 9, 11,
         13, 15, 18, 17, 19, 20, 21, 22, 23, 24, 25, 26,
         27, 28, 29, 30, 31, 32, 33, 35, 37, 39, 41, 43,
         45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67,
         69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91,
         93, 95, 97, 99, 101, 103, 105, 107, 109, 111, 113, 115,
        117, 119, 121, 123, 125, 127, 129, 131, 133, 135, 137, 139,
        141, 143, 145, 147, 149, 151, 153, 155, 157, 159
    };
    int VAR_5, VAR_6;


    VAR_1->aw_idx_is_ext = 0;
    if ((VAR_5 = FUNC_1(VAR_2, 6)) >= 54) {
        VAR_1->aw_idx_is_ext = 1;
        VAR_5 += (VAR_5 - 54) * 3 + FUNC_1(VAR_2, 2);
    }



    VAR_1->aw_pulse_range = FUNC_0(VAR_3[0], VAR_3[1]) > 32 ? 24 : 16;
    for (VAR_6 = VAR_4[VAR_5]; VAR_6 < 0; VAR_6 += VAR_3[0]) ;
    VAR_1->aw_n_pulses[0] = (VAR_3[0] - 1 + VAR_0 / 2 - VAR_6) / VAR_3[0];
    VAR_1->aw_first_pulse_off[0] = VAR_6 - VAR_1->aw_pulse_range / 2;
    VAR_6 += VAR_1->aw_n_pulses[0] * VAR_3[0];
    VAR_1->aw_n_pulses[1] = (VAR_3[1] - 1 + VAR_0 - VAR_6) / VAR_3[1];
    VAR_1->aw_first_pulse_off[1] = VAR_6 - (VAR_0 + VAR_1->aw_pulse_range) / 2;




    if (VAR_4[VAR_5] < VAR_0 / 2) {
        while (VAR_1->aw_first_pulse_off[1] - VAR_3[1] + VAR_1->aw_pulse_range > 0)
            VAR_1->aw_first_pulse_off[1] -= VAR_3[1];
        if (VAR_4[VAR_5] < 0)
            while (VAR_1->aw_first_pulse_off[0] - VAR_3[0] + VAR_1->aw_pulse_range > 0)
                VAR_1->aw_first_pulse_off[0] -= VAR_3[0];
    }
}
