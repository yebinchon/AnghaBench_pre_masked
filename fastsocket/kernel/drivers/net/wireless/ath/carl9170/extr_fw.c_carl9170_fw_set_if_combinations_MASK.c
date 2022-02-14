
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int vif_num; } ;
struct ar9170 {TYPE_4__* if_combs; TYPE_3__* hw; TYPE_4__* if_comb_limits; TYPE_1__ fw; } ;
struct TYPE_8__ {int max; int num_different_channels; int max_interfaces; void* n_limits; struct TYPE_8__* limits; int types; } ;
struct TYPE_7__ {TYPE_2__* wiphy; } ;
struct TYPE_6__ {void* n_iface_combinations; TYPE_4__* iface_combinations; } ;


 void* FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_1(struct ar9170 *VAR_0,
         u16 VAR_1)
{
 if (VAR_0->fw.vif_num < 2)
  return;

 VAR_0->if_comb_limits[0].max = VAR_0->fw.vif_num;
 VAR_0->if_comb_limits[0].types = VAR_1;

 VAR_0->if_combs[0].num_different_channels = 1;
 VAR_0->if_combs[0].max_interfaces = VAR_0->fw.vif_num;
 VAR_0->if_combs[0].limits = VAR_0->if_comb_limits;
 VAR_0->if_combs[0].n_limits = FUNC_0(VAR_0->if_comb_limits);

 VAR_0->hw->wiphy->iface_combinations = VAR_0->if_combs;
 VAR_0->hw->wiphy->n_iface_combinations = FUNC_0(VAR_0->if_combs);
}
