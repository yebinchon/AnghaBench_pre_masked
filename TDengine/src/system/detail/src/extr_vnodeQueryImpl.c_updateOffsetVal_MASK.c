
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_18__ {scalar_t__ keyLast; scalar_t__ keyFirst; size_t size; } ;
struct TYPE_17__ {scalar_t__* offset; } ;
struct TYPE_14__ {scalar_t__ offset; } ;
struct TYPE_16__ {scalar_t__ ekey; size_t pos; TYPE_2__ limit; int skey; int lastKey; } ;
struct TYPE_15__ {TYPE_1__* primaryColBuffer; TYPE_4__* pQuery; } ;
struct TYPE_13__ {scalar_t__ data; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;
typedef TYPE_5__ SCacheBlock ;
typedef TYPE_6__ SBlockInfo ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_6(SQueryRuntimeEnv *VAR_1, SBlockInfo *VAR_2, void *VAR_3) {
  SQuery *VAR_4 = VAR_1->pQuery;





  if ((VAR_4->ekey <= VAR_2->keyLast && FUNC_1(VAR_4)) ||
      (VAR_4->ekey >= VAR_2->keyFirst && !FUNC_1(VAR_4))) {

    if (FUNC_0(VAR_4)) {
      FUNC_4(VAR_1, 0);
    }


    TSKEY *VAR_5 = ((void*)0);
    if (FUNC_0(VAR_4)) {
      VAR_5 = (TSKEY *)VAR_1->primaryColBuffer->data;
    } else {
      VAR_5 = (TSKEY *)(((SCacheBlock *)VAR_3)->offset[0]);
    }

    int32_t VAR_6 = 0;
    if (FUNC_1(VAR_4)) {
      for (VAR_6 = VAR_4->pos; VAR_6 < VAR_2->size && VAR_4->limit.offset > 0; ++VAR_6) {
        if (VAR_5[VAR_6] <= VAR_4->ekey) {
          VAR_4->limit.offset -= 1;
        } else {
          break;
        }
      }

    } else {
      for (VAR_6 = VAR_4->pos; VAR_6 >= 0 && VAR_4->limit.offset > 0; --VAR_6) {
        if (VAR_5[VAR_6] >= VAR_4->ekey) {
          VAR_4->limit.offset -= 1;
        } else {
          break;
        }
      }
    }

    if (((VAR_6 == VAR_2->size || VAR_5[VAR_6] > VAR_4->ekey) && FUNC_1(VAR_4)) ||
        ((VAR_6 < 0 || VAR_5[VAR_6] < VAR_4->ekey) && !FUNC_1(VAR_4))) {
      FUNC_5(VAR_4, VAR_0);
      VAR_4->pos = -1;
    } else {
      VAR_4->pos = VAR_6;
    }
  } else {
    if (FUNC_1(VAR_4)) {
      VAR_4->pos += VAR_4->limit.offset;
    } else {
      VAR_4->pos -= VAR_4->limit.offset;
    }

    FUNC_2(VAR_4->pos >= 0 && VAR_4->pos <= VAR_2->size - 1);

    if (FUNC_0(VAR_4)) {
      VAR_4->skey = FUNC_4(VAR_1, VAR_4->pos);
    } else {
      VAR_4->skey = FUNC_3(VAR_3, VAR_4->pos);
    }


    VAR_4->lastKey = VAR_4->skey;
    VAR_4->limit.offset = 0;
  }
}
