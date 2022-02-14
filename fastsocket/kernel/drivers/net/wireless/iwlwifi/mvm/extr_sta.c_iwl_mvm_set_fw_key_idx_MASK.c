
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int fw_key_table; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iwl_mvm *VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_2->mutex);

 VAR_3 = FUNC_1(VAR_2->fw_key_table, VAR_1);

 if (VAR_3 == VAR_1)
  return VAR_0;

 FUNC_0(VAR_3, VAR_2->fw_key_table);

 return VAR_3;
}
