
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int status; int ieee_rates; int ieee_channels; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct il_priv *VAR_1)
{
 FUNC_1(VAR_1->ieee_channels);
 FUNC_1(VAR_1->ieee_rates);
 FUNC_0(VAR_0, &VAR_1->status);
}
