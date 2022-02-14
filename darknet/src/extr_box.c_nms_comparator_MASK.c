
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t sort_class; float* prob; float objectness; } ;
typedef TYPE_1__ detection ;



int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    detection VAR_2 = *(detection *)VAR_0;
    detection VAR_3 = *(detection *)VAR_1;
    float VAR_4 = 0;
    if(VAR_3.sort_class >= 0){
        VAR_4 = VAR_2.prob[VAR_3.sort_class] - VAR_3.prob[VAR_3.sort_class];
    } else {
        VAR_4 = VAR_2.objectness - VAR_3.objectness;
    }
    if(VAR_4 < 0) return 1;
    else if(VAR_4 > 0) return -1;
    return 0;
}
