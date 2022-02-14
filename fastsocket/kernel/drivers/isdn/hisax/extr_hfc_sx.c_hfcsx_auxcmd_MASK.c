
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


struct TYPE_15__ {int int_m1; int sctrl; int nt_mode; int trm; int sctrl_r; int conn; int ctmt; scalar_t__ bswapped; scalar_t__ nt_timer; } ;
struct TYPE_16__ {TYPE_6__ hfcsx; } ;
struct TYPE_11__ {int ph_state; } ;
struct TYPE_12__ {TYPE_2__ hfcsx; } ;
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
 int FUNC_0 (struct IsdnCardState*,int ,int) ;
 int VAR_17 ;
 int FUNC_1 (struct IsdnCardState*,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct IsdnCardState *VAR_18, isdn_ctrl * VAR_19)
{
 unsigned long VAR_20;
 int VAR_21 = *(unsigned int *) VAR_19->parm.num;

 if ((VAR_19->arg == 98) &&
     (!(VAR_18->hw.hfcsx.int_m1 & (VAR_8 + VAR_7 + VAR_6 + VAR_5)))) {
      FUNC_2(&VAR_18->lock, VAR_20);
  FUNC_0(VAR_18, VAR_13, VAR_10 | 0);
  FUNC_4(10);
  VAR_18->hw.hfcsx.sctrl |= VAR_16;
  FUNC_0(VAR_18, VAR_11, VAR_18->hw.hfcsx.sctrl);
  FUNC_4(10);
  FUNC_0(VAR_18, VAR_13, VAR_10 | 1);
  FUNC_4(10);
  FUNC_0(VAR_18, VAR_13, 1 | VAR_1 | VAR_4);
  VAR_18->dc.hfcsx.ph_state = 1;
  VAR_18->hw.hfcsx.nt_mode = 1;
  VAR_18->hw.hfcsx.nt_timer = 0;
  FUNC_3(&VAR_18->lock, VAR_20);
  VAR_18->stlist->l2.l2l1 = VAR_17;
  FUNC_1(VAR_18, "NT mode activated");
  return (0);
 }
 if ((VAR_18->chanlimit > 1) || (VAR_18->hw.hfcsx.bswapped) ||
     (VAR_18->hw.hfcsx.nt_mode) || (VAR_19->arg != 12))
  return (-VAR_0);

 if (VAR_21) {
  VAR_18->logecho = 1;
  VAR_18->hw.hfcsx.trm |= 0x20;
  VAR_18->hw.hfcsx.int_m1 |= VAR_7;

 } else {
  VAR_18->logecho = 0;
  VAR_18->hw.hfcsx.trm &= ~0x20;
  VAR_18->hw.hfcsx.int_m1 &= ~VAR_7;
 }
 VAR_18->hw.hfcsx.sctrl_r &= ~VAR_15;
 VAR_18->hw.hfcsx.sctrl &= ~VAR_15;
 VAR_18->hw.hfcsx.conn |= 0x10;
 VAR_18->hw.hfcsx.ctmt &= ~2;
 FUNC_2(&VAR_18->lock, VAR_20);
 FUNC_0(VAR_18, VAR_3, VAR_18->hw.hfcsx.ctmt);
 FUNC_0(VAR_18, VAR_12, VAR_18->hw.hfcsx.sctrl_r);
 FUNC_0(VAR_18, VAR_11, VAR_18->hw.hfcsx.sctrl);
 FUNC_0(VAR_18, VAR_2, VAR_18->hw.hfcsx.conn);
 FUNC_0(VAR_18, VAR_14, VAR_18->hw.hfcsx.trm);
 FUNC_0(VAR_18, VAR_9, VAR_18->hw.hfcsx.int_m1);
 FUNC_3(&VAR_18->lock, VAR_20);
 return (0);
}
