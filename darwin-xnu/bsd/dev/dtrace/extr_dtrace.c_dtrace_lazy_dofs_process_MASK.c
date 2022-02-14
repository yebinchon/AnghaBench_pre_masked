
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* p_dtrace_helpers; TYPE_3__* p_dtrace_lazy_dofs; } ;
typedef TYPE_1__ proc_t ;
struct TYPE_15__ {int dthps_generation; } ;
typedef TYPE_2__ dtrace_helpers_t ;
struct TYPE_16__ {unsigned int dofiod_count; TYPE_4__* dofiod_helpers; } ;
typedef TYPE_3__ dof_ioctl_data_t ;
struct TYPE_17__ {scalar_t__ dofhp_dof; int dofhp_addr; } ;
typedef TYPE_4__ dof_helper_t ;
typedef int dof_hdr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (TYPE_1__*,int,int*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_1__*,int *,TYPE_4__*) ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(proc_t *VAR_4) {





 FUNC_6(VAR_4);


 FUNC_0(VAR_4->p_dtrace_lazy_dofs == ((void*)0) || VAR_4->p_dtrace_helpers == ((void*)0));
 FUNC_0(VAR_1 == VAR_0);

 dof_ioctl_data_t* VAR_5 = VAR_4->p_dtrace_lazy_dofs;
 VAR_4->p_dtrace_lazy_dofs = ((void*)0);

 FUNC_7(VAR_4);
 FUNC_9(&VAR_3);



 if (VAR_5 != ((void*)0)) {
  unsigned int VAR_6;
  int VAR_7;

  for (VAR_6=0; VAR_6<VAR_5->dofiod_count; VAR_6++) {



   FUNC_0(VAR_6 >= (VAR_5->dofiod_count - 1) || VAR_5->dofiod_helpers[VAR_6].dofhp_dof < VAR_5->dofiod_helpers[VAR_6+1].dofhp_dof);

   dof_helper_t *VAR_8 = &VAR_5->dofiod_helpers[VAR_6];




   int VAR_9 = VAR_8->dofhp_dof;
   VAR_8->dofhp_dof = VAR_8->dofhp_addr;

   dof_hdr_t *VAR_10 = FUNC_2(VAR_4, VAR_8->dofhp_dof, &VAR_7);

   if (VAR_10 != ((void*)0)) {
    dtrace_helpers_t *VAR_11;

    FUNC_9(&VAR_2);




    if ((VAR_11 = VAR_4->p_dtrace_helpers) == ((void*)0))
     VAR_11 = FUNC_5(VAR_4);






    if (VAR_11->dthps_generation <= VAR_9) {
     VAR_11->dthps_generation = VAR_9;





     if ((VAR_7 = FUNC_4(VAR_4, VAR_10, VAR_8)) != VAR_9) {
      FUNC_3(((void*)0), "returned value did not match expected generation");
     }
    }

    FUNC_10(&VAR_2);
   }
  }
  FUNC_10(&VAR_3);
  FUNC_8(VAR_5, FUNC_1(VAR_5->dofiod_count));
 } else {
  FUNC_10(&VAR_3);
 }
}
