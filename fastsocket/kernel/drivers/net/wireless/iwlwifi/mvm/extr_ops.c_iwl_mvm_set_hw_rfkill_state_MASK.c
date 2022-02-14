
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_op_mode {int dummy; } ;
struct iwl_mvm {TYPE_1__* hw; int status; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 struct iwl_mvm* FUNC_0 (struct iwl_op_mode*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct iwl_op_mode *VAR_1, bool VAR_2)
{
 struct iwl_mvm *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2)
  FUNC_2(VAR_0, &VAR_3->status);
 else
  FUNC_1(VAR_0, &VAR_3->status);

 FUNC_3(VAR_3->hw->wiphy, VAR_2);
}
