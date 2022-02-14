
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int8_t ;
typedef int int16_t ;
struct TYPE_3__ {int step; int predictor; } ;
typedef TYPE_1__ ADPCMChannelStatus ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static inline int16_t FUNC_1(ADPCMChannelStatus *VAR_0, int8_t VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;

    VAR_4 = VAR_1 & (1<<(VAR_2-1));
    VAR_5 = VAR_1 & ((1<<(VAR_2-1))-1);
    VAR_6 = VAR_5 << (7 + VAR_0->step + VAR_3);


    VAR_0->predictor = FUNC_0(VAR_0->predictor + (VAR_4 ? -VAR_6 : VAR_6), -16384,16256);


    if (VAR_5 >= (2*VAR_2 - 3) && VAR_0->step < 3)
        VAR_0->step++;
    else if (VAR_5 == 0 && VAR_0->step > 0)
        VAR_0->step--;

    return (int16_t) VAR_0->predictor;
}
