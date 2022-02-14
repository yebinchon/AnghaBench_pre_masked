
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int * dts_options; } ;
typedef TYPE_1__ dtrace_state_t ;
struct TYPE_9__ {int dofs_align; int dofs_entsize; uintptr_t dofs_offset; int dofs_size; int dofs_flags; int dofs_type; } ;
typedef TYPE_2__ dof_sec_t ;
struct TYPE_10__ {int dofo_option; int dofo_value; int dofo_strtab; } ;
typedef TYPE_3__ dof_optdesc_t ;
struct TYPE_11__ {int dofh_hdrsize; int dofh_secsize; int dofh_secnum; int dofh_secoff; int dofh_loadsz; int dofh_filesz; scalar_t__ dofh_pad; scalar_t__ dofh_flags; int * dofh_ident; } ;
typedef TYPE_4__ dof_hdr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int *,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 TYPE_4__* FUNC_1 (int,int,int ) ;
 uintptr_t FUNC_2 (int,int) ;

__attribute__((used)) static dof_hdr_t *
FUNC_3(dtrace_state_t *VAR_27)
{
 dof_hdr_t *VAR_28;
 dof_sec_t *VAR_29;
 dof_optdesc_t *VAR_30;
 int VAR_31, VAR_32 = sizeof (dof_hdr_t) +
     FUNC_2(sizeof (dof_sec_t), sizeof (uint64_t)) +
     sizeof (dof_optdesc_t) * VAR_23;

 FUNC_0(&VAR_26, VAR_25);

 VAR_28 = FUNC_1(VAR_32, 8, VAR_24);
 VAR_28->dofh_ident[VAR_8] = VAR_14;
 VAR_28->dofh_ident[VAR_9] = VAR_15;
 VAR_28->dofh_ident[VAR_10] = VAR_16;
 VAR_28->dofh_ident[VAR_11] = VAR_17;

 VAR_28->dofh_ident[VAR_12] = VAR_18;
 VAR_28->dofh_ident[VAR_7] = VAR_3;
 VAR_28->dofh_ident[VAR_13] = VAR_22;
 VAR_28->dofh_ident[VAR_6] = VAR_2;
 VAR_28->dofh_ident[VAR_4] = VAR_0;
 VAR_28->dofh_ident[VAR_5] = VAR_1;

 VAR_28->dofh_flags = 0;
 VAR_28->dofh_hdrsize = sizeof (dof_hdr_t);
 VAR_28->dofh_secsize = sizeof (dof_sec_t);
 VAR_28->dofh_secnum = 1;
 VAR_28->dofh_secoff = sizeof (dof_hdr_t);
 VAR_28->dofh_loadsz = VAR_32;
 VAR_28->dofh_filesz = VAR_32;
 VAR_28->dofh_pad = 0;




 VAR_29 = (dof_sec_t *)((uintptr_t)VAR_28 + sizeof (dof_hdr_t));
 VAR_29->dofs_type = VAR_21;
 VAR_29->dofs_align = sizeof (uint64_t);
 VAR_29->dofs_flags = VAR_19;
 VAR_29->dofs_entsize = sizeof (dof_optdesc_t);

 VAR_30 = (dof_optdesc_t *)((uintptr_t)VAR_29 +
     FUNC_2(sizeof (dof_sec_t), sizeof (uint64_t)));

 VAR_29->dofs_offset = (uintptr_t)VAR_30 - (uintptr_t)VAR_28;
 VAR_29->dofs_size = sizeof (dof_optdesc_t) * VAR_23;

 for (VAR_31 = 0; VAR_31 < VAR_23; VAR_31++) {
  VAR_30[VAR_31].dofo_option = VAR_31;
  VAR_30[VAR_31].dofo_strtab = VAR_20;
  VAR_30[VAR_31].dofo_value = VAR_27->dts_options[VAR_31];
 }

 return (VAR_28);
}
