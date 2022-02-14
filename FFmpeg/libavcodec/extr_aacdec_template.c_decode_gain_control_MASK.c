
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {int* window_sequence; } ;
struct TYPE_5__ {TYPE_1__ ics; } ;
typedef TYPE_2__ SingleChannelElement ;
typedef int GetBitContext ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(SingleChannelElement * VAR_0, GetBitContext * VAR_1)
{

    static const uint8_t VAR_2[4][3] = {
        {1, 0, 5},
        {2, 1, 2},
        {8, 0, 2},
        {2, 1, 5},
    };

    const int VAR_3 = VAR_0->ics.window_sequence[0];
    uint8_t VAR_4, VAR_5, VAR_6;


    uint8_t VAR_7 = FUNC_0(VAR_1, 2);
    for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
        for (VAR_5 = 0; VAR_5 < VAR_2[VAR_3][0]; VAR_5++) {
            uint8_t VAR_8 = FUNC_0(VAR_1, 3);
            for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
                FUNC_1(VAR_1, 4 + ((VAR_5 == 0 && VAR_2[VAR_3][1])
                                     ? 4
                                     : VAR_2[VAR_3][2]));
            }
        }
    }
}
