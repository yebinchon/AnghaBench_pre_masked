
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_15__ {int int_m1; int sctrl; int nt_mode; int trm; int fifo_en; int sctrl_r; int conn; int ctmt; scalar_t__ bswapped; scalar_t__ nt_timer; } ;
struct TYPE_16__ {TYPE_6__ hfcpci; } ;
struct TYPE_11__ {int ph_state; } ;
struct TYPE_12__ {TYPE_2__ hfcpci; } ;
struct IsdnCardState {int chanlimit; int logecho; int lock; TYPE_7__ hw; TYPE_5__* stlist; TYPE_3__ dc; } ;
struct TYPE_10__ {scalar_t__ num; } ;
struct TYPE_17__ {int arg; TYPE_1__ parm; } ;
typedef TYPE_8__ isdn_ctrl ;
struct TYPE_13__ {int l2l1; } ;
struct TYPE_14__ {TYPE_4__ l2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct IsdnCardState*,int ,int) ;
 int VAR_21 ;
 int FUNC_1 (struct IsdnCardState*,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct IsdnCardState *VAR_22, isdn_ctrl * VAR_23)
{
 u_long VAR_24;
 int VAR_25 = *(unsigned int *) VAR_23->parm.num;

 if ((VAR_23->arg == 98) &&
     (!(VAR_22->hw.hfcpci.int_m1 & (VAR_12 + VAR_11 + VAR_10 + VAR_9)))) {
      FUNC_2(&VAR_22->lock, VAR_24);
  FUNC_0(VAR_22, VAR_3, VAR_0);
  FUNC_0(VAR_22, VAR_17, VAR_14 | 0);
  FUNC_4(10);
  VAR_22->hw.hfcpci.sctrl |= VAR_20;
  FUNC_0(VAR_22, VAR_15, VAR_22->hw.hfcpci.sctrl);
  FUNC_4(10);
  FUNC_0(VAR_22, VAR_17, VAR_14 | 1);
  FUNC_4(10);
  FUNC_0(VAR_22, VAR_17, 1 | VAR_2 | VAR_6);
  VAR_22->dc.hfcpci.ph_state = 1;
  VAR_22->hw.hfcpci.nt_mode = 1;
  VAR_22->hw.hfcpci.nt_timer = 0;
  VAR_22->stlist->l2.l2l1 = VAR_21;
  FUNC_3(&VAR_22->lock, VAR_24);
  FUNC_1(VAR_22, "NT mode activated");
  return (0);
 }
 if ((VAR_22->chanlimit > 1) || (VAR_22->hw.hfcpci.bswapped) ||
     (VAR_22->hw.hfcpci.nt_mode) || (VAR_23->arg != 12))
  return (-VAR_1);

 FUNC_2(&VAR_22->lock, VAR_24);
 if (VAR_25) {
  VAR_22->logecho = 1;
  VAR_22->hw.hfcpci.trm |= 0x20;
  VAR_22->hw.hfcpci.int_m1 |= VAR_11;
  VAR_22->hw.hfcpci.fifo_en |= VAR_7;
 } else {
  VAR_22->logecho = 0;
  VAR_22->hw.hfcpci.trm &= ~0x20;
  VAR_22->hw.hfcpci.int_m1 &= ~VAR_11;
  VAR_22->hw.hfcpci.fifo_en &= ~VAR_7;
 }
 VAR_22->hw.hfcpci.sctrl_r &= ~VAR_19;
 VAR_22->hw.hfcpci.sctrl &= ~VAR_19;
 VAR_22->hw.hfcpci.conn |= 0x10;
 VAR_22->hw.hfcpci.ctmt &= ~2;
 FUNC_0(VAR_22, VAR_5, VAR_22->hw.hfcpci.ctmt);
 FUNC_0(VAR_22, VAR_16, VAR_22->hw.hfcpci.sctrl_r);
 FUNC_0(VAR_22, VAR_15, VAR_22->hw.hfcpci.sctrl);
 FUNC_0(VAR_22, VAR_4, VAR_22->hw.hfcpci.conn);
 FUNC_0(VAR_22, VAR_18, VAR_22->hw.hfcpci.trm);
 FUNC_0(VAR_22, VAR_8, VAR_22->hw.hfcpci.fifo_en);
 FUNC_0(VAR_22, VAR_13, VAR_22->hw.hfcpci.int_m1);
 FUNC_3(&VAR_22->lock, VAR_24);
 return (0);
}
