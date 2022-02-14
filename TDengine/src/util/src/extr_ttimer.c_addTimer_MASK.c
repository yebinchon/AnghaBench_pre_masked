
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int id; struct TYPE_8__* mnext; int wheel; } ;
typedef TYPE_1__ tmr_obj_t ;
struct TYPE_9__ {TYPE_1__* timers; } ;
typedef TYPE_2__ timer_list_t ;
struct TYPE_10__ {int size; TYPE_2__* slots; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(tmr_obj_t* VAR_2) {
  FUNC_2(VAR_2);
  VAR_2->wheel = FUNC_1(VAR_1);

  uint32_t VAR_3 = (uint32_t)(VAR_2->id % VAR_0.size);
  timer_list_t* VAR_4 = VAR_0.slots + VAR_3;

  FUNC_0(VAR_4);
  VAR_2->mnext = VAR_4->timers;
  VAR_4->timers = VAR_2;
  FUNC_3(VAR_4);
}
