
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ base_vfmprc; scalar_t__ vfmprc; int last_vfmprc; int vfgotc; int last_vfgotc; int vfgorc; int last_vfgorc; scalar_t__ vfgptc; int last_vfgptc; scalar_t__ vfgprc; int last_vfgprc; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {TYPE_3__ stats; TYPE_2__* netdev; int link_up; struct ixgbe_hw hw; } ;
struct TYPE_4__ {scalar_t__ multicast; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ) ;

void FUNC_2(struct ixgbevf_adapter *VAR_7)
{
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;

 if (!VAR_7->link_up)
  return;

 FUNC_0(VAR_4, VAR_7->stats.last_vfgprc,
    VAR_7->stats.vfgprc);
 FUNC_0(VAR_5, VAR_7->stats.last_vfgptc,
    VAR_7->stats.vfgptc);
 FUNC_1(VAR_0, VAR_1,
    VAR_7->stats.last_vfgorc,
    VAR_7->stats.vfgorc);
 FUNC_1(VAR_2, VAR_3,
    VAR_7->stats.last_vfgotc,
    VAR_7->stats.vfgotc);
 FUNC_0(VAR_6, VAR_7->stats.last_vfmprc,
    VAR_7->stats.vfmprc);


 VAR_7->netdev->stats.multicast = VAR_7->stats.vfmprc -
  VAR_7->stats.base_vfmprc;
}
