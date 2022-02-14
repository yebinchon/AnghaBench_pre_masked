
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int proc_t ;
struct TYPE_11__ {int (* dtms_remove_proc ) (int ,int *,int *) ;} ;
typedef TYPE_1__ dtrace_mops_t ;
struct TYPE_12__ {int dtm_count; int dtm_arg; TYPE_1__ dtm_mops; } ;
typedef TYPE_2__ dtrace_meta_t ;
typedef int dtrace_helper_provdesc_t ;
struct TYPE_13__ {scalar_t__ dofs_offset; } ;
typedef TYPE_3__ dof_sec_t ;
struct TYPE_14__ {int dofpv_strtab; } ;
typedef TYPE_4__ dof_provider_t ;
struct TYPE_15__ {scalar_t__ dofhp_dof; } ;
typedef TYPE_5__ dof_helper_t ;
struct TYPE_16__ {int dofh_secsize; scalar_t__ dofh_secoff; } ;
typedef TYPE_6__ dof_hdr_t ;


 int FUNC_0 (int *,TYPE_4__*,char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_2(dof_helper_t *VAR_1, dof_sec_t *VAR_2, proc_t *VAR_3)
{
 uintptr_t VAR_4 = (uintptr_t)VAR_1->dofhp_dof;
 dof_hdr_t *VAR_5 = (dof_hdr_t *)VAR_4;
 dof_sec_t *VAR_6;
 dof_provider_t *VAR_7;
 char *VAR_8;
 dtrace_helper_provdesc_t VAR_9;
 dtrace_meta_t *VAR_10 = VAR_0;
 dtrace_mops_t *VAR_11 = &VAR_10->dtm_mops;

 VAR_7 = (dof_provider_t *)(uintptr_t)(VAR_4 + VAR_2->dofs_offset);
 VAR_6 = (dof_sec_t *)(uintptr_t)(VAR_4 + VAR_5->dofh_secoff +
     VAR_7->dofpv_strtab * VAR_5->dofh_secsize);

 VAR_8 = (char *)(uintptr_t)(VAR_4 + VAR_6->dofs_offset);




 FUNC_0(&VAR_9, VAR_7, VAR_8);

 VAR_11->dtms_remove_proc(VAR_10->dtm_arg, &VAR_9, VAR_3);

 VAR_10->dtm_count--;
}
