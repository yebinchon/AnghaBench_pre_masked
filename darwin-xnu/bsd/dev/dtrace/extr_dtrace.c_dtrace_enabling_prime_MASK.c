
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dtrace_state_t ;
struct TYPE_6__ {int dten_primed; int dten_ndesc; int * dten_desc; int dten_current; TYPE_1__* dten_vstate; struct TYPE_6__* dten_next; } ;
typedef TYPE_2__ dtrace_enabling_t ;
struct TYPE_5__ {int * dtvs_state; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*,int *) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void
FUNC_2(dtrace_state_t *VAR_1)
{
 dtrace_enabling_t *VAR_2;
 int VAR_3;

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->dten_next) {
  FUNC_0(VAR_2->dten_vstate->dtvs_state != ((void*)0));

  if (VAR_2->dten_vstate->dtvs_state != VAR_1)
   continue;
  if (VAR_2->dten_primed)
   continue;

  for (VAR_3 = 0; VAR_3 < VAR_2->dten_ndesc; VAR_3++) {
   VAR_2->dten_current = VAR_2->dten_desc[VAR_3];
   (void) FUNC_1(((void*)0), VAR_2, ((void*)0));
  }

  VAR_2->dten_primed = 1;
 }
}
