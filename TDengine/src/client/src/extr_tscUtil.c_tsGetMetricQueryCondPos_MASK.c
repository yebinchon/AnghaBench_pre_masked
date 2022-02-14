
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t int32_t ;
struct TYPE_6__ {scalar_t__ uid; } ;
struct TYPE_5__ {TYPE_2__* cond; } ;
typedef TYPE_1__ STagCond ;
typedef TYPE_2__ SCond ;


 size_t VAR_0 ;

SCond* FUNC_0(STagCond* VAR_1, uint64_t VAR_2) {
  for (int32_t VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
    if (VAR_2 == VAR_1->cond[VAR_3].uid) {
      return &VAR_1->cond[VAR_3];
    }
  }

  return ((void*)0);
}
