
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {scalar_t__* bpstart; scalar_t__* bp; } ;
typedef TYPE_1__ MqcState ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;

int FUNC_3(MqcState *VAR_0, uint8_t *VAR_1, int *VAR_2)
{
    MqcState VAR_3 = *VAR_0;
    VAR_3=
    VAR_3 = VAR_1;
    *VAR_3 = *VAR_0->bp;
    FUNC_1(&VAR_3);
    *VAR_2 = VAR_3 - VAR_1;
    if (VAR_0->bp < VAR_0->bpstart) {
        FUNC_0(VAR_0->bpstart - VAR_0->bp == 1);
        FUNC_0(*VAR_2 > 0);
        FUNC_0(VAR_0->bp[0] == 0 && VAR_1[0] == 0);
        (*VAR_2) --;
        FUNC_2(VAR_1, VAR_1+1, *VAR_2);
        return VAR_0->bp - VAR_0->bpstart + 1 + *VAR_2;
    }
    return VAR_0->bp - VAR_0->bpstart + *VAR_2;
}
