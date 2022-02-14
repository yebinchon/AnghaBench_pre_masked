
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int capacity; int data; int end; int start; } ;
typedef int RingEntry ;
typedef TYPE_1__ Ring ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

void FUNC_4(Ring *VAR_0) {
    Ring VAR_1;
    RingEntry VAR_2;
    FUNC_1(&VAR_1, VAR_0->capacity * 2);
    while (FUNC_2(VAR_0, &VAR_2)) {
        FUNC_3(&VAR_1, &VAR_2);
    }
    FUNC_0(VAR_0->data);
    VAR_0->capacity = VAR_1.capacity;
    VAR_0->start = VAR_1.start;
    VAR_0->end = VAR_1.end;
    VAR_0->data = VAR_1.data;
}
