
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dtrace_vstate_t ;
typedef int dtrace_probedesc_t ;
typedef int dtrace_predicate_t ;
struct TYPE_13__ {int * dtpdd_predicate; } ;
struct TYPE_14__ {int * dted_action; TYPE_1__ dted_pred; int dted_probe; int dted_uarg; } ;
typedef TYPE_2__ dtrace_ecbdesc_t ;
struct TYPE_15__ {int dofs_size; int dofs_align; scalar_t__ dofs_offset; } ;
typedef TYPE_3__ dof_sec_t ;
typedef int dof_hdr_t ;
struct TYPE_16__ {scalar_t__ dofe_probes; scalar_t__ dofe_pred; scalar_t__ dofe_actions; int dofe_uarg; } ;
typedef TYPE_4__ dof_ecbdesc_t ;
typedef int cred_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,TYPE_3__*,int *,int *) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,TYPE_3__*,int *,int *) ;
 int * FUNC_3 (int *,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_7 (int,int ) ;

__attribute__((used)) static dtrace_ecbdesc_t *
FUNC_8(dof_hdr_t *VAR_5, dof_sec_t *VAR_6, dtrace_vstate_t *VAR_7,
    cred_t *VAR_8)
{
 dtrace_ecbdesc_t *VAR_9;
 dof_ecbdesc_t *VAR_10;
 dtrace_probedesc_t *VAR_11;
 dtrace_predicate_t *VAR_12 = ((void*)0);

 if (VAR_6->dofs_size < sizeof (dof_ecbdesc_t)) {
  FUNC_1(VAR_5, "truncated ECB description");
  return (((void*)0));
 }

 if (VAR_6->dofs_align != sizeof (uint64_t)) {
  FUNC_1(VAR_5, "bad alignment in ECB description");
  return (((void*)0));
 }

 VAR_10 = (dof_ecbdesc_t *)((uintptr_t)VAR_5 + (uintptr_t)VAR_6->dofs_offset);
 VAR_6 = FUNC_4(VAR_5, VAR_3, VAR_10->dofe_probes);

 if (VAR_6 == ((void*)0))
  return (((void*)0));

 VAR_9 = FUNC_7(sizeof (dtrace_ecbdesc_t), VAR_4);
 VAR_9->dted_uarg = VAR_10->dofe_uarg;
 VAR_11 = &VAR_9->dted_probe;

 if (FUNC_3(VAR_5, VAR_6, VAR_11) == ((void*)0))
  goto err;

 if (VAR_10->dofe_pred != VAR_0) {
  if ((VAR_6 = FUNC_4(VAR_5,
      VAR_2, VAR_10->dofe_pred)) == ((void*)0))
   goto err;

  if ((VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8)) == ((void*)0))
   goto err;

  VAR_9->dted_pred.dtpdd_predicate = VAR_12;
 }

 if (VAR_10->dofe_actions != VAR_0) {
  if ((VAR_6 = FUNC_4(VAR_5,
      VAR_1, VAR_10->dofe_actions)) == ((void*)0))
   goto err;

  VAR_9->dted_action = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);

  if (VAR_9->dted_action == ((void*)0))
   goto err;
 }

 return (VAR_9);

err:
 if (VAR_12 != ((void*)0))
  FUNC_5(VAR_12, VAR_7);
 FUNC_6(VAR_9, sizeof (dtrace_ecbdesc_t));
 return (((void*)0));
}
