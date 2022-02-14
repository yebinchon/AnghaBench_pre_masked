
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_rxon_cmd {int filter_flags; } ;
struct il_priv {struct il_rxon_cmd staging; } ;


 int VAR_0 ;

void
FUNC_0(struct il_priv *VAR_1, int VAR_2)
{
 struct il_rxon_cmd *VAR_3 = &VAR_1->staging;

 if (VAR_2)
  VAR_3->filter_flags &= ~VAR_0;
 else
  VAR_3->filter_flags |= VAR_0;

}
