
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int dts_vstate; } ;
typedef TYPE_2__ dtrace_state_t ;
struct TYPE_18__ {int dtpd_name; int dtpd_func; int dtpd_mod; int dtpd_provider; } ;
typedef TYPE_3__ dtrace_probedesc_t ;
struct TYPE_19__ {int dten_ndesc; TYPE_5__** dten_desc; TYPE_1__* dten_vstate; struct TYPE_19__* dten_next; } ;
typedef TYPE_4__ dtrace_enabling_t ;
struct TYPE_20__ {TYPE_3__ dted_probe; } ;
typedef TYPE_5__ dtrace_ecbdesc_t ;
struct TYPE_16__ {TYPE_2__* dtvs_state; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,TYPE_3__*) ;
 TYPE_4__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_6 ;
 TYPE_4__* VAR_7 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(dtrace_state_t *VAR_8, dtrace_probedesc_t *VAR_9,
    dtrace_probedesc_t *VAR_10)
{
 dtrace_enabling_t *VAR_11, *VAR_12;
 int VAR_13 = 0, VAR_14 = VAR_4;

 FUNC_1(&VAR_6, VAR_5);
 FUNC_0(FUNC_6(VAR_9->dtpd_provider) < VAR_3);
 FUNC_0(FUNC_6(VAR_9->dtpd_mod) < VAR_1);
 FUNC_0(FUNC_6(VAR_9->dtpd_func) < VAR_0);
 FUNC_0(FUNC_6(VAR_9->dtpd_name) < VAR_2);

 VAR_11 = FUNC_3(&VAR_8->dts_vstate);





 for (VAR_12 = VAR_7; VAR_12 != ((void*)0); VAR_12 = VAR_12->dten_next) {
  int VAR_15;





  FUNC_0(VAR_12->dten_vstate->dtvs_state != ((void*)0));

  if (VAR_12->dten_vstate->dtvs_state != VAR_8)
   continue;





  for (VAR_15 = 0; VAR_15 < VAR_12->dten_ndesc; VAR_15++) {
   dtrace_ecbdesc_t *VAR_16 = VAR_12->dten_desc[VAR_15];
   dtrace_probedesc_t *VAR_17 = &VAR_16->dted_probe;


   if (FUNC_7(VAR_17->dtpd_provider, VAR_9->dtpd_provider, VAR_3))
    continue;

   if (FUNC_7(VAR_17->dtpd_mod, VAR_9->dtpd_mod, VAR_1))
    continue;

   if (FUNC_7(VAR_17->dtpd_func, VAR_9->dtpd_func, VAR_0))
    continue;

   if (FUNC_7(VAR_17->dtpd_name, VAR_9->dtpd_name, VAR_2))
    continue;





   VAR_13 = 1;
   FUNC_2(VAR_11, VAR_16, VAR_10);
  }
 }

 if (!VAR_13 || (VAR_14 = FUNC_5(VAR_11)) != 0) {
  FUNC_4(VAR_11);
  return (VAR_14);
 }

 return (0);
}
