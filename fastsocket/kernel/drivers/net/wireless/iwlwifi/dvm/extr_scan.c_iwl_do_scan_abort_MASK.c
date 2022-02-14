
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int status; int mutex; } ;


 int FUNC_0 (struct iwl_priv*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_priv*) ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct iwl_priv *VAR_2)
{
 int VAR_3;

 FUNC_3(&VAR_2->mutex);

 if (!FUNC_5(VAR_0, &VAR_2->status)) {
  FUNC_0(VAR_2, "Not performing scan to abort\n");
  return;
 }

 if (FUNC_4(VAR_1, &VAR_2->status)) {
  FUNC_0(VAR_2, "Scan abort in progress\n");
  return;
 }

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2, "Send scan abort failed %d\n", VAR_3);
  FUNC_1(VAR_2);
 } else
  FUNC_0(VAR_2, "Successfully send scan abort\n");
}
