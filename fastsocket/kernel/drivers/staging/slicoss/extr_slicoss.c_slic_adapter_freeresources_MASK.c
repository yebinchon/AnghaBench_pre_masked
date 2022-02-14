
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct adapter {scalar_t__ rcv_unicasts; scalar_t__ rcv_multicasts; scalar_t__ rcv_broadcasts; scalar_t__ xmit_completes; scalar_t__ num_isrs; scalar_t__ upr_interrupts; scalar_t__ linkevent_interrupts; scalar_t__ xmit_interrupts; scalar_t__ rcv_interrupts; scalar_t__ error_interrupts; int stats; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct adapter*) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->stats, 0, sizeof(struct net_device_stats));
 VAR_0->error_interrupts = 0;
 VAR_0->rcv_interrupts = 0;
 VAR_0->xmit_interrupts = 0;
 VAR_0->linkevent_interrupts = 0;
 VAR_0->upr_interrupts = 0;
 VAR_0->num_isrs = 0;
 VAR_0->xmit_completes = 0;
 VAR_0->rcv_broadcasts = 0;
 VAR_0->rcv_multicasts = 0;
 VAR_0->rcv_unicasts = 0;
}
