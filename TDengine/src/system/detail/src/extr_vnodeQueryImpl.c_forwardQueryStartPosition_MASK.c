
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_16__ {scalar_t__ size; scalar_t__ keyLast; scalar_t__ keyFirst; } ;
struct TYPE_13__ {scalar_t__ offset; } ;
struct TYPE_15__ {scalar_t__ pos; scalar_t__ ekey; TYPE_1__ limit; int slot; } ;
struct TYPE_14__ {int * pMeterObj; TYPE_3__* pQuery; } ;
typedef TYPE_2__ SQueryRuntimeEnv ;
typedef TYPE_3__ SQuery ;
typedef int SMeterObj ;
typedef TYPE_4__ SBlockInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_4__ FUNC_3 (void*,scalar_t__) ;
 void* FUNC_4 (int *,TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*,void*) ;

void FUNC_6(SQueryRuntimeEnv *VAR_2) {
  SQuery * VAR_3 = VAR_2->pQuery;
  SMeterObj *VAR_4 = VAR_2->pMeterObj;

  if (VAR_3->limit.offset <= 0) {
    return;
  }

  void *VAR_5 = FUNC_4(VAR_4, VAR_3, VAR_3->slot);

  int32_t VAR_6 = (FUNC_0(VAR_3)) ? VAR_1 : VAR_0;
  SBlockInfo VAR_7 = FUNC_3(VAR_5, VAR_6);


  int32_t VAR_8 = (FUNC_1(VAR_3)) ? VAR_7.size - VAR_3->pos : VAR_3->pos + 1;

  if (VAR_3->limit.offset < VAR_8 || (VAR_3->ekey <= VAR_7.keyLast && FUNC_1(VAR_3)) ||
      (VAR_3->ekey >= VAR_7.keyFirst && !FUNC_1(VAR_3))) {
    FUNC_5(VAR_2, &VAR_7, VAR_5);
  } else {
    VAR_3->limit.offset -= VAR_8;
    FUNC_2(VAR_2);
  }
}
