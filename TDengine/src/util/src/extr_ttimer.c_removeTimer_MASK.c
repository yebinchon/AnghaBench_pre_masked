
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {uintptr_t id; struct TYPE_7__* mnext; } ;
typedef TYPE_1__ tmr_obj_t ;
struct TYPE_8__ {TYPE_1__* timers; } ;
typedef TYPE_2__ timer_list_t ;
struct TYPE_9__ {uintptr_t size; TYPE_2__* slots; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(uintptr_t VAR_1) {
  tmr_obj_t* VAR_2 = ((void*)0);
  uint32_t VAR_3 = (uint32_t)(VAR_1 % VAR_0.size);
  timer_list_t* VAR_4 = VAR_0.slots + VAR_3;
  FUNC_0(VAR_4);
  for (tmr_obj_t* VAR_5 = VAR_4->timers; VAR_5 != ((void*)0); VAR_5 = VAR_5->mnext) {
    if (VAR_5->id == VAR_1) {
      if (VAR_2 == ((void*)0)) {
        VAR_4->timers = VAR_5->mnext;
      } else {
        VAR_2->mnext = VAR_5->mnext;
      }
      FUNC_1(VAR_5);
      break;
    }
    VAR_2 = VAR_5;
  }
  FUNC_2(VAR_4);
}
