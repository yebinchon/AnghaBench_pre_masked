
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef int dtrace_vstate_t ;
struct TYPE_10__ {scalar_t__ dte_size; TYPE_3__* dte_action_last; TYPE_3__* dte_action; TYPE_5__* dte_state; } ;
typedef TYPE_2__ dtrace_ecb_t ;
typedef int dtrace_difo_t ;
struct TYPE_9__ {int dtrd_format; } ;
struct TYPE_11__ {int dta_refcnt; int dta_kind; int * dta_difo; TYPE_1__ dta_rec; struct TYPE_11__* dta_next; } ;
typedef TYPE_3__ dtrace_action_t ;
struct TYPE_12__ {int dts_vstate; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_6(dtrace_ecb_t *VAR_0)
{
 dtrace_action_t *VAR_1 = VAR_0->dte_action, *VAR_2;
 dtrace_vstate_t *VAR_3 = &VAR_0->dte_state->dts_vstate;
 dtrace_difo_t *VAR_4;
 uint16_t VAR_5;

 if (VAR_1 != ((void*)0) && VAR_1->dta_refcnt > 1) {
  FUNC_0(VAR_1->dta_next == ((void*)0) || VAR_1->dta_next->dta_refcnt == 1);
  VAR_1->dta_refcnt--;
 } else {
  for (; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
   VAR_2 = VAR_1->dta_next;
   FUNC_0(VAR_2 != ((void*)0) || VAR_1 == VAR_0->dte_action_last);
   FUNC_0(VAR_1->dta_refcnt == 1);

   if ((VAR_5 = VAR_1->dta_rec.dtrd_format) != 0)
    FUNC_4(VAR_0->dte_state, VAR_5);

   if ((VAR_4 = VAR_1->dta_difo) != ((void*)0))
    FUNC_2(VAR_4, VAR_3);

   if (FUNC_1(VAR_1->dta_kind)) {
    FUNC_3(VAR_0, VAR_1);
   } else {
    FUNC_5(VAR_1, sizeof (dtrace_action_t));
   }
  }
 }

 VAR_0->dte_action = ((void*)0);
 VAR_0->dte_action_last = ((void*)0);
 VAR_0->dte_size = 0;
}
