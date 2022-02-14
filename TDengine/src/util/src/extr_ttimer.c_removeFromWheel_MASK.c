
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t slot; TYPE_1__* prev; struct TYPE_9__* next; int wheel; } ;
typedef TYPE_2__ tmr_obj_t ;
struct TYPE_10__ {int mutex; TYPE_2__** slots; } ;
typedef TYPE_3__ time_wheel_t ;
struct TYPE_8__ {TYPE_2__* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static bool FUNC_4(tmr_obj_t* VAR_1) {
  if (VAR_1->wheel >= FUNC_2(VAR_0)) {
    return 0;
  }
  time_wheel_t* VAR_2 = VAR_0 + VAR_1->wheel;

  bool VAR_3 = 0;
  FUNC_0(&VAR_2->mutex);

  if (VAR_1->wheel < FUNC_2(VAR_0)) {
    if (VAR_1->prev != ((void*)0)) {
      VAR_1->prev->next = VAR_1->next;
    }
    if (VAR_1->next != ((void*)0)) {
      VAR_1->next->prev = VAR_1->prev;
    }
    if (VAR_1 == VAR_2->slots[VAR_1->slot]) {
      VAR_2->slots[VAR_1->slot] = VAR_1->next;
    }
    VAR_1->wheel = FUNC_2(VAR_0);
    VAR_1->next = ((void*)0);
    VAR_1->prev = ((void*)0);
    FUNC_3(VAR_1);
    VAR_3 = 1;
  }
  FUNC_1(&VAR_2->mutex);

  return VAR_3;
}
