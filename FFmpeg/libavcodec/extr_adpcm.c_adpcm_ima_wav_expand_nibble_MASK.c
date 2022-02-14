
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {size_t step_index; int predictor; } ;
typedef int GetBitContext ;
typedef TYPE_1__ ADPCMChannelStatus ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int** VAR_0 ;
 int* VAR_1 ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static inline int16_t FUNC_4(ADPCMChannelStatus *VAR_2, GetBitContext *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_12 = VAR_4 - 1;
    VAR_5 = FUNC_3(VAR_3, VAR_4),
    VAR_11 = VAR_1[VAR_2->step_index];
    VAR_6 = VAR_2->step_index + VAR_0[VAR_4 - 2][VAR_5];
    VAR_6 = FUNC_0(VAR_6, 0, 88);

    VAR_8 = VAR_5 & (1 << VAR_12);
    VAR_9 = FUNC_2(VAR_5, VAR_12);
    VAR_10 = ((2 * VAR_9 + 1) * VAR_11) >> VAR_12;
    VAR_7 = VAR_2->predictor;
    if (VAR_8) VAR_7 -= VAR_10;
    else VAR_7 += VAR_10;

    VAR_2->predictor = FUNC_1(VAR_7);
    VAR_2->step_index = VAR_6;

    return (int16_t)VAR_2->predictor;
}
