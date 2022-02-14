
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ expireAt; int wheel; struct TYPE_6__* prev; struct TYPE_6__* next; } ;
typedef TYPE_1__ tmr_obj_t ;
struct TYPE_7__ {scalar_t__ nextScanAt; int index; int size; scalar_t__ resolution; int mutex; TYPE_1__** slots; } ;
typedef TYPE_2__ time_wheel_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 () ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_5(int VAR_1) {
  int64_t VAR_2 = FUNC_4();

  for (int VAR_3 = 0; VAR_3 < FUNC_3(VAR_0); VAR_3++) {




    tmr_obj_t* VAR_4 = ((void*)0);

    time_wheel_t* VAR_5 = VAR_0 + VAR_3;
    while (VAR_2 >= VAR_5->nextScanAt) {
      FUNC_1(&VAR_5->mutex);
      VAR_5->index = (VAR_5->index + 1) % VAR_5->size;
      tmr_obj_t* VAR_6 = VAR_5->slots[VAR_5->index];
      while (VAR_6 != ((void*)0)) {
        tmr_obj_t* VAR_7 = VAR_6->next;
        if (VAR_2 < VAR_6->expireAt) {
          VAR_6 = VAR_7;
          continue;
        }


        if (VAR_6->prev == ((void*)0)) {
          VAR_5->slots[VAR_5->index] = VAR_7;
          if (VAR_7 != ((void*)0)) {
            VAR_7->prev = ((void*)0);
          }
        } else {
          VAR_6->prev->next = VAR_7;
          if (VAR_7 != ((void*)0)) {
            VAR_7->prev = VAR_6->prev;
          }
        }
        VAR_6->wheel = FUNC_3(VAR_0);


        VAR_6->next = VAR_4;
        VAR_6->prev = ((void*)0);
        if (VAR_4 != ((void*)0)) {
          VAR_4->prev = VAR_6;
        }
        VAR_4 = VAR_6;

        VAR_6 = VAR_7;
      }
      FUNC_2(&VAR_5->mutex);
      VAR_5->nextScanAt += VAR_5->resolution;
    }

    FUNC_0(VAR_4);
  }
}
