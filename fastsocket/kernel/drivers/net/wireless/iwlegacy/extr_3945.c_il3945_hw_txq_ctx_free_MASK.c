
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_txq_num; } ;
struct il_priv {TYPE_1__ hw_params; scalar_t__ txq; } ;


 int VAR_0 ;
 int FUNC_0 (struct il_priv*) ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (struct il_priv*,int) ;

void
FUNC_3(struct il_priv *VAR_1)
{
 int VAR_2;


 if (VAR_1->txq)
  for (VAR_2 = 0; VAR_2 < VAR_1->hw_params.max_txq_num; VAR_2++)
   if (VAR_2 == VAR_0)
    FUNC_0(VAR_1);
   else
    FUNC_2(VAR_1, VAR_2);


 FUNC_1(VAR_1);
}
