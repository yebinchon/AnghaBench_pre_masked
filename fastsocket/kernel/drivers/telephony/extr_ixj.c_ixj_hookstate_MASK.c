
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_26__ {int pots_pstn; scalar_t__ pcmciasct; scalar_t__ pcmciascp; int cringing; int ringing; } ;
struct TYPE_24__ {int hookstate; int flash; } ;
struct TYPE_25__ {TYPE_7__ bits; } ;
struct TYPE_22__ {int det; int state; int potspstn; } ;
struct TYPE_23__ {TYPE_5__ bits; } ;
struct TYPE_20__ {int det; } ;
struct TYPE_21__ {TYPE_3__ pcib; int byte; } ;
struct TYPE_18__ {int gpio3read; } ;
struct TYPE_19__ {TYPE_1__ bits; } ;
struct TYPE_17__ {int cardtype; int p_hook; int r_hook; scalar_t__ port; scalar_t__ daa_mode; TYPE_9__ flags; void* flash_end; TYPE_8__ ex; TYPE_6__ pld_slicr; TYPE_4__ pld_scrr; int XILINXbase; int board; void* checkwait; int writers; int readers; TYPE_2__ gpio; } ;
typedef TYPE_10__ IXJ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;





 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_10__*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_10__*) ;
 int FUNC_4 (TYPE_10__*,int ,int ) ;
 int FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (TYPE_10__*) ;
 void* VAR_11 ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int ,int,void*) ;
 scalar_t__ FUNC_9 (void*,void*) ;

__attribute__((used)) static int FUNC_10(IXJ *VAR_12)
{
 int VAR_13 = 0;

 switch (VAR_12->cardtype) {
 case 130:
  FUNC_3(VAR_12);
  VAR_13 = VAR_12->gpio.bits.gpio3read ? 1 : 0;
  break;
 case 132:
 case 129:
 case 128:
  FUNC_0(VAR_12);
  if(VAR_12->cardtype == 132 && VAR_12->flags.pots_pstn == 1 && (VAR_12->readers || VAR_12->writers)) {
   VAR_13 = VAR_12->pld_slicr.bits.potspstn ? 1 : 0;
   if(VAR_13 != VAR_12->p_hook) {
    if(!VAR_12->checkwait) {
     VAR_12->checkwait = VAR_11;
    }
    if(FUNC_9(VAR_11, VAR_12->checkwait + 2)) {
     VAR_13 ^= 1;
    } else {
     VAR_12->checkwait = 0;
    }
    VAR_12->p_hook = VAR_13;
     FUNC_8("IXJ : /dev/phone%d pots-pstn hookstate check %d at %ld\n", VAR_12->board, VAR_13, VAR_11);
   }
  } else {
   if (VAR_12->pld_slicr.bits.state == VAR_0 ||
       VAR_12->pld_slicr.bits.state == VAR_2) {
    if (VAR_12->flags.ringing || VAR_12->flags.cringing) {
     if (!FUNC_1()) {
      FUNC_7(20);
     }
     FUNC_0(VAR_12);
     if (VAR_12->pld_slicr.bits.state == VAR_1) {
      FUNC_6(VAR_12);
     }
    }
    if (VAR_12->cardtype == 128) {
     VAR_12->pld_scrr.byte = FUNC_2(VAR_12->XILINXbase);
     VAR_13 = VAR_12->pld_scrr.pcib.det ? 1 : 0;
    } else
     VAR_13 = VAR_12->pld_slicr.bits.det ? 1 : 0;
   }
  }
  break;
 case 131:
  VAR_13 = FUNC_5(VAR_12);
  break;
 }
 if (VAR_12->r_hook != VAR_13) {
  VAR_12->r_hook = VAR_13;
  if (VAR_12->port == VAR_6 || VAR_12->port == VAR_4) {
   VAR_12->ex.bits.hookstate = 1;
   FUNC_4(VAR_12, VAR_8, VAR_3);
  } else if (!VAR_13) {
   VAR_12->flash_end = VAR_11 + ((60 * VAR_10) / 100);
  }
 }
 if (VAR_13) {
  if(FUNC_9(VAR_11, VAR_12->flash_end)) {
   VAR_12->ex.bits.flash = 1;
   VAR_12->flash_end = 0;
   FUNC_4(VAR_12, VAR_7, VAR_3);
  }
 } else {
  if(FUNC_9(VAR_11, VAR_12->flash_end)) {
   VAR_13 = 1;
  }
 }

 if (VAR_12->port == VAR_5 && VAR_12->daa_mode == VAR_9)
  VAR_13 |= 2;

 if (VAR_12->port == VAR_6) {
  if(VAR_12->cardtype == 131) {
   if(VAR_12->flags.pcmciascp && VAR_12->flags.pcmciasct) {
    VAR_13 |= 2;
   }
  } else {
   VAR_13 |= 2;
  }
 }

 if (VAR_12->port == VAR_4)
  VAR_13 |= 2;

 return VAR_13;
}
