
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double* channel_values; scalar_t__ nb_in_channels; } ;
typedef TYPE_1__ EvalContext ;


 size_t FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static double FUNC_1(void *VAR_0, double VAR_1)
{
    EvalContext *VAR_2 = VAR_0;
    return VAR_2->channel_values[FUNC_0((int)VAR_1, VAR_2->nb_in_channels-1)];
}
