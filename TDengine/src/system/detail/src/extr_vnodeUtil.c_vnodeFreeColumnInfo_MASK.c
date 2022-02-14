
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_5__ {scalar_t__ len; struct TYPE_5__* pz; } ;
struct TYPE_4__ {scalar_t__ numOfFilters; scalar_t__ type; TYPE_3__* filters; } ;
typedef TYPE_1__ SColumnInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

void FUNC_1(SColumnInfo* VAR_1) {
  if (VAR_1 == ((void*)0)) {
    return;
  }

  if (VAR_1->numOfFilters > 0) {
    if (VAR_1->type == VAR_0) {
      for (int32_t VAR_2 = 0; VAR_2 < VAR_1->numOfFilters; ++VAR_2) {
        FUNC_0(VAR_1->filters[VAR_2].pz);
        VAR_1->filters[VAR_2].len = 0;
      }
    }

    FUNC_0(VAR_1->filters);
  }
}
