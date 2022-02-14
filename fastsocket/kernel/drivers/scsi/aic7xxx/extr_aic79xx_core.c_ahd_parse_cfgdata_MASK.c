
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct seeprom_config {int max_targets; int brtime_id; int* device_flags; int bios_control; int adapter_control; } ;
struct ahd_transinfo {int protocol_version; int transport_version; int ppr_options; int period; int offset; int width; } ;
struct ahd_tmode_tstate {int discenable; int tagenable; } ;
struct ahd_softc {int our_id; int user_discenable; int user_tagenable; int features; int flags; } ;
struct TYPE_4__ {int protocol_version; int transport_version; } ;
struct TYPE_3__ {int protocol_version; int transport_version; } ;
struct ahd_initiator_tinfo {TYPE_2__ curr; TYPE_1__ goal; struct ahd_transinfo user; } ;
struct ahd_devinfo {int dummy; } ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int * FUNC_0 (struct ahd_softc*,int,char) ;
 int FUNC_1 (struct ahd_devinfo*,int,int,int ,char,int ) ;
 int VAR_41 ;
 struct ahd_initiator_tinfo* FUNC_2 (struct ahd_softc*,char,int,int,struct ahd_tmode_tstate**) ;
 char* FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,int ,int,int ) ;
 int FUNC_5 (struct ahd_softc*,struct ahd_devinfo*,int,int,int ) ;
 int FUNC_6 (char*,...) ;

int
FUNC_7(struct ahd_softc *VAR_42, struct seeprom_config *VAR_43)
{
 int VAR_44;
 int VAR_45;

 VAR_45 = VAR_43->max_targets & VAR_18;
 VAR_42->our_id = VAR_43->brtime_id & VAR_22;






 if (FUNC_0(VAR_42, VAR_42->our_id, 'A') == ((void*)0)) {
  FUNC_6("%s: unable to allocate ahd_tmode_tstate.  "
         "Failing attach\n", FUNC_3(VAR_42));
  return (VAR_28);
 }

 for (VAR_44 = 0; VAR_44 < VAR_45; VAR_44++) {
  struct ahd_devinfo VAR_46;
  struct ahd_initiator_tinfo *VAR_47;
  struct ahd_transinfo *VAR_48;
  struct ahd_tmode_tstate *VAR_49;
  uint16_t VAR_50;

  VAR_47 = FUNC_2(VAR_42, 'A', VAR_42->our_id,
         VAR_44, &VAR_49);
  VAR_48 = &VAR_47->user;




  VAR_47->user.protocol_version = 4;
  VAR_47->user.transport_version = 4;

  VAR_50 = 0x01 << VAR_44;
  VAR_42->user_discenable &= ~VAR_50;
  VAR_49->discenable &= ~VAR_50;
  VAR_42->user_tagenable &= ~VAR_50;
  if (VAR_43->device_flags[VAR_44] & VAR_16) {
   VAR_49->discenable |= VAR_50;
   VAR_42->user_discenable |= VAR_50;
   VAR_42->user_tagenable |= VAR_50;
  } else {



   VAR_43->device_flags[VAR_44] &= ~VAR_19;
  }

  VAR_48->ppr_options = 0;
  VAR_48->period = (VAR_43->device_flags[VAR_44] & VAR_26);
  if (VAR_48->period < VAR_27) {
   if (VAR_48->period <= VAR_3)
    VAR_48->ppr_options |= VAR_30;
   VAR_48->offset = VAR_29;
  } else {
   VAR_48->offset = 0;
   VAR_48->period = VAR_0;
  }





  if ((VAR_43->device_flags[VAR_44] & VAR_19) != 0) {
   VAR_48->ppr_options |= VAR_34
      | VAR_36
      | VAR_31
      | VAR_32;
   if ((VAR_42->features & VAR_5) != 0)
    VAR_48->ppr_options |= VAR_35;
  }

  if ((VAR_43->device_flags[VAR_44] & VAR_20) != 0)
   VAR_48->ppr_options |= VAR_33;

  if ((VAR_43->device_flags[VAR_44] & VAR_25) != 0)
   VAR_48->width = VAR_37;
  else
   VAR_48->width = VAR_38;
  VAR_49->tagenable &= ~VAR_50;
  VAR_47->goal.protocol_version = 2;
  VAR_47->goal.transport_version = 2;
  VAR_47->curr.protocol_version = 2;
  VAR_47->curr.transport_version = 2;
  FUNC_1(&VAR_46, VAR_42->our_id,
        VAR_44, VAR_13,
        'A', VAR_39);
  FUNC_5(VAR_42, &VAR_46, VAR_38,
         VAR_11|VAR_12, VAR_40);
  FUNC_4(VAR_42, &VAR_46, 0, 0,
                    0, VAR_11|VAR_12,
               VAR_40);
 }

 VAR_42->flags &= ~VAR_7;
 if (VAR_43->bios_control & VAR_23)
  VAR_42->flags |= VAR_7;

 VAR_42->flags &= ~VAR_4;
 if (VAR_43->bios_control & VAR_21)
  VAR_42->flags |= VAR_4;

 VAR_42->flags &= ~VAR_2;
 if (VAR_43->bios_control & VAR_17)
  VAR_42->flags |= VAR_2;

 VAR_42->flags &= ~VAR_1;
 if ((VAR_43->bios_control & VAR_14) == VAR_15)
  VAR_42->flags |= VAR_1;

 VAR_42->flags &= ~VAR_8;
 if ((VAR_43->adapter_control & VAR_24) != 0)
  VAR_42->flags |= VAR_8;

 return (0);
}
