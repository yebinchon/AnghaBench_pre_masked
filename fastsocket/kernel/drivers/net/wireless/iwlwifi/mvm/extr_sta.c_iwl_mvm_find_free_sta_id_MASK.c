
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int mutex; int * fw_id_to_mac_id; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_2)
{
 int VAR_3;

 FUNC_0(FUNC_4(VAR_1, &VAR_2->status));

 FUNC_1(&VAR_2->mutex);


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (!FUNC_3(VAR_2->fw_id_to_mac_id[VAR_3],
            FUNC_2(&VAR_2->mutex)))
   return VAR_3;
 return VAR_0;
}
