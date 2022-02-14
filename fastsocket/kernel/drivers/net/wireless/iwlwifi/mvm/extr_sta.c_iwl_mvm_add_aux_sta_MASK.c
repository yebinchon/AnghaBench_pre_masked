
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int aux_sta; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,int *,int *,int ,int ) ;
 int FUNC_1 (struct iwl_mvm*,int *,int ) ;
 int FUNC_2 (struct iwl_mvm*,int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct iwl_mvm *VAR_1)
{
 int VAR_2;

 FUNC_3(&VAR_1->mutex);


 VAR_2 = FUNC_1(VAR_1, &VAR_1->aux_sta, 0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1, &VAR_1->aux_sta, ((void*)0),
      VAR_0, 0);

 if (VAR_2)
  FUNC_2(VAR_1, &VAR_1->aux_sta);
 return VAR_2;
}
