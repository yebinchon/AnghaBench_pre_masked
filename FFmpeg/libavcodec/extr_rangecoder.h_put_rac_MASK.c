
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int range; int* zero_state; int* one_state; int low; } ;
typedef TYPE_1__ RangeCoder ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_2(RangeCoder *VAR_0, uint8_t *const VAR_1, int VAR_2)
{
    int VAR_3 = (VAR_0->range * (*VAR_1)) >> 8;

    FUNC_0(*VAR_1);
    FUNC_0(VAR_3 < VAR_0->range);
    FUNC_0(VAR_3 > 0);
    if (!VAR_2) {
        VAR_0->range -= VAR_3;
        *VAR_1 = VAR_0->zero_state[*VAR_1];
    } else {
        VAR_0->low += VAR_0->range - VAR_3;
        VAR_0->range = VAR_3;
        *VAR_1 = VAR_0->one_state[*VAR_1];
    }

    FUNC_1(VAR_0);
}
