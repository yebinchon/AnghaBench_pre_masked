
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rc_peek_t ;
struct TYPE_3__ {scalar_t__ previous; scalar_t__ value; scalar_t__ prior; struct TYPE_3__* next; int memref; } ;
typedef TYPE_1__ rc_memref_value_t ;


 scalar_t__ FUNC_0 (int *,int ,void*) ;

void FUNC_1(rc_memref_value_t* VAR_0, rc_peek_t VAR_1, void* VAR_2) {
  while (VAR_0) {
    VAR_0->previous = VAR_0->value;
    VAR_0->value = FUNC_0(&VAR_0->memref, VAR_1, VAR_2);
    if (VAR_0->value != VAR_0->previous)
      VAR_0->prior = VAR_0->previous;

    VAR_0 = VAR_0->next;
  }
}
