
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int8_t ;
typedef int int16_t ;
struct TYPE_3__ {size_t step_index; int predictor; } ;
typedef TYPE_1__ ADPCMChannelStatus ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static inline int16_t FUNC_2(ADPCMChannelStatus *VAR_2, int8_t VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6;
    int VAR_7, VAR_8, VAR_9, VAR_10;

    VAR_10 = VAR_1[VAR_2->step_index];
    VAR_5 = VAR_2->step_index + VAR_0[(unsigned)VAR_3];
    VAR_5 = FUNC_0(VAR_5, 0, 88);

    VAR_7 = VAR_3 & 8;
    VAR_8 = VAR_3 & 7;



    VAR_9 = ((2 * VAR_8 + 1) * VAR_10) >> VAR_4;
    VAR_6 = VAR_2->predictor;
    if (VAR_7) VAR_6 -= VAR_9;
    else VAR_6 += VAR_9;

    VAR_2->predictor = FUNC_1(VAR_6);
    VAR_2->step_index = VAR_5;

    return (int16_t)VAR_2->predictor;
}
