
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipw_priv {int config; scalar_t__ nic_type; int lock; int led_association_on; int led_ofdm_off; int led_ofdm_on; TYPE_1__* assoc_network; int led_association_off; } ;
struct TYPE_2__ {scalar_t__ mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int FUNC_1 (struct ipw_priv*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipw_priv*,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ipw_priv *VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7;


 if (VAR_5->config & VAR_0 ||
     VAR_5->nic_type != VAR_1 || !VAR_5->assoc_network)
  return;

 FUNC_4(&VAR_5->lock, VAR_6);

 VAR_7 = FUNC_1(VAR_5, VAR_4);
 if (VAR_5->assoc_network->mode == VAR_2) {
  VAR_7 |= VAR_5->led_ofdm_on;
  VAR_7 &= VAR_5->led_association_off;
  FUNC_0("Mode LED On: 802.11a\n");
 } else if (VAR_5->assoc_network->mode == VAR_3) {
  VAR_7 |= VAR_5->led_ofdm_on;
  VAR_7 |= VAR_5->led_association_on;
  FUNC_0("Mode LED On: 802.11g\n");
 } else {
  VAR_7 &= VAR_5->led_ofdm_off;
  VAR_7 |= VAR_5->led_association_on;
  FUNC_0("Mode LED On: 802.11b\n");
 }

 VAR_7 = FUNC_2(VAR_7);

 FUNC_0("Reg: 0x%08X\n", VAR_7);
 FUNC_3(VAR_5, VAR_4, VAR_7);

 FUNC_5(&VAR_5->lock, VAR_6);
}
