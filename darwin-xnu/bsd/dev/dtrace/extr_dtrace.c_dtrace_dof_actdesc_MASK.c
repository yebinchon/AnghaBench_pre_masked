
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef int dtrace_vstate_t ;
typedef scalar_t__ dtrace_actkind_t ;
struct TYPE_15__ {struct TYPE_15__* dtad_next; int * dtad_difo; } ;
typedef TYPE_1__ dtrace_actdesc_t ;
struct TYPE_16__ {scalar_t__ dofs_type; scalar_t__ dofs_offset; int dofs_align; int dofs_size; int dofs_entsize; } ;
typedef TYPE_2__ dof_sec_t ;
struct TYPE_17__ {scalar_t__ dofh_loadsz; } ;
typedef TYPE_3__ dof_hdr_t ;
struct TYPE_18__ {scalar_t__ dofa_strtab; size_t dofa_arg; scalar_t__ dofa_difo; int dofa_uarg; int dofa_ntuple; scalar_t__ dofa_kind; } ;
typedef TYPE_4__ dof_actdesc_t ;
typedef int cred_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,char*,size_t) ;
 TYPE_1__* FUNC_3 (scalar_t__,int ,int ,size_t) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int VAR_7 ;
 int * FUNC_5 (TYPE_3__*,TYPE_2__*,int *,int *) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 TYPE_2__* FUNC_7 (TYPE_3__*,int ,scalar_t__) ;
 char* FUNC_8 (size_t,int ) ;

__attribute__((used)) static dtrace_actdesc_t *
FUNC_9(dof_hdr_t *VAR_8, dof_sec_t *VAR_9, dtrace_vstate_t *VAR_10,
    cred_t *VAR_11)
{
 dtrace_actdesc_t *VAR_12, *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15;
 dof_actdesc_t *VAR_16;
 dof_sec_t *VAR_17;
 size_t VAR_18;
 uintptr_t VAR_19 = (uintptr_t)VAR_8;
 uint64_t VAR_20;
 dtrace_actkind_t VAR_21;

 if (VAR_9->dofs_type != VAR_1) {
  FUNC_6(VAR_8, "invalid action section");
  return (((void*)0));
 }

 if (VAR_9->dofs_offset + sizeof (dof_actdesc_t) > VAR_8->dofh_loadsz) {
  FUNC_6(VAR_8, "truncated action description");
  return (((void*)0));
 }

 if (VAR_9->dofs_align != sizeof (uint64_t)) {
  FUNC_6(VAR_8, "bad alignment in action description");
  return (((void*)0));
 }

 if (VAR_9->dofs_size < VAR_9->dofs_entsize) {
  FUNC_6(VAR_8, "section entry size exceeds total size");
  return (((void*)0));
 }

 if (VAR_9->dofs_entsize != sizeof (dof_actdesc_t)) {
  FUNC_6(VAR_8, "bad entry size in action description");
  return (((void*)0));
 }

 if (VAR_9->dofs_size / VAR_9->dofs_entsize > VAR_7) {
  FUNC_6(VAR_8, "actions exceed dtrace_actions_max");
  return (((void*)0));
 }

 for (VAR_18 = 0; VAR_18 < VAR_9->dofs_size; VAR_18 += VAR_9->dofs_entsize) {
  VAR_16 = (dof_actdesc_t *)(VAR_19 +
      (uintptr_t)VAR_9->dofs_offset + VAR_18);
  VAR_21 = (dtrace_actkind_t)VAR_16->dofa_kind;

  if ((FUNC_1(VAR_21) &&
      (VAR_21 != VAR_5 || VAR_16->dofa_strtab != VAR_0)) ||
      (VAR_21 == VAR_4 && VAR_16->dofa_strtab != VAR_0))
  {
   dof_sec_t *VAR_22;
   char *VAR_23, *VAR_24;
   uint64_t VAR_25;







   if ((VAR_22 = FUNC_7(VAR_8,
       VAR_3, VAR_16->dofa_strtab)) == ((void*)0))
    goto err;

   VAR_23 = (char *)((uintptr_t)VAR_8 +
       (uintptr_t)VAR_22->dofs_offset);

   for (VAR_25 = VAR_16->dofa_arg; VAR_25 < VAR_22->dofs_size; VAR_25++) {
    if (VAR_23[VAR_25] == '\0')
     break;
   }

   if (VAR_25 >= VAR_22->dofs_size) {
    FUNC_6(VAR_8, "bogus format string");
    goto err;
   }

   if (VAR_25 == VAR_16->dofa_arg) {
    FUNC_6(VAR_8, "empty format string");
    goto err;
   }

   VAR_25 -= VAR_16->dofa_arg;
   VAR_24 = FUNC_8(VAR_25 + 1, VAR_6);
   FUNC_2(&VAR_23[VAR_16->dofa_arg], VAR_24, VAR_25 + 1);
   VAR_20 = (uint64_t)(uintptr_t)VAR_24;
  } else {
   if (VAR_21 == VAR_5) {
    FUNC_0(VAR_16->dofa_strtab == VAR_0);
    VAR_20 = 0;
   } else {
    VAR_20 = VAR_16->dofa_arg;
   }
  }

  VAR_12 = FUNC_3(VAR_21, VAR_16->dofa_ntuple,
      VAR_16->dofa_uarg, VAR_20);

  if (VAR_14 != ((void*)0)) {
   VAR_14->dtad_next = VAR_12;
  } else {
   VAR_13 = VAR_12;
  }

  VAR_14 = VAR_12;

  if (VAR_16->dofa_difo == VAR_0)
   continue;

  if ((VAR_17 = FUNC_7(VAR_8,
      VAR_2, VAR_16->dofa_difo)) == ((void*)0))
   goto err;

  VAR_12->dtad_difo = FUNC_5(VAR_8, VAR_17, VAR_10, VAR_11);

  if (VAR_12->dtad_difo == ((void*)0))
   goto err;
 }

 FUNC_0(VAR_13 != ((void*)0));
 return (VAR_13);

err:
 for (VAR_12 = VAR_13; VAR_12 != ((void*)0); VAR_12 = VAR_15) {
  VAR_15 = VAR_12->dtad_next;
  FUNC_4(VAR_12, VAR_10);
 }

 return (((void*)0));
}
