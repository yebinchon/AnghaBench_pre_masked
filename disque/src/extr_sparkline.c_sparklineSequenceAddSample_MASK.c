
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sequence {int length; double min; double max; int labels; TYPE_1__* samples; } ;
struct sample {int dummy; } ;
struct TYPE_3__ {double value; char* label; } ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(struct sequence *VAR_0, double VAR_1, char *VAR_2) {
    if (VAR_0->length == 0) {
        VAR_0->min = VAR_0->max = VAR_1;
    } else {
        if (VAR_1 < VAR_0->min) VAR_0->min = VAR_1;
        else if (VAR_1 > VAR_0->max) VAR_0->max = VAR_1;
    }
    VAR_0->samples = FUNC_0(VAR_0->samples,sizeof(struct sample)*(VAR_0->length+1));
    VAR_0->samples[VAR_0->length].value = VAR_1;
    VAR_0->samples[VAR_0->length].label = VAR_2;
    VAR_0->length++;
    if (VAR_2) VAR_0->labels++;
}
