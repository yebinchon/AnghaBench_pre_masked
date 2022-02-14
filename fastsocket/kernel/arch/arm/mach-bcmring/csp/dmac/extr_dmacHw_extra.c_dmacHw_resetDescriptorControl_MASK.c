
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hi; } ;
struct TYPE_6__ {TYPE_1__ ctl; } ;
typedef TYPE_2__ dmacHw_DESC_t ;
struct TYPE_7__ {int num; int pProg; TYPE_2__* pHead; TYPE_2__* pEnd; TYPE_2__* pTail; TYPE_2__* pFree; } ;
typedef TYPE_3__ dmacHw_DESC_RING_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (void*) ;

void FUNC_1(void *VAR_2
    ) {
 int VAR_3;
 dmacHw_DESC_RING_t *VAR_4;
 dmacHw_DESC_t *VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = VAR_4->pHead;

 for (VAR_3 = 0; VAR_3 < VAR_4->num; VAR_3++) {

  VAR_5->ctl.hi = VAR_0;

  VAR_5++;
 }
 VAR_4->pFree = VAR_4->pTail = VAR_4->pEnd = VAR_4->pHead;
 VAR_4->pProg = VAR_1;
}
