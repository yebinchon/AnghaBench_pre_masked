
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cond; int mutex; scalar_t__ dict; } ;
typedef TYPE_1__ COVER_best_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(COVER_best_t *VAR_0) {
  if (!VAR_0) {
    return;
  }
  FUNC_0(VAR_0);
  if (VAR_0->dict) {
    FUNC_3(VAR_0->dict);
  }
  FUNC_2(&VAR_0->mutex);
  FUNC_1(&VAR_0->cond);
}
