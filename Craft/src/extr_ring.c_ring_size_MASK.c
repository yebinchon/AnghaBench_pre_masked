
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ end; scalar_t__ start; int capacity; } ;
typedef TYPE_1__ Ring ;



int FUNC_0(Ring *VAR_0) {
    if (VAR_0->end >= VAR_0->start) {
        return VAR_0->end - VAR_0->start;
    }
    else {
        return VAR_0->capacity - (VAR_0->start - VAR_0->end);
    }
}
