
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int end; int capacity; int * data; } ;
typedef int RingEntry ;
typedef TYPE_1__ Ring ;


 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(Ring *VAR_0, RingEntry *VAR_1) {
    if (FUNC_1(VAR_0)) {
        FUNC_2(VAR_0);
    }
    RingEntry *VAR_2 = VAR_0->data + VAR_0->end;
    FUNC_0(VAR_2, VAR_1, sizeof(RingEntry));
    VAR_0->end = (VAR_0->end + 1) % VAR_0->capacity;
}
