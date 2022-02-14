
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * predictor_state; } ;
typedef TYPE_1__ SingleChannelElement ;
typedef int PredictorState ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(SingleChannelElement *VAR_1, int VAR_2)
{
    int VAR_3;
    PredictorState *VAR_4 = VAR_1->predictor_state;
    for (VAR_3 = VAR_2 - 1; VAR_3 < VAR_0; VAR_3 += 30)
        FUNC_0(&VAR_4[VAR_3]);
}
