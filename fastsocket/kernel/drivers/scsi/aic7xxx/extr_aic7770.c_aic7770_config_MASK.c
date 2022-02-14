
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct aic7770_identity {int (* setup ) (struct ahc_softc*) ;int name; } ;
struct TYPE_3__ {int busspd; int bustime; } ;
struct TYPE_4__ {TYPE_1__ aic7770_softc; } ;
struct ahc_softc {int flags; int chip; int features; int our_id; int our_id_b; int init_level; TYPE_2__ bus_softc; int * seep_config; int bus_chip_init; int description; } ;


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
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*,int ) ;
 int FUNC_2 (struct ahc_softc*) ;
 int FUNC_3 (struct ahc_softc*,int ) ;
 int FUNC_4 (struct ahc_softc*,int ,int) ;
 int FUNC_5 (struct ahc_softc*,int ) ;
 int FUNC_6 (struct ahc_softc*) ;
 int VAR_32 ;
 int FUNC_7 (struct ahc_softc*,int) ;
 int FUNC_8 (struct ahc_softc*,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (struct ahc_softc*) ;

int
FUNC_12(struct ahc_softc *VAR_33, struct aic7770_identity *VAR_34, u_int VAR_35)
{
 int VAR_36;
 int VAR_37;
 u_int VAR_38;
 u_int VAR_39;
 u_int VAR_40;

 VAR_36 = VAR_34->setup(VAR_33);
 VAR_37 = 0;
 if (VAR_36 != 0)
  return (VAR_36);

 VAR_36 = FUNC_8(VAR_33, VAR_35);
 if (VAR_36 != 0)
  return (VAR_36);







 FUNC_3(VAR_33, VAR_19);

 VAR_33->description = VAR_34->name;
 VAR_36 = FUNC_6(VAR_33);
 if (VAR_36 != 0)
  return (VAR_36);

 VAR_33->bus_chip_init = VAR_32;

 VAR_36 = FUNC_5(VAR_33, VAR_19);
 if (VAR_36 != 0)
  return (VAR_36);


 VAR_40 = FUNC_1(VAR_33, VAR_26);
 VAR_39 = VAR_40 & VAR_31;
 switch (VAR_39) {
 case 9:
 case 10:
 case 11:
 case 12:
 case 14:
 case 15:
  break;
 default:
  FUNC_10("aic7770_config: invalid irq setting %d\n", VAR_40);
  return (VAR_18);
 }

 if ((VAR_40 & VAR_16) != 0)
  VAR_33->flags |= VAR_0;

 switch (VAR_33->chip & (129|128)) {
 case 129:
 {
  u_int VAR_41;
  u_int VAR_42;
  u_int VAR_43;

  VAR_41 = FUNC_1(VAR_33, VAR_20);
  VAR_42 = FUNC_1(VAR_33, VAR_29);
  VAR_43 = FUNC_1(VAR_33, VAR_29 + 1);


  if ((VAR_41 & VAR_14) != 0)
   VAR_33->flags |= 1;

  if ((VAR_41 & VAR_10) == VAR_9) {
   VAR_33->flags |= VAR_5;
  } else {
   if ((VAR_33->features & VAR_6) != 0) {
    VAR_33->our_id = VAR_43 & VAR_25;
    if (VAR_42 & VAR_30)
     VAR_33->flags |= VAR_3;
   } else {
    VAR_33->our_id = VAR_42 & VAR_24;
    VAR_33->our_id_b = VAR_43 & VAR_24;
    if (VAR_42 & VAR_30)
     VAR_33->flags |= VAR_3;
    if (VAR_43 & VAR_30)
     VAR_33->flags |= VAR_4;
   }
  }
  if ((FUNC_1(VAR_33, VAR_21) & VAR_22))
   VAR_33->flags |= VAR_1|VAR_2;
  break;
 }
 case 128:
 {
  VAR_37 = FUNC_0(VAR_33);
  break;
 }
 default:
  break;
 }
 if (VAR_37 == 0) {
  FUNC_9(VAR_33->seep_config, VAR_27);
  VAR_33->seep_config = ((void*)0);
 }




 FUNC_4(VAR_33, VAR_28, FUNC_1(VAR_33, VAR_28) & ~VAR_7);


 VAR_38 = FUNC_1(VAR_33, VAR_23);
 FUNC_4(VAR_33, VAR_12, VAR_38 & VAR_15);
 FUNC_4(VAR_33, VAR_13, (VAR_38 << 2) & VAR_11);

 VAR_33->bus_softc.aic7770_softc.busspd = VAR_38 & VAR_15;
 VAR_33->bus_softc.aic7770_softc.bustime = (VAR_38 << 2) & VAR_11;




 VAR_36 = FUNC_2(VAR_33);
 if (VAR_36 != 0)
  return (VAR_36);

 VAR_36 = FUNC_7(VAR_33, VAR_39);
 if (VAR_36 != 0)
  return (VAR_36);

 VAR_33->init_level++;




 FUNC_4(VAR_33, VAR_8, VAR_17);
 return (0);
}
