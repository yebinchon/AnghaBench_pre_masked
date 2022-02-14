
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int len; int cap; scalar_t__* keys; scalar_t__* vals; } ;
typedef TYPE_1__ Map ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(Map *VAR_0, uint64_t VAR_1, uint64_t VAR_2) {
    FUNC_1(VAR_1);
    if (!VAR_2) {
        return;
    }
    if (2*VAR_0->len >= VAR_0->cap) {
        FUNC_3(VAR_0, 2*VAR_0->cap);
    }
    FUNC_1(2*VAR_0->len < VAR_0->cap);
    FUNC_1(FUNC_0(VAR_0->cap));
    size_t VAR_3 = (size_t)FUNC_2(VAR_1);
    for (;;) {
        VAR_3 &= VAR_0->cap - 1;
        if (!VAR_0->keys[VAR_3]) {
            VAR_0->len++;
            VAR_0->keys[VAR_3] = VAR_1;
            VAR_0->vals[VAR_3] = VAR_2;
            return;
        } else if (VAR_0->keys[VAR_3] == VAR_1) {
            VAR_0->vals[VAR_3] = VAR_2;
            return;
        }
        VAR_3++;
    }
}
