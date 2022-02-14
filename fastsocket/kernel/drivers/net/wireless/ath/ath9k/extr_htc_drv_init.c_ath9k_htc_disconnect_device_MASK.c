
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct htc_target {TYPE_2__* drv_priv; } ;
struct TYPE_5__ {int hw; TYPE_1__* ah; } ;
struct TYPE_4__ {int ah_flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct htc_target *VAR_1, bool VAR_2)
{
 if (VAR_1->drv_priv) {


  if (VAR_2)
   VAR_1->drv_priv->ah->ah_flags |= VAR_0;

  FUNC_0(VAR_1->drv_priv);
  FUNC_1(VAR_1->drv_priv);
  FUNC_2(VAR_1->drv_priv->hw);
 }
}
