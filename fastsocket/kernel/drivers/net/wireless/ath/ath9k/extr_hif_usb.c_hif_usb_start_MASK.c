
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_lock; int flags; } ;
struct hif_device_usb {TYPE_1__ tx; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
 struct hif_device_usb *VAR_3 = (struct hif_device_usb *)VAR_2;
 unsigned long VAR_4;

 VAR_3->flags |= VAR_0;

 FUNC_0(&VAR_3->tx.tx_lock, VAR_4);
 VAR_3->tx.flags &= ~VAR_1;
 FUNC_1(&VAR_3->tx.tx_lock, VAR_4);
}
