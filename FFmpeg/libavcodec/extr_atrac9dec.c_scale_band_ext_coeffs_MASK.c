
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* coeffs; } ;
typedef TYPE_1__ ATRAC9ChannelData ;


 int* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(ATRAC9ChannelData *VAR_1, float VAR_2[6],
                                         const int VAR_3, const int VAR_4)
{
    for (int VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5++) {
        const int VAR_6 = VAR_0[VAR_5 + 0];
        const int VAR_7 = VAR_0[VAR_5 + 1];
        for (int VAR_8 = VAR_6; VAR_8 < VAR_7; VAR_8++)
            VAR_1->coeffs[VAR_8] *= VAR_2[VAR_5 - VAR_3];
    }
}
