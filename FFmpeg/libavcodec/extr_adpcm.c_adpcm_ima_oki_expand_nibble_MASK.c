
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {size_t step_index; int predictor; } ;
typedef TYPE_1__ ADPCMChannelStatus ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static inline int16_t FUNC_2(ADPCMChannelStatus *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    VAR_9 = VAR_1[VAR_2->step_index];
    VAR_4 = VAR_2->step_index + VAR_0[(unsigned)VAR_3];
    VAR_4 = FUNC_0(VAR_4, 0, 48);

    VAR_6 = VAR_3 & 8;
    VAR_7 = VAR_3 & 7;
    VAR_8 = ((2 * VAR_7 + 1) * VAR_9) >> 3;
    VAR_5 = VAR_2->predictor;
    if (VAR_6) VAR_5 -= VAR_8;
    else VAR_5 += VAR_8;

    VAR_2->predictor = FUNC_1(VAR_5, 11);
    VAR_2->step_index = VAR_4;

    return VAR_2->predictor * 16;
}
