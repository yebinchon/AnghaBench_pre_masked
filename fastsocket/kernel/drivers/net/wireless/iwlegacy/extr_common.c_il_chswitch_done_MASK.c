
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int vif; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void
FUNC_3(struct il_priv *VAR_2, bool VAR_3)
{
 if (FUNC_2(VAR_1, &VAR_2->status))
  return;

 if (FUNC_1(VAR_0, &VAR_2->status))
  FUNC_0(VAR_2->vif, VAR_3);
}
