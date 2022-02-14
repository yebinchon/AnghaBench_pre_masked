
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int trans; int mutex; } ;
struct iwl_host_cmd {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct iwl_host_cmd*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct iwl_mvm *VAR_3, struct iwl_host_cmd *VAR_4)
{
 int VAR_5;






 if (!(VAR_4->flags & VAR_0))
  FUNC_1(&VAR_3->mutex);

 VAR_5 = FUNC_0(VAR_3->trans, VAR_4);






 if (VAR_4->flags & VAR_1)
  return VAR_5;


 if (!VAR_5 || VAR_5 == -VAR_2)
  return 0;
 return VAR_5;
}
