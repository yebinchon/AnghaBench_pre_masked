
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int capacity; int * data; scalar_t__ size; } ;
typedef TYPE_1__ SignList ;
typedef int Sign ;


 scalar_t__ FUNC_0 (int,int) ;

void FUNC_1(SignList *VAR_0, int VAR_1) {
    VAR_0->capacity = VAR_1;
    VAR_0->size = 0;
    VAR_0->data = (Sign *)FUNC_0(VAR_1, sizeof(Sign));
}
