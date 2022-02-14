
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rc_dev {struct mceusb_dev* priv; } ;
struct TYPE_2__ {scalar_t__ tx_mask_normal; } ;
struct mceusb_dev {int tx_mask; TYPE_1__ flags; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct rc_dev *VAR_1, u32 VAR_2)
{
 struct mceusb_dev *VAR_3 = VAR_1->priv;

 if (VAR_3->flags.tx_mask_normal)
  VAR_3->tx_mask = VAR_2;
 else
  VAR_3->tx_mask = (VAR_2 != VAR_0 ?
    VAR_2 ^ VAR_0 : VAR_2) << 1;

 return 0;
}
