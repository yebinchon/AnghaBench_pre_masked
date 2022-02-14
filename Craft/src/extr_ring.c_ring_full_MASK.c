
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int start; int end; int capacity; } ;
typedef TYPE_1__ Ring ;



int FUNC_0(Ring *VAR_0) {
    return VAR_0->start == (VAR_0->end + 1) % VAR_0->capacity;
}
