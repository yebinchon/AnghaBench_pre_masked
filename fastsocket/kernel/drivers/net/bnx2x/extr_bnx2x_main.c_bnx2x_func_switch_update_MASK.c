
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_func_switch_update_params {int suspend; } ;
struct TYPE_2__ {struct bnx2x_func_switch_update_params switch_update; } ;
struct bnx2x_func_state_params {int cmd; int * f_obj; int ramrod_flags; TYPE_1__ params; int * member_0; } ;
struct bnx2x {int func_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_func_state_params*) ;

__attribute__((used)) static inline int FUNC_2(struct bnx2x *VAR_3, int VAR_4)
{
 int VAR_5;
 struct bnx2x_func_state_params VAR_6 = {((void*)0)};
 struct bnx2x_func_switch_update_params *VAR_7 =
  &VAR_6.params.switch_update;


 FUNC_0(VAR_1, &VAR_6.ramrod_flags);
 FUNC_0(VAR_2, &VAR_6.ramrod_flags);

 VAR_6.f_obj = &VAR_3->func_obj;
 VAR_6.cmd = VAR_0;


 VAR_7->suspend = VAR_4;

 VAR_5 = FUNC_1(VAR_3, &VAR_6);

 return VAR_5;
}
