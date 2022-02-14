
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int dummy; } ;
struct iwl_host_cmd {int flags; int len; int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct iwl_priv*,struct iwl_host_cmd*) ;

__attribute__((used)) static int FUNC_3(struct iwl_priv *VAR_2)
{
 int VAR_3;
 struct iwl_host_cmd VAR_4 = {
  .id = VAR_1,
  .len = 0 ,
  .flags = VAR_0,
 };

 VAR_3 = FUNC_2(VAR_2, &VAR_4);
 if (VAR_3)
  FUNC_1(VAR_2, "echo testing fail: 0X%x\n", VAR_3);
 else
  FUNC_0(VAR_2, "echo testing pass\n");
 return VAR_3;
}
