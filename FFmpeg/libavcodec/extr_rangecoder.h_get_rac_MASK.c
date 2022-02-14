
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int range; int low; int* zero_state; int* one_state; } ;
typedef TYPE_1__ RangeCoder ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline int FUNC_1(RangeCoder *VAR_0, uint8_t *const VAR_1)
{
    int VAR_2 = (VAR_0->range * (*VAR_1)) >> 8;

    VAR_0->range -= VAR_2;
    if (VAR_0->low < VAR_0->range) {
        *VAR_1 = VAR_0->zero_state[*VAR_1];
        FUNC_0(VAR_0);
        return 0;
    } else {
        VAR_0->low -= VAR_0->range;
        *VAR_1 = VAR_0->one_state[*VAR_1];
        VAR_0->range = VAR_2;
        FUNC_0(VAR_0);
        return 1;
    }
}
