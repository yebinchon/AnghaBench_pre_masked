
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_29__ {TYPE_3__* p_dtrace_helpers; } ;
typedef TYPE_1__ proc_t ;
typedef int dtrace_vstate_t ;
struct TYPE_30__ {int dtpd_func; int dtpd_mod; int dtpd_provider; } ;
typedef TYPE_2__ dtrace_probedesc_t ;
struct TYPE_31__ {int dthps_generation; int dthps_vstate; } ;
typedef TYPE_3__ dtrace_helpers_t ;
struct TYPE_32__ {int dten_ndesc; TYPE_5__** dten_desc; } ;
typedef TYPE_4__ dtrace_enabling_t ;
struct TYPE_33__ {TYPE_2__ dted_probe; } ;
typedef TYPE_5__ dtrace_ecbdesc_t ;
struct TYPE_34__ {scalar_t__ dofs_type; } ;
typedef TYPE_6__ dof_sec_t ;
struct TYPE_35__ {scalar_t__ dofhp_dof; int dofhp_addr; } ;
typedef TYPE_7__ dof_helper_t ;
struct TYPE_36__ {scalar_t__ dofh_secnum; int dofh_secsize; scalar_t__ dofh_secoff; } ;
typedef TYPE_8__ dof_hdr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*,char*) ;
 int FUNC_4 (TYPE_8__*,int *,int *,TYPE_4__**,int ,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_1__*,int ,TYPE_5__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,TYPE_7__*,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_3__*,TYPE_7__*) ;
 scalar_t__ FUNC_10 (TYPE_8__*,TYPE_6__*) ;
 TYPE_3__* FUNC_11 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(proc_t* VAR_6, dof_hdr_t *VAR_7, dof_helper_t *VAR_8)
{
 dtrace_helpers_t *VAR_9;
 dtrace_vstate_t *VAR_10;
 dtrace_enabling_t *VAR_11 = ((void*)0);
 int VAR_12, VAR_13, VAR_14, VAR_15 = 0, VAR_16 = 0, VAR_17 = 1;
 uintptr_t VAR_18 = (uintptr_t)VAR_7;

 FUNC_0(&VAR_5, VAR_3);
 FUNC_0(&VAR_4, VAR_3);

 if ((VAR_9 = VAR_6->p_dtrace_helpers) == ((void*)0))
  VAR_9 = FUNC_11(VAR_6);

 VAR_10 = &VAR_9->dthps_vstate;

 if ((VAR_14 = FUNC_4(VAR_7, VAR_10, ((void*)0), &VAR_11,
     VAR_8 != ((void*)0) ? VAR_8->dofhp_addr : 0, VAR_0)) != 0) {
  FUNC_2(VAR_7);
  return (VAR_14);
 }




 if (VAR_8 != ((void*)0)) {
  for (VAR_12 = 0; (uint32_t)VAR_12 < VAR_7->dofh_secnum; VAR_12++) {
   dof_sec_t *VAR_19 = (dof_sec_t *)(uintptr_t)(VAR_18 +
       VAR_7->dofh_secoff + VAR_12 * VAR_7->dofh_secsize);

   if (VAR_19->dofs_type != VAR_1)
    continue;

   if (FUNC_10(VAR_7, VAR_19) != 0) {
    FUNC_5(VAR_11);
    FUNC_2(VAR_7);
    return (-1);
   }

   VAR_16++;
  }
 }




 for (VAR_12 = 0; VAR_12 < VAR_11->dten_ndesc; VAR_12++) {
  dtrace_ecbdesc_t *VAR_20 = VAR_11->dten_desc[VAR_12];
  dtrace_probedesc_t *VAR_21 = &VAR_20->dted_probe;


  if (!FUNC_1(VAR_21->dtpd_provider, "dtrace"))
   continue;

  if (!FUNC_1(VAR_21->dtpd_mod, "helper"))
   continue;

  if (!FUNC_1(VAR_21->dtpd_func, "ustack"))
   continue;

  if ((VAR_14 = FUNC_6(VAR_6, VAR_2,
      VAR_20)) != 0) {




   (void) FUNC_7(VAR_6, VAR_9->dthps_generation);
   FUNC_5(VAR_11);
   FUNC_2(VAR_7);
   return (-1);
  }

  VAR_15++;
 }

 if (VAR_15 < VAR_11->dten_ndesc)
  FUNC_3(VAR_7, "unmatched helpers");

 VAR_13 = VAR_9->dthps_generation++;
 FUNC_5(VAR_11);

 if (VAR_8 != ((void*)0) && VAR_16 > 0) {
  VAR_8->dofhp_dof = (uint64_t)(uintptr_t)VAR_7;
  if (FUNC_8(VAR_6, VAR_8, VAR_13) == 0) {
   FUNC_13(&VAR_4);
   FUNC_9(VAR_6, VAR_9, VAR_8);
   FUNC_12(&VAR_4);

   VAR_17 = 0;
  }
 }

 if (VAR_17)
  FUNC_2(VAR_7);

 return (VAR_13);
}
