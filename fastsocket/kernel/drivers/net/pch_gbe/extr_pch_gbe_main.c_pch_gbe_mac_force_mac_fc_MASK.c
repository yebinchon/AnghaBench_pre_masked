
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pch_gbe_mac_info {int fc; int tx_fc_enable; scalar_t__ link_duplex; } ;
struct pch_gbe_hw {TYPE_1__* reg; struct pch_gbe_mac_info mac; } ;
typedef int s32 ;
struct TYPE_2__ {int RX_FCTRL; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (char*) ;

s32 FUNC_4(struct pch_gbe_hw *VAR_3)
{
 struct pch_gbe_mac_info *VAR_4 = &VAR_3->mac;
 u32 VAR_5;

 FUNC_2("mac->fc = %u\n", VAR_4->fc);

 VAR_5 = FUNC_0(&VAR_3->reg->RX_FCTRL);

 switch (VAR_4->fc) {
 case 130:
  VAR_5 &= ~VAR_2;
  VAR_4->tx_fc_enable = 0;
  break;
 case 129:
  VAR_5 |= VAR_2;
  VAR_4->tx_fc_enable = 0;
  break;
 case 128:
  VAR_5 &= ~VAR_2;
  VAR_4->tx_fc_enable = 1;
  break;
 case 131:
  VAR_5 |= VAR_2;
  VAR_4->tx_fc_enable = 1;
  break;
 default:
  FUNC_3("Flow control param set incorrectly\n");
  return -VAR_1;
 }
 if (VAR_4->link_duplex == VAR_0)
  VAR_5 &= ~VAR_2;
 FUNC_1(VAR_5, &VAR_3->reg->RX_FCTRL);
 FUNC_2("RX_FCTRL reg : 0x%08x  mac->tx_fc_enable : %d\n",
   FUNC_0(&VAR_3->reg->RX_FCTRL), VAR_4->tx_fc_enable);
 return 0;
}
