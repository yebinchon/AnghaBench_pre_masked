
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int collisions; int late_collisions; int excessive_collisions; int tx_deferred; int first_collision; int tx_uflo; int max_pkt_error; int norcvbuf; int rx_ov_flow; int crc_err; int other_errors; int length_err; int alignment_err; int code_violations; } ;
struct et131x_adapter {TYPE_7__ Stats; TYPE_4__* regs; } ;
struct TYPE_14__ {scalar_t__ rdrp; scalar_t__ rovr; scalar_t__ rcde; scalar_t__ rfrg; scalar_t__ rflr; scalar_t__ raln; scalar_t__ rfcs; } ;
struct TYPE_18__ {TYPE_5__ bits; void* value; } ;
struct TYPE_15__ {scalar_t__ tncl; scalar_t__ tlcl; scalar_t__ tmcl; scalar_t__ tdfr; scalar_t__ tscl; scalar_t__ tund; scalar_t__ tovr; } ;
struct TYPE_17__ {TYPE_6__ bits; void* value; } ;
struct TYPE_11__ {int value; } ;
struct TYPE_10__ {int value; } ;
struct TYPE_12__ {TYPE_2__ Carry2; TYPE_1__ Carry1; } ;
struct TYPE_13__ {TYPE_3__ macStat; } ;
typedef TYPE_8__ MAC_STAT_REG_2_t ;
typedef TYPE_9__ MAC_STAT_REG_1_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (void*,int *) ;

void FUNC_2(struct et131x_adapter *VAR_2)
{
 MAC_STAT_REG_1_t VAR_3;
 MAC_STAT_REG_2_t VAR_4;




 VAR_3 = FUNC_0(&VAR_2->regs->macStat.Carry1.value);
 VAR_4 = FUNC_0(&VAR_2->regs->macStat.Carry2.value);

 FUNC_1(VAR_3, &VAR_2->regs->macStat.Carry1.value);
 FUNC_1(VAR_4, &VAR_2->regs->macStat.Carry2.value);







 if (VAR_3)
  VAR_2->Stats.code_violations += VAR_1;
 if (VAR_3)
  VAR_2->Stats.alignment_err += VAR_0;
 if (VAR_3)
  VAR_2->Stats.length_err += VAR_1;
 if (VAR_3)
  VAR_2->Stats.other_errors += VAR_1;
 if (VAR_3)
  VAR_2->Stats.crc_err += VAR_1;
 if (VAR_3)
  VAR_2->Stats.rx_ov_flow += VAR_1;
 if (VAR_3)
  VAR_2->Stats.norcvbuf += VAR_1;
 if (VAR_4)
  VAR_2->Stats.max_pkt_error += VAR_0;
 if (VAR_4)
  VAR_2->Stats.tx_uflo += VAR_0;
 if (VAR_4)
  VAR_2->Stats.first_collision += VAR_0;
 if (VAR_4)
  VAR_2->Stats.tx_deferred += VAR_0;
 if (VAR_4)
  VAR_2->Stats.excessive_collisions += VAR_0;
 if (VAR_4)
  VAR_2->Stats.late_collisions += VAR_0;
 if (VAR_4)
  VAR_2->Stats.collisions += VAR_0;
}
