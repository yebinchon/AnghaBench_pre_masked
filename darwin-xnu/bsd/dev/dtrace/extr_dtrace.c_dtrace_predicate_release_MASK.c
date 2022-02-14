
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dtrace_vstate_t ;
struct TYPE_6__ {scalar_t__ dtp_refcnt; TYPE_2__* dtp_difo; } ;
typedef TYPE_1__ dtrace_predicate_t ;
struct TYPE_7__ {scalar_t__ dtdo_refcnt; } ;
typedef TYPE_2__ dtrace_difo_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4(dtrace_predicate_t *VAR_2, dtrace_vstate_t *VAR_3)
{
 dtrace_difo_t *VAR_4 = VAR_2->dtp_difo;
#pragma unused(dp)

 FUNC_1(&VAR_1, VAR_0);
 FUNC_0(VAR_4 != ((void*)0) && VAR_4->dtdo_refcnt != 0);
 FUNC_0(VAR_2->dtp_refcnt > 0);

 if (--VAR_2->dtp_refcnt == 0) {
  FUNC_2(VAR_2->dtp_difo, VAR_3);
  FUNC_3(VAR_2, sizeof (dtrace_predicate_t));
 }
}
