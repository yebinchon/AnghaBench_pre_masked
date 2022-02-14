
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* p_dtrace_lazy_dofs; int * p_dtrace_helpers; int p_dtrace_sprlock; } ;
typedef TYPE_1__ proc_t ;
struct TYPE_12__ {int dofiod_count; } ;
typedef TYPE_2__ dof_ioctl_data_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,size_t) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_2__* FUNC_7 (size_t,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(proc_t *VAR_7, proc_t *VAR_8)
{
 FUNC_2(&VAR_6, VAR_3);
 FUNC_2(&VAR_7->p_dtrace_sprlock, VAR_3);
 FUNC_2(&VAR_8->p_dtrace_sprlock, VAR_3);

 FUNC_8(&VAR_5);
 FUNC_5(VAR_7);





 FUNC_0(VAR_7->p_dtrace_lazy_dofs == ((void*)0) || VAR_7->p_dtrace_helpers == ((void*)0));



 FUNC_0(VAR_8->p_dtrace_lazy_dofs == ((void*)0) && VAR_8->p_dtrace_helpers == ((void*)0));

 dof_ioctl_data_t* VAR_9 = VAR_7->p_dtrace_lazy_dofs;
 dof_ioctl_data_t* VAR_10 = ((void*)0);
 if (VAR_9) {
  size_t VAR_11 = FUNC_1(VAR_9->dofiod_count);
  VAR_10 = FUNC_7(VAR_11, VAR_2);
  FUNC_3(VAR_9, VAR_10, VAR_11);
 }

 FUNC_6(VAR_7);

 if (VAR_10) {
  FUNC_5(VAR_8);
  VAR_8->p_dtrace_lazy_dofs = VAR_10;
  FUNC_6(VAR_8);







  if (VAR_4 == VAR_0) {
   FUNC_4(VAR_8);
  }
  FUNC_9(&VAR_5);

  return VAR_1;
 }
 FUNC_9(&VAR_5);

 return 0;
}
