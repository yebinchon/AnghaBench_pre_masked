
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*) ;
 int FUNC_1 (struct iwl_priv*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct iwl_priv *VAR_3 = (struct iwl_priv *)VAR_2;

 if (FUNC_2(VAR_1, &VAR_3->status))
  return;


 if (!FUNC_0(VAR_3))
  return;

 FUNC_1(VAR_3, VAR_0, 0);
}
