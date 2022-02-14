
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int ;
struct seeprom_config {int max_targets; int adapter_control; int* device_flags; int brtime_id; int bios_control; scalar_t__ signature; } ;
struct ahc_softc {int flags; int features; int our_id; int dev_softc; } ;


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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (struct ahc_softc*,scalar_t__,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ahc_softc *VAR_34, struct seeprom_config *VAR_35)
{




 int VAR_36;
 int VAR_37 = VAR_35->max_targets & VAR_10;
 u_int VAR_38;
 uint16_t VAR_39;
 uint16_t VAR_40;

 VAR_39 = 0;
 VAR_40 = 0;
 if ((VAR_35->adapter_control & VAR_19) != 0) {




  for (VAR_36 = 0; VAR_36 < VAR_37; VAR_36++) {
   if ((VAR_35->device_flags[VAR_36] & VAR_18) != 0) {
    VAR_34->flags |= VAR_2;
    break;
   }
  }
 }

 for (VAR_36 = 0; VAR_36 < VAR_37; VAR_36++) {
  u_int VAR_41;
  uint16_t VAR_42;

  VAR_42 = 0x01 << VAR_36;
  if (VAR_35->device_flags[VAR_36] & VAR_8)
   VAR_39 |= VAR_42;
  if ((VAR_34->flags & VAR_2) != 0) {
   if ((VAR_35->device_flags[VAR_36] & VAR_18) != 0)
    VAR_40 |= VAR_42;
  } else if ((VAR_35->adapter_control & VAR_19) != 0) {
   VAR_40 |= VAR_42;
  }
  if ((VAR_35->device_flags[VAR_36] & VAR_21) == 0x04
   && (VAR_40 & VAR_42) != 0) {

   VAR_35->device_flags[VAR_36] &= ~VAR_21;
    VAR_40 &= ~VAR_42;
  }
  if ((VAR_34->features & VAR_4) != 0) {
   u_int VAR_43;

   if (VAR_35->device_flags[VAR_36] & VAR_17)
    VAR_43 = VAR_25;
   else
    VAR_43 = 0;
   FUNC_0(VAR_34, VAR_30 + VAR_36, VAR_43);






   VAR_41 = (VAR_35->device_flags[VAR_36] & VAR_21)
     | ((VAR_40 & VAR_42) ? 0x8 : 0x0);
   if (VAR_35->device_flags[VAR_36] & VAR_20)
    VAR_41 |= VAR_33;
  } else {
   VAR_41 = (VAR_35->device_flags[VAR_36] & VAR_21) << 4;
   if (VAR_35->device_flags[VAR_36] & VAR_17)
    VAR_41 |= VAR_28;
   if (VAR_35->device_flags[VAR_36] & VAR_20)
    VAR_41 |= VAR_33;
  }
  FUNC_0(VAR_34, VAR_31 + VAR_36, VAR_41);
 }
 VAR_34->our_id = VAR_35->brtime_id & VAR_12;

 VAR_38 = (VAR_34->our_id & 0x7);
 if (VAR_35->adapter_control & VAR_15)
  VAR_38 |= VAR_24;
 if (VAR_35->adapter_control & VAR_11)
  VAR_38 |= VAR_26;

 VAR_34->flags |= (VAR_35->adapter_control & VAR_6) >> VAR_7;

 if (VAR_35->bios_control & VAR_9)
  VAR_34->flags |= VAR_1;

 if (VAR_35->bios_control & VAR_5)
  VAR_34->flags |= VAR_0;
 if (VAR_34->features & VAR_3
  && (VAR_34->flags & VAR_2) == 0) {

  if (!(VAR_35->adapter_control & VAR_19))

   VAR_40 = 0;
 }

 if (VAR_35->signature == VAR_13
  || VAR_35->signature == VAR_14) {
  uint32_t VAR_44;


  VAR_44 = FUNC_1(VAR_34->dev_softc,
      VAR_22, 4);
  VAR_44 &= ~VAR_29;
  if ((VAR_35->bios_control & VAR_16) != 0)
   VAR_44 |= VAR_29;
  FUNC_2(VAR_34->dev_softc, VAR_22,
         VAR_44, 4);
 }

 FUNC_0(VAR_34, VAR_27, VAR_38);
 FUNC_0(VAR_34, VAR_23, ~(VAR_39 & 0xff));
 FUNC_0(VAR_34, VAR_23 + 1, ~((VAR_39 >> 8) & 0xff));
 FUNC_0(VAR_34, VAR_32, VAR_40 & 0xff);
 FUNC_0(VAR_34, VAR_32 + 1, (VAR_40 >> 8) & 0xff);
}
