
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int capacity; int size; int data; } ;
typedef TYPE_1__ SignList ;
typedef int Sign ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(SignList *VAR_0) {
    SignList VAR_1;
    FUNC_2(&VAR_1, VAR_0->capacity * 2);
    FUNC_1(VAR_1.data, VAR_0->data, VAR_0->size * sizeof(Sign));
    FUNC_0(VAR_0->data);
    VAR_0->capacity = VAR_1.capacity;
    VAR_0->data = VAR_1.data;
}
