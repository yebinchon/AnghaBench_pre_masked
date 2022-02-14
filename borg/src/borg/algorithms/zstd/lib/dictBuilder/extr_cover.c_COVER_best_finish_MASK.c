
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZDICT_cover_params_t ;
struct TYPE_3__ {size_t liveJobs; size_t compressedSize; size_t dictSize; int mutex; int cond; int parameters; scalar_t__ dict; } ;
typedef TYPE_1__ COVER_best_t ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (size_t) ;
 int FUNC_7 (scalar_t__,void*,size_t) ;

void FUNC_8(COVER_best_t *VAR_1, size_t VAR_2,
                              ZDICT_cover_params_t VAR_3, void *VAR_4,
                              size_t VAR_5) {
  if (!VAR_1) {
    return;
  }
  {
    size_t VAR_6;
    FUNC_3(&VAR_1->mutex);
    --VAR_1->liveJobs;
    VAR_6 = VAR_1->liveJobs;

    if (VAR_2 < VAR_1->compressedSize) {

      if (!VAR_1->dict || VAR_1->dictSize < VAR_5) {
        if (VAR_1->dict) {
          FUNC_5(VAR_1->dict);
        }
        VAR_1->dict = FUNC_6(VAR_5);
        if (!VAR_1->dict) {
          VAR_1->compressedSize = FUNC_0(VAR_0);
          VAR_1->dictSize = 0;
          FUNC_2(&VAR_1->cond);
          FUNC_4(&VAR_1->mutex);
          return;
        }
      }

      FUNC_7(VAR_1->dict, VAR_4, VAR_5);
      VAR_1->dictSize = VAR_5;
      VAR_1->parameters = VAR_3;
      VAR_1->compressedSize = VAR_2;
    }
    if (VAR_6 == 0) {
      FUNC_1(&VAR_1->cond);
    }
    FUNC_4(&VAR_1->mutex);
  }
}
