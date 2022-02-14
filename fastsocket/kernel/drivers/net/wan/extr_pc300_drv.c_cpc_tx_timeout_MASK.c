
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int tx_aborted_errors; int tx_errors; } ;
struct net_device {int trans_start; int name; TYPE_1__ stats; } ;
struct TYPE_11__ {scalar_t__ chan; } ;
typedef TYPE_3__ pc300dev_t ;
struct TYPE_12__ {int channel; scalar_t__ card; } ;
typedef TYPE_4__ pc300ch_t ;
struct TYPE_10__ {scalar_t__ type; scalar_t__ cpld_reg2; scalar_t__ falcbase; scalar_t__ scabase; } ;
struct TYPE_13__ {TYPE_2__ hw; } ;
typedef TYPE_5__ pc300_t ;
struct TYPE_14__ {scalar_t__ priv; } ;


 int FUNC_0 (TYPE_5__*,unsigned long) ;
 int FUNC_1 (TYPE_5__*,unsigned long) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 TYPE_6__* FUNC_4 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_5)
{
 pc300dev_t *VAR_6 = (pc300dev_t *) FUNC_4(VAR_5)->priv;
 pc300ch_t *VAR_7 = (pc300ch_t *) VAR_6->chan;
 pc300_t *VAR_8 = (pc300_t *) VAR_7->card;
 int VAR_9 = VAR_7->channel;
 unsigned long VAR_10;
 u8 VAR_11;

 VAR_5->stats.tx_errors++;
 VAR_5->stats.tx_aborted_errors++;
 FUNC_0(VAR_8, VAR_10);
 if ((VAR_11 = FUNC_2(VAR_8->hw.scabase + VAR_2)) != 0) {
  FUNC_6("%s: ILAR=0x%x\n", VAR_5->name, VAR_11);
  FUNC_3(VAR_8->hw.scabase + VAR_2, VAR_11);
  FUNC_3(VAR_8->hw.scabase + VAR_1, 0x80);
 }
 if (VAR_8->hw.type == VAR_3) {
  FUNC_3(VAR_8->hw.falcbase + VAR_8->hw.cpld_reg2,
      FUNC_2(VAR_8->hw.falcbase + VAR_8->hw.cpld_reg2) &
      ~(VAR_0 << (2 * VAR_9)));
 }
 VAR_5->trans_start = VAR_4;
 FUNC_1(VAR_8, VAR_10);
 FUNC_5(VAR_5);
}
