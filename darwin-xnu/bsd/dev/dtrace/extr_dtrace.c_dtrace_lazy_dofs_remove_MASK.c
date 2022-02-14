
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* p_dtrace_lazy_dofs; int * p_dtrace_helpers; } ;
typedef TYPE_1__ proc_t ;
struct TYPE_11__ {int dofiod_count; TYPE_8__* dofiod_helpers; } ;
typedef TYPE_2__ dof_ioctl_data_t ;
typedef int dof_helper_t ;
struct TYPE_12__ {scalar_t__ dofhp_dof; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_8__*,TYPE_8__*,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_2__* FUNC_5 (size_t,int ) ;
 int FUNC_6 (TYPE_2__*,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(proc_t *VAR_8, int VAR_9)
{
 int VAR_10 = VAR_3;

 FUNC_7(&VAR_7);

 FUNC_0(VAR_8->p_dtrace_lazy_dofs == ((void*)0) || VAR_8->p_dtrace_helpers == ((void*)0));
 FUNC_0(VAR_6 != VAR_1);




 if (VAR_6 == VAR_0 && (VAR_8->p_dtrace_helpers == ((void*)0))) {
  FUNC_3(VAR_8);

  dof_ioctl_data_t* VAR_11 = VAR_8->p_dtrace_lazy_dofs;

  if (VAR_11) {
   int VAR_12, VAR_13 = VAR_11->dofiod_count;
   for (VAR_12=0; VAR_12<VAR_13; VAR_12++) {
    if ((int)VAR_11->dofiod_helpers[VAR_12].dofhp_dof == VAR_9) {
     dof_ioctl_data_t* VAR_14 = ((void*)0);




     if (VAR_13 > 1) {
      int VAR_15 = VAR_13 - 1;
      size_t VAR_16 = FUNC_1(VAR_15);

      VAR_14 = FUNC_5(VAR_16, VAR_5);
      VAR_14->dofiod_count = VAR_15;




      if (VAR_12 > 0) {
       FUNC_2(&VAR_11->dofiod_helpers[0],
             &VAR_14->dofiod_helpers[0],
             VAR_12 * sizeof(dof_helper_t));
      }

      if (VAR_12 < VAR_13-1) {
       FUNC_2(&VAR_11->dofiod_helpers[VAR_12+1],
             &VAR_14->dofiod_helpers[VAR_12],
             (VAR_13 - VAR_12 - 1) * sizeof(dof_helper_t));
      }
     }

     FUNC_6(VAR_11, FUNC_1(VAR_13));

     VAR_8->p_dtrace_lazy_dofs = VAR_14;

     VAR_10 = VAR_4;

     break;
    }
   }
  }
  FUNC_4(VAR_8);
 } else {
  VAR_10 = VAR_2;
 }

 FUNC_8(&VAR_7);

 return VAR_10;
}
