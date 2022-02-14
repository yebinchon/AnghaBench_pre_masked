
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nes_vnic_mgt {int rx_skbs_needed; int rx_skb_timer_running; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct nes_vnic_mgt*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct nes_vnic_mgt *VAR_1 = (struct nes_vnic_mgt *)VAR_0;

 FUNC_1(&VAR_1->rx_skb_timer_running, 0);
 if (FUNC_0(&VAR_1->rx_skbs_needed))
  FUNC_2(VAR_1);
}
