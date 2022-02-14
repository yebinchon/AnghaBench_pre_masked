
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int status; int mutex; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct iwl_priv*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct iwl_priv *VAR_4)
{
 FUNC_3(&VAR_4->mutex);

 if (!FUNC_4(VAR_0, &VAR_4->status)) {
  FUNC_0(VAR_4, "Forcing scan end while not scanning\n");
  return;
 }

 FUNC_0(VAR_4, "Forcing scan end\n");
 FUNC_1(VAR_0, &VAR_4->status);
 FUNC_1(VAR_3, &VAR_4->status);
 FUNC_1(VAR_1, &VAR_4->status);
 FUNC_1(VAR_2, &VAR_4->status);
 FUNC_2(VAR_4, 1);
}
