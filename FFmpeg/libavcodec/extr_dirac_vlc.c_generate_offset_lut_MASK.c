
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int preamble_bits; int preamble; int sign; } ;
typedef TYPE_1__ DiracGolombLUT ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(DiracGolombLUT *VAR_4, int VAR_5)
{
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        DiracGolombLUT *VAR_7 = &VAR_4[VAR_6];

        FUNC_1(VAR_3);
        FUNC_2(VAR_3, VAR_6, VAR_0);

        VAR_7->preamble_bits = VAR_5;
        if (VAR_5) {
            VAR_7->preamble = FUNC_0(VAR_3 >> (VAR_2 - VAR_5), VAR_5);
            VAR_7->sign = ((VAR_7->preamble >> (VAR_2 - VAR_7->preamble_bits)) & 1) ? -1 : +1;
        } else {
            VAR_7->preamble = 0;
            VAR_7->sign = 1;
        }

        FUNC_3(VAR_7, VAR_3 << VAR_5, VAR_0 - VAR_5);
    }
}
