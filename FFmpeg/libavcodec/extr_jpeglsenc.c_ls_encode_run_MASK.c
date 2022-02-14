
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t* run_index; } ;
typedef int PutBitContext ;
typedef TYPE_1__ JLSState ;


 int* VAR_0 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_1(JLSState *VAR_1, PutBitContext *VAR_2, int VAR_3,
                                 int VAR_4, int VAR_5)
{
    while (VAR_3 >= (1 << VAR_0[VAR_1->run_index[VAR_4]])) {
        FUNC_0(VAR_2, 1, 1);
        VAR_3 -= 1 << VAR_0[VAR_1->run_index[VAR_4]];
        if (VAR_1->run_index[VAR_4] < 31)
            VAR_1->run_index[VAR_4]++;
    }

    if (!VAR_5 && VAR_3) {
        FUNC_0(VAR_2, 1, 1);
    } else if (VAR_5) {
        FUNC_0(VAR_2, 1, 0);
        if (VAR_0[VAR_1->run_index[VAR_4]])
            FUNC_0(VAR_2, VAR_0[VAR_1->run_index[VAR_4]], VAR_3);
    }
}
