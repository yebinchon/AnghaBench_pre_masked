
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_dtrace_lazy_dofs; int * p_dtrace_helpers; } ;
typedef TYPE_1__ proc_t ;
struct TYPE_8__ {int dofiod_count; } ;
typedef TYPE_2__ dof_ioctl_data_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(proc_t *VAR_1)
{
 FUNC_5(&VAR_0);
 FUNC_2(VAR_1);

 FUNC_0(VAR_1->p_dtrace_lazy_dofs == ((void*)0) || VAR_1->p_dtrace_helpers == ((void*)0));

 dof_ioctl_data_t* VAR_2 = VAR_1->p_dtrace_lazy_dofs;
 VAR_1->p_dtrace_lazy_dofs = ((void*)0);

 FUNC_3(VAR_1);
 FUNC_6(&VAR_0);

 if (VAR_2) {
  FUNC_4(VAR_2, FUNC_1(VAR_2->dofiod_count));
 }
}
