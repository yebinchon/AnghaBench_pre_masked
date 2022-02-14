
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int int32_t ;
struct TYPE_7__ {int size; scalar_t__ keyFirst; scalar_t__ keyLast; } ;
struct TYPE_6__ {int pos; scalar_t__ skey; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SQuery ;
typedef TYPE_2__ SBlockInfo ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

int64_t FUNC_3(SQuery *VAR_0, int64_t *VAR_1, SBlockInfo *VAR_2, int32_t VAR_3) {
  FUNC_2(VAR_0->pos >= 0 && VAR_0->pos <= VAR_2->size - 1);

  TSKEY VAR_4 = -1;
  if (FUNC_0(VAR_3)) {
    VAR_4 = VAR_1[VAR_0->pos];
  } else {
    FUNC_2(VAR_0->pos == VAR_2->size - 1 || VAR_0->pos == 0);
    VAR_4 = FUNC_1(VAR_0) ? VAR_2->keyFirst : VAR_2->keyLast;
  }

  FUNC_2((VAR_4 >= VAR_0->skey && FUNC_1(VAR_0)) || (VAR_4 <= VAR_0->skey && !FUNC_1(VAR_0)));
  return VAR_4;
}
