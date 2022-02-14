
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ up; } ;
struct ns83820 {int IMR_cache; int misc_lock; TYPE_2__* pci_dev; TYPE_1__ rx_info; scalar_t__ base; int tx_watchdog; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ns83820* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ns83820*) ;
 int FUNC_3 (struct ns83820*) ;
 int FUNC_4 (struct ns83820*,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8)
{
 struct ns83820 *VAR_9 = FUNC_0(VAR_8);


 FUNC_1(&VAR_9->tx_watchdog);


 FUNC_9(0, VAR_9->base + VAR_2);
 FUNC_9(0, VAR_9->base + VAR_1);
 FUNC_5(VAR_9->base + VAR_1);

 VAR_9->rx_info.up = 0;
 FUNC_8(VAR_9->pci_dev->irq);

 FUNC_4(VAR_9, VAR_0);

 FUNC_8(VAR_9->pci_dev->irq);

 FUNC_6(&VAR_9->misc_lock);
 VAR_9->IMR_cache &= ~(VAR_7 | VAR_5 | VAR_4 | VAR_3 | VAR_6);
 FUNC_7(&VAR_9->misc_lock);

 FUNC_2(VAR_9);
 FUNC_3(VAR_9);

 return 0;
}
