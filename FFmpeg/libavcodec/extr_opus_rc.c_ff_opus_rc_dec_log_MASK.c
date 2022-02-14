
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int range; int value; } ;
typedef TYPE_1__ OpusRangeCoder ;


 int FUNC_0 (TYPE_1__*) ;

uint32_t FUNC_1(OpusRangeCoder *VAR_0, uint32_t VAR_1)
{
    uint32_t VAR_2, VAR_3;
    VAR_3 = VAR_0->range >> VAR_1;

    if (VAR_0->value >= VAR_3) {
        VAR_0->value -= VAR_3;
        VAR_0->range -= VAR_3;
        VAR_2 = 0;
    } else {
        VAR_0->range = VAR_3;
        VAR_2 = 1;
    }
    FUNC_0(VAR_0);
    return VAR_2;
}
