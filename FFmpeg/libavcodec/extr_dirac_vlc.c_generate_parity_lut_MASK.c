
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int preamble; int preamble_bits; int leftover_bits; int need_s; int sign; void* leftover; } ;
typedef TYPE_1__ DiracGolombLUT ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int,int) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_4(DiracGolombLUT *VAR_4, int VAR_5)
{
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        DiracGolombLUT *VAR_7 = &VAR_4[VAR_6];
        int VAR_8 = -1;
        uint32_t VAR_9;
        int VAR_10;

        FUNC_1(VAR_3);
        FUNC_2(VAR_3, VAR_6, VAR_0);

        for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
            const int VAR_11 = VAR_5 ? (VAR_10 & 1) : !(VAR_10 & 1);
            if (((VAR_3 >> (VAR_2 - VAR_10 - 1)) & 1) && VAR_11) {
                VAR_8 = VAR_10 + 2;
                break;
            }
        }

        if (VAR_8 < 0 || VAR_8 > VAR_0) {
            VAR_7->preamble = 0;
            VAR_7->preamble_bits = 0;
            VAR_7->leftover_bits = VAR_0;
            VAR_7->leftover = FUNC_0(VAR_6, VAR_7->leftover_bits);
            if (VAR_5)
                VAR_7->need_s = VAR_6 & 1;
            continue;
        }


        VAR_9 = VAR_6 >> ((VAR_0 - 1) - (VAR_8 - 1));
        VAR_9 &= ((1 << VAR_0) - 1) >> (VAR_0 - VAR_8);
        VAR_7->preamble_bits = VAR_8;
        VAR_7->preamble = FUNC_0(VAR_9, VAR_7->preamble_bits);
        VAR_7->sign = ((VAR_7->preamble >> (VAR_2 - VAR_7->preamble_bits)) & 1) ? -1 : +1;

        FUNC_3(VAR_7, VAR_3 << VAR_8, VAR_0 - VAR_8);
    }
}
