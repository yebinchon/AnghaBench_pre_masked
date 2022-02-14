
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mpc_int_t ;
struct TYPE_3__ {int * Y_R; int * V_R; int * Y_L; int * V_L; } ;
typedef TYPE_1__ mpc_decoder ;
typedef int MPC_SAMPLE_FORMAT ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int ,int) ;

void
FUNC_2(mpc_decoder* VAR_1, MPC_SAMPLE_FORMAT* VAR_2, mpc_int_t VAR_3)
{

    FUNC_0(&VAR_1->V_L[VAR_0], VAR_1->V_L, 960 * sizeof *VAR_1->V_L);
 FUNC_1(VAR_2, &VAR_1->V_L[VAR_0], VAR_1->Y_L[0], VAR_3);


 if (VAR_3 > 1) {
  FUNC_0(&VAR_1->V_R[VAR_0], VAR_1->V_R, 960 * sizeof *VAR_1->V_R);
  FUNC_1(VAR_2 + 1, &VAR_1->V_R[VAR_0], VAR_1->Y_R[0], VAR_3);
 }
}
