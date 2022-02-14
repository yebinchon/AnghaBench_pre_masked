
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_6__ {int * pxofftxc; int * pxoffrxc; } ;
struct TYPE_4__ {int pfc_tcs; } ;
struct TYPE_5__ {TYPE_1__ num_tcs; } ;
struct ixgbe_adapter {TYPE_3__ stats; TYPE_2__ dcb_cfg; struct ieee_pfc* ixgbe_ieee_pfc; } ;
struct ieee_pfc {int * indications; int * requests; int delay; int mbc; int pfc_en; int pfc_cap; } ;


 int VAR_0 ;
 struct ixgbe_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
       struct ieee_pfc *VAR_2)
{
 struct ixgbe_adapter *VAR_3 = FUNC_0(VAR_1);
 struct ieee_pfc *VAR_4 = VAR_3->ixgbe_ieee_pfc;
 int VAR_5;

 VAR_2->pfc_cap = VAR_3->dcb_cfg.num_tcs.pfc_tcs;


 if (!VAR_4)
  return 0;

 VAR_2->pfc_en = VAR_4->pfc_en;
 VAR_2->mbc = VAR_4->mbc;
 VAR_2->delay = VAR_4->delay;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_2->requests[VAR_5] = VAR_3->stats.pxoffrxc[VAR_5];
  VAR_2->indications[VAR_5] = VAR_3->stats.pxofftxc[VAR_5];
 }

 return 0;
}
