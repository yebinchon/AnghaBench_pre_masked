
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tmr_obj_t ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_1__ tmr_ctrl_t ;
typedef int timer_list_t ;
struct TYPE_10__ {scalar_t__ size; int ** slots; scalar_t__ index; scalar_t__ resolution; scalar_t__ nextScanAt; int mutex; } ;
typedef TYPE_2__ time_wheel_t ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {int * slots; scalar_t__ size; scalar_t__ count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int,int ,char*) ;
 int FUNC_7 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_8 (char*,...) ;
 int VAR_8 ;
 int FUNC_9 (char*,int ) ;
 TYPE_1__* VAR_9 ;
 TYPE_2__* VAR_10 ;

__attribute__((used)) static void FUNC_10(void) {
  VAR_7 = FUNC_1(sizeof(tmr_ctrl_t) * VAR_2);
  if (VAR_7 == ((void*)0)) {
    FUNC_8("failed to allocate memory for timer controllers.");
    return;
  }

  for (int VAR_11 = 0; VAR_11 < VAR_2 - 1; ++VAR_11) {
    tmr_ctrl_t* VAR_12 = VAR_7 + VAR_11;
    VAR_12->next = VAR_12 + 1;
  }
  VAR_9 = VAR_7;

  FUNC_2(&VAR_6, ((void*)0));

  int64_t VAR_13 = FUNC_5();
  for (int VAR_14 = 0; VAR_14 < FUNC_4(VAR_10); VAR_14++) {
    time_wheel_t* VAR_15 = VAR_10 + VAR_14;
    if (FUNC_2(&VAR_15->mutex, ((void*)0)) != 0) {
      FUNC_8("failed to create the mutex for wheel, reason:%s", FUNC_3(VAR_1));
      return;
    }
    VAR_15->nextScanAt = VAR_13 + VAR_15->resolution;
    VAR_15->index = 0;
    VAR_15->slots = (tmr_obj_t**)FUNC_0(VAR_15->size, sizeof(tmr_obj_t*));
    if (VAR_15->slots == ((void*)0)) {
      FUNC_8("failed to allocate wheel slots");
      return;
    }
    VAR_5.size += VAR_15->size;
  }

  VAR_5.count = 0;
  VAR_5.slots = (timer_list_t*)FUNC_0(VAR_5.size, sizeof(timer_list_t));
  if (VAR_5.slots == ((void*)0)) {
    FUNC_8("failed to allocate hash map");
    return;
  }

  VAR_8 = FUNC_6(10000, VAR_4, "tmr");
  FUNC_7(VAR_3, VAR_0);

  FUNC_9("timer module is initialized, number of threads: %d", VAR_4);
}
