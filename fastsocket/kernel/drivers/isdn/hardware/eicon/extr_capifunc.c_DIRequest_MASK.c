
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* request ) (TYPE_3__*) ;} ;
struct TYPE_9__ {TYPE_1__ d; } ;
typedef TYPE_2__ diva_card ;
typedef size_t byte ;
struct TYPE_11__ {scalar_t__* FlowControlIdTable; int* FlowControlSkipTable; scalar_t__ os_card; } ;
struct TYPE_10__ {size_t ReqCh; scalar_t__ Id; scalar_t__ Req; scalar_t__* user; } ;
typedef TYPE_3__ ENTITY ;
typedef TYPE_4__ DIVA_CAPI_ADAPTER ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(ENTITY * VAR_1)
{
 DIVA_CAPI_ADAPTER *VAR_2 = &(VAR_0[(byte) VAR_1->user[0]]);
 diva_card *VAR_3 = (diva_card *) VAR_2->os_card;

 if (VAR_1->Req && (VAR_2->FlowControlIdTable[VAR_1->ReqCh] == VAR_1->Id)) {
  VAR_2->FlowControlSkipTable[VAR_1->ReqCh] = 1;
 }

 (*(VAR_3->d.request)) (VAR_1);
}
