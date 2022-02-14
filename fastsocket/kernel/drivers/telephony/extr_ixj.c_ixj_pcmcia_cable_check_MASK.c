
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_18__ ;
typedef struct TYPE_30__ TYPE_17__ ;
typedef struct TYPE_29__ TYPE_16__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_40__ {int lig; int lim; int iir; scalar_t__ him; scalar_t__ mcm; scalar_t__ mcg; } ;
struct TYPE_38__ {scalar_t__ hpd; scalar_t__ pll; scalar_t__ dl1; scalar_t__ dl2; scalar_t__ al; } ;
struct TYPE_39__ {int byte; TYPE_7__ bits; } ;
struct TYPE_36__ {int spd; scalar_t__ lpd; scalar_t__ hpd; scalar_t__ mpd; scalar_t__ cpd; } ;
struct TYPE_37__ {int byte; TYPE_5__ bits; } ;
struct TYPE_34__ {int rstc; int pwr; } ;
struct TYPE_35__ {int byte; TYPE_3__ bits; } ;
struct TYPE_32__ {scalar_t__ drf; scalar_t__ ed; } ;
struct TYPE_33__ {TYPE_1__ bits; void* byte; } ;
struct TYPE_30__ {int pcmciastate; int pcmciasct; int incheck; int pcmciascp; } ;
struct TYPE_26__ {int led2; int powerdown; scalar_t__ det; } ;
struct TYPE_29__ {int byte; TYPE_13__ bits; } ;
struct TYPE_27__ {int dev; int rw; int addr; } ;
struct TYPE_28__ {int byte; TYPE_14__ bits; } ;
struct TYPE_24__ {scalar_t__ sot; } ;
struct TYPE_25__ {int byte; TYPE_11__ bits; } ;
struct TYPE_23__ {int byte; TYPE_9__ bits; } ;
struct TYPE_31__ {int r_hook; TYPE_17__ flags; scalar_t__ XILINXbase; TYPE_16__ pslic; TYPE_15__ psccr; int writers; int readers; TYPE_12__ siaatt; TYPE_10__ sirxg; TYPE_8__ sic2; TYPE_6__ sic1; int port; TYPE_4__ pccr2; TYPE_2__ pccr1; scalar_t__ checkwait; } ;
typedef TYPE_18__ IXJ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_18__*) ;
 int FUNC_3 (TYPE_18__*,int) ;
 int FUNC_4 (TYPE_18__*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_9(IXJ *VAR_4)
{
 VAR_4->pccr1.byte = FUNC_0(VAR_4->XILINXbase + 0x03);
 if (!VAR_4->flags.pcmciastate) {
  VAR_4->pccr2.byte = FUNC_0(VAR_4->XILINXbase + 0x02);
  if (VAR_4->pccr1.bits.drf || VAR_4->pccr2.bits.rstc) {
   VAR_4->flags.pcmciastate = 4;
   return 0;
  }
  if (VAR_4->pccr1.bits.ed) {
   VAR_4->pccr1.bits.ed = 0;
   VAR_4->psccr.bits.dev = 3;
   VAR_4->psccr.bits.rw = 1;
   FUNC_7(VAR_4->psccr.byte << 8, VAR_4->XILINXbase + 0x00);
   FUNC_2(VAR_4);
   VAR_4->pslic.byte = FUNC_1(VAR_4->XILINXbase + 0x00) & 0xFF;
   VAR_4->pslic.bits.led2 = VAR_4->pslic.bits.det ? 1 : 0;
   VAR_4->psccr.bits.dev = 3;
   VAR_4->psccr.bits.rw = 0;
   FUNC_7(VAR_4->psccr.byte << 8 | VAR_4->pslic.byte, VAR_4->XILINXbase + 0x00);
   FUNC_2(VAR_4);
   return VAR_4->pslic.bits.led2 ? 1 : 0;
  } else if (VAR_4->flags.pcmciasct) {
   return VAR_4->r_hook;
  } else {
   return 1;
  }
 } else if (VAR_4->flags.pcmciastate == 4) {
  if (!VAR_4->pccr1.bits.drf) {
   VAR_4->flags.pcmciastate = 3;
  }
  return 0;
 } else if (VAR_4->flags.pcmciastate == 3) {
  VAR_4->pccr2.bits.pwr = 0;
  VAR_4->pccr2.bits.rstc = 1;
  FUNC_5(VAR_4->pccr2.byte, VAR_4->XILINXbase + 0x02);
  VAR_4->checkwait = VAR_3 + (VAR_2 * 2);
  VAR_4->flags.incheck = 1;
  VAR_4->flags.pcmciastate = 2;
  return 0;
 } else if (VAR_4->flags.pcmciastate == 2) {
  if (VAR_4->flags.incheck) {
   if (FUNC_8(VAR_3, VAR_4->checkwait)) {
    return 0;
   } else {
    VAR_4->flags.incheck = 0;
   }
  }
  VAR_4->pccr2.bits.pwr = 0;
  VAR_4->pccr2.bits.rstc = 0;
  FUNC_6(VAR_4->pccr2.byte, VAR_4->XILINXbase + 0x02);
  VAR_4->flags.pcmciastate = 1;
  return 0;
 } else if (VAR_4->flags.pcmciastate == 1) {
  VAR_4->flags.pcmciastate = 0;
  if (!VAR_4->pccr1.bits.drf) {
   VAR_4->psccr.bits.dev = 3;
   VAR_4->psccr.bits.rw = 1;
   FUNC_6(VAR_4->psccr.byte, VAR_4->XILINXbase + 0x01);
   FUNC_2(VAR_4);
   VAR_4->flags.pcmciascp = 1;

   VAR_4->flags.pcmciasct = (FUNC_1(VAR_4->XILINXbase + 0x00) >> 8) & 0x03;

   if (VAR_4->flags.pcmciasct == 3) {
    VAR_4->flags.pcmciastate = 4;
    return 0;
   } else if (VAR_4->flags.pcmciasct == 0) {
    VAR_4->pccr2.bits.pwr = 1;
    VAR_4->pccr2.bits.rstc = 0;
    FUNC_6(VAR_4->pccr2.byte, VAR_4->XILINXbase + 0x02);
    VAR_4->port = VAR_1;
   } else {
    VAR_4->port = VAR_0;
   }
   VAR_4->sic1.bits.cpd = 0;
   VAR_4->sic1.bits.mpd = 0;
   VAR_4->sic1.bits.hpd = 0;
   VAR_4->sic1.bits.lpd = 0;
   VAR_4->sic1.bits.spd = 1;
   VAR_4->psccr.bits.addr = 1;
   VAR_4->psccr.bits.rw = 0;
   VAR_4->psccr.bits.dev = 0;
   FUNC_5(VAR_4->sic1.byte, VAR_4->XILINXbase + 0x00);
   FUNC_5(VAR_4->psccr.byte, VAR_4->XILINXbase + 0x01);
   FUNC_2(VAR_4);

   VAR_4->sic2.bits.al = 0;
   VAR_4->sic2.bits.dl2 = 0;
   VAR_4->sic2.bits.dl1 = 0;
   VAR_4->sic2.bits.pll = 0;
   VAR_4->sic2.bits.hpd = 0;
   VAR_4->psccr.bits.addr = 2;
   VAR_4->psccr.bits.rw = 0;
   VAR_4->psccr.bits.dev = 0;
   FUNC_5(VAR_4->sic2.byte, VAR_4->XILINXbase + 0x00);
   FUNC_5(VAR_4->psccr.byte, VAR_4->XILINXbase + 0x01);
   FUNC_2(VAR_4);

   VAR_4->psccr.bits.addr = 3;
   VAR_4->psccr.bits.rw = 0;
   VAR_4->psccr.bits.dev = 0;
   FUNC_5(0x00, VAR_4->XILINXbase + 0x00);
   FUNC_5(VAR_4->psccr.byte, VAR_4->XILINXbase + 0x01);
   FUNC_2(VAR_4);

   VAR_4->psccr.bits.addr = 4;
   VAR_4->psccr.bits.rw = 0;
   VAR_4->psccr.bits.dev = 0;
   FUNC_5(0x09, VAR_4->XILINXbase + 0x00);
   FUNC_5(VAR_4->psccr.byte, VAR_4->XILINXbase + 0x01);
   FUNC_2(VAR_4);

   VAR_4->sirxg.bits.lig = 1;
   VAR_4->sirxg.bits.lim = 1;
   VAR_4->sirxg.bits.mcg = 0;
   VAR_4->sirxg.bits.mcm = 0;
   VAR_4->sirxg.bits.him = 0;
   VAR_4->sirxg.bits.iir = 1;
   VAR_4->psccr.bits.addr = 5;
   VAR_4->psccr.bits.rw = 0;
   VAR_4->psccr.bits.dev = 0;
   FUNC_5(VAR_4->sirxg.byte, VAR_4->XILINXbase + 0x00);
   FUNC_5(VAR_4->psccr.byte, VAR_4->XILINXbase + 0x01);
   FUNC_2(VAR_4);

   FUNC_3(VAR_4, 0x17);
   FUNC_4(VAR_4, 0x1D);

   VAR_4->siaatt.bits.sot = 0;
   VAR_4->psccr.bits.addr = 9;
   VAR_4->psccr.bits.rw = 0;
   VAR_4->psccr.bits.dev = 0;
   FUNC_5(VAR_4->siaatt.byte, VAR_4->XILINXbase + 0x00);
   FUNC_5(VAR_4->psccr.byte, VAR_4->XILINXbase + 0x01);
   FUNC_2(VAR_4);

   if (VAR_4->flags.pcmciasct == 1 && !VAR_4->readers && !VAR_4->writers) {
    VAR_4->psccr.byte = VAR_4->pslic.byte = 0;
    VAR_4->pslic.bits.powerdown = 1;
    VAR_4->psccr.bits.dev = 3;
    VAR_4->psccr.bits.rw = 0;
    FUNC_7(VAR_4->psccr.byte << 8 | VAR_4->pslic.byte, VAR_4->XILINXbase + 0x00);
    FUNC_2(VAR_4);
   }
  }
  return 0;
 } else {
  VAR_4->flags.pcmciascp = 0;
  return 0;
 }
 return 0;
}
