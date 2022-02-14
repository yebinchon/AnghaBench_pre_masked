
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ len; int cap; scalar_t__* keys; scalar_t__* vals; } ;
typedef TYPE_1__ Map ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;

uint64_t FUNC_3(Map *VAR_0, uint64_t VAR_1) {
    if (VAR_0->len == 0) {
        return 0;
    }
    FUNC_1(FUNC_0(VAR_0->cap));
    size_t VAR_2 = (size_t)FUNC_2(VAR_1);
    FUNC_1(VAR_0->len < VAR_0->cap);
    for (;;) {
        VAR_2 &= VAR_0->cap - 1;
        if (VAR_0->keys[VAR_2] == VAR_1) {
            return VAR_0->vals[VAR_2];
        } else if (!VAR_0->keys[VAR_2]) {
            return 0;
        }
        VAR_2++;
    }
    return 0;
}
