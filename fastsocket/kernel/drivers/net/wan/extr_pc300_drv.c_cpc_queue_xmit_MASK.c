
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int * data; } ;
struct TYPE_11__ {int tx_dropped; int tx_errors; int tx_carrier_errors; } ;
struct net_device {int trans_start; int name; TYPE_1__ stats; } ;
struct TYPE_14__ {scalar_t__ trace_on; scalar_t__ chan; } ;
typedef TYPE_4__ pc300dev_t ;
struct TYPE_15__ {int channel; int tx_next_bd; scalar_t__ card; } ;
typedef TYPE_5__ pc300ch_t ;
struct TYPE_13__ {scalar_t__ type; scalar_t__ cpld_reg2; scalar_t__ falcbase; scalar_t__ scabase; } ;
struct TYPE_16__ {TYPE_3__ hw; TYPE_2__* chan; } ;
typedef TYPE_6__ pc300_t ;
struct TYPE_17__ {scalar_t__ priv; } ;
struct TYPE_12__ {int nfree_tx_bd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,unsigned long) ;
 int FUNC_1 (TYPE_6__*,unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct net_device*,struct sk_buff*,char) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 TYPE_8__* FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (TYPE_6__*,int,int *,int) ;
 int VAR_9 ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (char*,...) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_10, struct net_device *VAR_11)
{
 pc300dev_t *VAR_12 = (pc300dev_t *) FUNC_11(VAR_11)->priv;
 pc300ch_t *VAR_13 = (pc300ch_t *) VAR_12->chan;
 pc300_t *VAR_14 = (pc300_t *) VAR_13->card;
 int VAR_15 = VAR_13->channel;
 unsigned long VAR_16;




 if (!FUNC_14(VAR_11)) {

  FUNC_10(VAR_10);
  VAR_11->stats.tx_errors++;
  VAR_11->stats.tx_carrier_errors++;
  return 0;
 } else if (FUNC_6(VAR_14->hw.scabase + FUNC_4(VAR_7, VAR_15)) & VAR_8) {
  FUNC_17("%s: DCD is OFF. Going administrative down.\n", VAR_11->name);
  VAR_11->stats.tx_errors++;
  VAR_11->stats.tx_carrier_errors++;
  FUNC_10(VAR_10);
  FUNC_13(VAR_11);
  FUNC_0(VAR_14, VAR_16);
  FUNC_8(VAR_14->hw.scabase + FUNC_4(VAR_0, VAR_15), VAR_1);
  if (VAR_14->hw.type == VAR_6) {
   FUNC_8(VAR_14->hw.falcbase + VAR_14->hw.cpld_reg2,
       FUNC_6(VAR_14->hw.falcbase + VAR_14->hw.cpld_reg2) &
          ~(VAR_3 << (2 * VAR_15)));
  }
  FUNC_1(VAR_14, VAR_16);
  FUNC_16(VAR_11);
  return 0;
 }


 if (FUNC_12(VAR_14, VAR_15, (u8 *)VAR_10->data, VAR_10->len) != 0) {

  FUNC_15(VAR_11);
  FUNC_10(VAR_10);
  VAR_11->stats.tx_errors++;
  VAR_11->stats.tx_dropped++;
  return 0;
 }







 if (VAR_12->trace_on) {
  FUNC_7(VAR_11, VAR_10, 'T');
 }
 VAR_11->trans_start = VAR_9;


 FUNC_0(VAR_14, VAR_16);

 if (VAR_14->chan[VAR_15].nfree_tx_bd <= 1) {

  FUNC_15(VAR_11);
 }
 FUNC_9(VAR_14->hw.scabase + FUNC_3(VAR_5, VAR_15),
     FUNC_5(VAR_15, VAR_13->tx_next_bd));
 FUNC_8(VAR_14->hw.scabase + FUNC_4(VAR_0, VAR_15), VAR_2);
 FUNC_8(VAR_14->hw.scabase + FUNC_2(VAR_15), VAR_4);
 if (VAR_14->hw.type == VAR_6) {
  FUNC_8(VAR_14->hw.falcbase + VAR_14->hw.cpld_reg2,
      FUNC_6(VAR_14->hw.falcbase + VAR_14->hw.cpld_reg2) |
      (VAR_3 << (2 * VAR_15)));
 }
 FUNC_1(VAR_14, VAR_16);
 FUNC_10(VAR_10);

 return 0;
}
