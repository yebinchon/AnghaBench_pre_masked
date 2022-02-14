
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nes_device {struct nes_adapter* nesadapter; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct nes_adapter {TYPE_1__ lc_timer; int phy_lock; scalar_t__* link_interrupt_count; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(unsigned long VAR_2)
{
 unsigned long VAR_3;
 struct nes_device *VAR_4 = (struct nes_device *)VAR_2;
 struct nes_adapter *VAR_5 = VAR_4->nesadapter;

 FUNC_1(&VAR_5->phy_lock, VAR_3);
    VAR_5->link_interrupt_count[0] = 0;
    VAR_5->link_interrupt_count[1] = 0;
    VAR_5->link_interrupt_count[2] = 0;
    VAR_5->link_interrupt_count[3] = 0;
 FUNC_2(&VAR_5->phy_lock, VAR_3);

 VAR_5->lc_timer.expires = VAR_1 + 3600 * VAR_0;
 FUNC_0(&VAR_5->lc_timer);
}
