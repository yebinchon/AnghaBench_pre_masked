
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_33__ {int hookstate; scalar_t__ dtmf_ready; } ;
struct TYPE_35__ {scalar_t__ bytes; TYPE_4__ bits; } ;
struct TYPE_34__ {int firstring; int cidring; int cidsent; scalar_t__ pstn_present; int pstncheck; int ringing; scalar_t__ cringing; scalar_t__ ringback; scalar_t__ busytone; scalar_t__ dialtone; } ;
struct TYPE_32__ {int high; int low; } ;
struct TYPE_31__ {int low; } ;
struct TYPE_36__ {int board; int hookstate; int tone_state; int m_hook; int tone_on_time; int tone_off_time; int ring_cadence_t; int ring_cadence; int proc_load; scalar_t__ cardtype; int busyflags; int poll_q; TYPE_6__ ex; TYPE_5__ flags; scalar_t__ dtmf_rp; scalar_t__ dtmf_wp; TYPE_3__ ssr; TYPE_2__ dsp; TYPE_1__* cadence_f; void* ring_cadence_jif; scalar_t__ fskdcnt; int tone_index; void* tone_start_jif; int timerchecks; int DSPWrite; scalar_t__ DSPbase; } ;
struct TYPE_30__ {int state; int on1; int off1; int on2; int off2; int on3; int off3; scalar_t__ en_filter; void* off3dot; void* on3dot; void* off2dot; void* on2dot; void* off1dot; void* on1dot; scalar_t__ enable; } ;
typedef TYPE_7__ IXJ ;


 scalar_t__ FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (scalar_t__,TYPE_7__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int,int *) ;
 int VAR_5 ;
 int FUNC_7 (int,TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (TYPE_7__*,int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_7__*,int ) ;
 int FUNC_16 (TYPE_7__*) ;
 int FUNC_17 (TYPE_7__*) ;
 int FUNC_18 (TYPE_7__*) ;
 int FUNC_19 (TYPE_7__*) ;
 int FUNC_20 (TYPE_7__*) ;
 int FUNC_21 (TYPE_7__*) ;
 int FUNC_22 (TYPE_7__*) ;
 int FUNC_23 (TYPE_7__*) ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_24 (char*,int,void*) ;
 int FUNC_25 (TYPE_7__*) ;
 scalar_t__ FUNC_26 (int,void*) ;
 scalar_t__ FUNC_27 (void*,void*) ;
 scalar_t__ FUNC_28 (void*,void*) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static void FUNC_30(unsigned long VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;
 IXJ *VAR_11 = (IXJ *)VAR_8;
 VAR_9 = VAR_11->board;

 if (VAR_11->DSPbase && FUNC_5(&VAR_11->DSPWrite) == 0 && FUNC_26(VAR_9, (void *)&VAR_11->busyflags) == 0) {
  FUNC_14(VAR_11->timerchecks);
  VAR_11->hookstate = FUNC_12(VAR_11);
  if (VAR_11->tone_state) {
   if (!(VAR_11->hookstate)) {
    FUNC_10(VAR_11);
    if (VAR_11->m_hook) {
     VAR_11->m_hook = 0;
     VAR_11->ex.bits.hookstate = 1;
     FUNC_13(VAR_11, VAR_4, VAR_2);
    }
    FUNC_6(VAR_9, &VAR_11->busyflags);
    FUNC_8(VAR_11);
    return;
   }
   if (VAR_11->tone_state == 1)
    VAR_10 = ((VAR_5 * VAR_11->tone_on_time) * 25 / 100000);
   else
    VAR_10 = ((VAR_5 * VAR_11->tone_on_time) * 25 / 100000) + ((VAR_5 * VAR_11->tone_off_time) * 25 / 100000);
   if (FUNC_28(VAR_7, VAR_11->tone_start_jif + VAR_10)) {
    if (VAR_11->tone_state == 1) {
     FUNC_15(VAR_11, VAR_11->tone_index);
     if (VAR_11->dsp.low == 0x20) {
      FUNC_6(VAR_9, &VAR_11->busyflags);
      FUNC_8(VAR_11);
      return;
     }
    } else {
     FUNC_15(VAR_11, 0);
     if (VAR_11->dsp.low == 0x20) {
      FUNC_6(VAR_9, &VAR_11->busyflags);
      FUNC_8(VAR_11);
      return;
     }
    }
   } else {
    FUNC_22(VAR_11);
    if (VAR_11->flags.dialtone) {
     FUNC_11(VAR_11);
    }
    if (VAR_11->flags.busytone) {
     FUNC_9(VAR_11);
     if (VAR_11->dsp.low == 0x20) {
      FUNC_6(VAR_9, &VAR_11->busyflags);
      FUNC_8(VAR_11);
      return;
     }
    }
    if (VAR_11->flags.ringback) {
     FUNC_21(VAR_11);
     if (VAR_11->dsp.low == 0x20) {
      FUNC_6(VAR_9, &VAR_11->busyflags);
      FUNC_8(VAR_11);
      return;
     }
    }
    if (!VAR_11->tone_state) {
     FUNC_10(VAR_11);
    }
   }
  }
  if (!(VAR_11->tone_state && VAR_11->dsp.low == 0x20)) {
   if (FUNC_0(VAR_11)) {
    FUNC_18(VAR_11);
   }
   if (FUNC_1(VAR_11)) {
    FUNC_23(VAR_11);
   }
  }
  if (VAR_11->flags.cringing) {
   if (VAR_11->hookstate & 1) {
    VAR_11->flags.cringing = 0;
    FUNC_19(VAR_11);
   } else if(VAR_11->cadence_f[5].enable && ((!VAR_11->cadence_f[5].en_filter) || (VAR_11->cadence_f[5].en_filter && VAR_11->flags.firstring))) {
    switch(VAR_11->cadence_f[5].state) {
     case 0:
      VAR_11->cadence_f[5].on1dot = VAR_7 + (long)((VAR_11->cadence_f[5].on1 * (VAR_5 * 100) / 10000));
      if (FUNC_28(VAR_7, VAR_11->cadence_f[5].on1dot)) {
       if(VAR_6 & 0x0004) {
        FUNC_24("Ringing cadence state = %d - %ld\n", VAR_11->cadence_f[5].state, VAR_7);
       }
       FUNC_20(VAR_11);
      }
      VAR_11->cadence_f[5].state = 1;
      break;
     case 1:
      if (FUNC_27(VAR_7, VAR_11->cadence_f[5].on1dot)) {
       VAR_11->cadence_f[5].off1dot = VAR_7 + (long)((VAR_11->cadence_f[5].off1 * (VAR_5 * 100) / 10000));
       if(VAR_6 & 0x0004) {
        FUNC_24("Ringing cadence state = %d - %ld\n", VAR_11->cadence_f[5].state, VAR_7);
       }
       FUNC_19(VAR_11);
       VAR_11->cadence_f[5].state = 2;
      }
      break;
     case 2:
      if (FUNC_27(VAR_7, VAR_11->cadence_f[5].off1dot)) {
       if(VAR_6 & 0x0004) {
        FUNC_24("Ringing cadence state = %d - %ld\n", VAR_11->cadence_f[5].state, VAR_7);
       }
       FUNC_20(VAR_11);
       if (VAR_11->cadence_f[5].on2) {
        VAR_11->cadence_f[5].on2dot = VAR_7 + (long)((VAR_11->cadence_f[5].on2 * (VAR_5 * 100) / 10000));
        VAR_11->cadence_f[5].state = 3;
       } else {
        VAR_11->cadence_f[5].state = 7;
       }
      }
      break;
     case 3:
      if (FUNC_27(VAR_7, VAR_11->cadence_f[5].on2dot)) {
       if(VAR_6 & 0x0004) {
        FUNC_24("Ringing cadence state = %d - %ld\n", VAR_11->cadence_f[5].state, VAR_7);
       }
       FUNC_19(VAR_11);
       if (VAR_11->cadence_f[5].off2) {
        VAR_11->cadence_f[5].off2dot = VAR_7 + (long)((VAR_11->cadence_f[5].off2 * (VAR_5 * 100) / 10000));
        VAR_11->cadence_f[5].state = 4;
       } else {
        VAR_11->cadence_f[5].state = 7;
       }
      }
      break;
     case 4:
      if (FUNC_27(VAR_7, VAR_11->cadence_f[5].off2dot)) {
       if(VAR_6 & 0x0004) {
        FUNC_24("Ringing cadence state = %d - %ld\n", VAR_11->cadence_f[5].state, VAR_7);
       }
       FUNC_20(VAR_11);
       if (VAR_11->cadence_f[5].on3) {
        VAR_11->cadence_f[5].on3dot = VAR_7 + (long)((VAR_11->cadence_f[5].on3 * (VAR_5 * 100) / 10000));
        VAR_11->cadence_f[5].state = 5;
       } else {
        VAR_11->cadence_f[5].state = 7;
       }
      }
      break;
     case 5:
      if (FUNC_27(VAR_7, VAR_11->cadence_f[5].on3dot)) {
       if(VAR_6 & 0x0004) {
        FUNC_24("Ringing cadence state = %d - %ld\n", VAR_11->cadence_f[5].state, VAR_7);
       }
       FUNC_19(VAR_11);
       if (VAR_11->cadence_f[5].off3) {
        VAR_11->cadence_f[5].off3dot = VAR_7 + (long)((VAR_11->cadence_f[5].off3 * (VAR_5 * 100) / 10000));
        VAR_11->cadence_f[5].state = 6;
       } else {
        VAR_11->cadence_f[5].state = 7;
       }
      }
      break;
     case 6:
      if (FUNC_27(VAR_7, VAR_11->cadence_f[5].off3dot)) {
       if(VAR_6 & 0x0004) {
        FUNC_24("Ringing cadence state = %d - %ld\n", VAR_11->cadence_f[5].state, VAR_7);
       }
       VAR_11->cadence_f[5].state = 7;
      }
      break;
     case 7:
      if(VAR_6 & 0x0004) {
       FUNC_24("Ringing cadence state = %d - %ld\n", VAR_11->cadence_f[5].state, VAR_7);
      }
      VAR_11->flags.cidring = 1;
      VAR_11->cadence_f[5].state = 0;
      break;
    }
    if (VAR_11->flags.cidring && !VAR_11->flags.cidsent) {
     VAR_11->flags.cidsent = 1;
     if(VAR_11->fskdcnt) {
      FUNC_4(VAR_1, VAR_11);
      FUNC_16(VAR_11);
     }
     VAR_11->flags.cidring = 0;
    }
    FUNC_6(VAR_9, &VAR_11->busyflags);
    FUNC_8(VAR_11);
    return;
   } else {
    if (FUNC_27(VAR_7, VAR_11->ring_cadence_jif + (VAR_5 / 2))) {
     if (VAR_11->flags.cidring && !VAR_11->flags.cidsent) {
      VAR_11->flags.cidsent = 1;
      if(VAR_11->fskdcnt) {
       FUNC_4(VAR_1, VAR_11);
       FUNC_16(VAR_11);
      }
      VAR_11->flags.cidring = 0;
     }
     VAR_11->ring_cadence_t--;
     if (VAR_11->ring_cadence_t == -1)
      VAR_11->ring_cadence_t = 15;
     VAR_11->ring_cadence_jif = VAR_7;

     if (VAR_11->ring_cadence & 1 << VAR_11->ring_cadence_t) {
      if(VAR_11->flags.cidsent && VAR_11->cadence_f[5].en_filter)
       VAR_11->flags.firstring = 1;
      else
       FUNC_20(VAR_11);
     } else {
      FUNC_19(VAR_11);
      if(!VAR_11->flags.cidsent)
       VAR_11->flags.cidring = 1;
     }
    }
    FUNC_6(VAR_9, &VAR_11->busyflags);
    FUNC_8(VAR_11);
    return;
   }
  }
  if (!VAR_11->flags.ringing) {
   if (VAR_11->hookstate) {
    if (VAR_11->dsp.low != 0x20 &&
        FUNC_3(VAR_11) != VAR_0) {
     FUNC_4(VAR_0, VAR_11);
    }
    FUNC_2(VAR_11);
    FUNC_25(VAR_11);
    FUNC_7(0x511B, VAR_11);
    VAR_11->proc_load = VAR_11->ssr.high << 8 | VAR_11->ssr.low;
    if (!VAR_11->m_hook && (VAR_11->hookstate & 1)) {
     VAR_11->m_hook = VAR_11->ex.bits.hookstate = 1;
     FUNC_13(VAR_11, VAR_4, VAR_2);
    }
   } else {
    if (VAR_11->ex.bits.dtmf_ready) {
     VAR_11->dtmf_wp = VAR_11->dtmf_rp = VAR_11->ex.bits.dtmf_ready = 0;
    }
    if (VAR_11->m_hook) {
     VAR_11->m_hook = 0;
     VAR_11->ex.bits.hookstate = 1;
     FUNC_13(VAR_11, VAR_4, VAR_2);
    }
   }
  }
  if (VAR_11->cardtype == VAR_3 && !VAR_11->flags.pstncheck && VAR_11->flags.pstn_present) {
   FUNC_17(VAR_11);
  }
  if (VAR_11->ex.bytes) {
   FUNC_29(&VAR_11->poll_q);
  }
  FUNC_6(VAR_9, &VAR_11->busyflags);
 }
 FUNC_8(VAR_11);
}
