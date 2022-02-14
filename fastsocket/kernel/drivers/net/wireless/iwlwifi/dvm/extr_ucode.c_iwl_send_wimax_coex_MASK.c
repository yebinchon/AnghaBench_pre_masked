
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_wimax_coex_cmd {int dummy; } ;
struct iwl_priv {int dummy; } ;
typedef int coex_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,int ,int ,int,struct iwl_wimax_coex_cmd*) ;
 int FUNC_1 (struct iwl_wimax_coex_cmd*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct iwl_priv *VAR_2)
{
 struct iwl_wimax_coex_cmd VAR_3;


 FUNC_1(&VAR_3, 0, sizeof(VAR_3));

 return FUNC_0(VAR_2,
    VAR_1, VAR_0,
    sizeof(VAR_3), &VAR_3);
}
