
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int capacity; int * data; scalar_t__ end; scalar_t__ start; } ;
typedef int RingEntry ;
typedef TYPE_1__ Ring ;


 scalar_t__ FUNC_0 (int,int) ;

void FUNC_1(Ring *VAR_0, int VAR_1) {
    VAR_0->capacity = VAR_1;
    VAR_0->start = 0;
    VAR_0->end = 0;
    VAR_0->data = (RingEntry *)FUNC_0(VAR_1, sizeof(RingEntry));
}
