
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; scalar_t__ capacity; int * data; } ;
typedef TYPE_1__ SignList ;
typedef int Sign ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(SignList *VAR_0, Sign *VAR_1) {
    if (VAR_0->size == VAR_0->capacity) {
        FUNC_1(VAR_0);
    }
    Sign *VAR_2 = VAR_0->data + VAR_0->size++;
    FUNC_0(VAR_2, VAR_1, sizeof(Sign));
}
