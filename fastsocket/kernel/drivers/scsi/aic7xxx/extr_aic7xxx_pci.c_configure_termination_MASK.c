
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct seeprom_descriptor {int sd_MS; int sd_CS; } ;
struct ahc_softc {int features; int flags; } ;


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
 int FUNC_0 (struct seeprom_descriptor*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 char* FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*,int*,int*,int*,int*,int*) ;
 int FUNC_3 (struct ahc_softc*,int ,int) ;
 int FUNC_4 (struct ahc_softc*,int*,int*,int*) ;
 int FUNC_5 (struct ahc_softc*,int*,int*,int*,int*) ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (struct ahc_softc*,int ) ;

__attribute__((used)) static void
FUNC_8(struct ahc_softc *VAR_17,
        struct seeprom_descriptor *VAR_18,
        u_int VAR_19,
        u_int *VAR_20)
{
 uint8_t VAR_21;

 VAR_21 = 0;





 *VAR_20 = 0;






 FUNC_0(VAR_18, VAR_18->sd_MS | VAR_18->sd_CS);
 if ((VAR_19 & VAR_8) != 0
  || (VAR_17->features & VAR_1) != 0) {
  int VAR_22;
  int VAR_23;
  int VAR_24;
  int VAR_25;
  int VAR_26;
  int VAR_27;
  int VAR_28;
  int VAR_29;
  int VAR_30;

  VAR_26 = 0;
  VAR_27 = 0;
  VAR_28 = 0;
  VAR_29 = 0;
  if ((VAR_17->features & VAR_1) != 0) {
   FUNC_2(VAR_17, &VAR_26,
         &VAR_27,
         &VAR_28,
         &VAR_29,
         &VAR_25);
   if ((VAR_19 & VAR_9) == 0) {
    if (VAR_16)
     FUNC_6("%s: Manual SE Termination\n",
            FUNC_1(VAR_17));
    VAR_26 = (VAR_19 & VAR_11);
    VAR_27 =
        (VAR_19 & VAR_10);
   }
   if ((VAR_19 & VAR_8) == 0) {
    if (VAR_16)
     FUNC_6("%s: Manual LVD Termination\n",
            FUNC_1(VAR_17));
    VAR_28 = (VAR_19 & VAR_12);
    VAR_29 = (VAR_19 & VAR_13);
   }

   VAR_22 = 0;
   VAR_23 = 1;
   VAR_24 = 1;
  } else if ((VAR_17->features & VAR_2) != 0) {
   FUNC_4(VAR_17, &VAR_22,
          &VAR_24,
          &VAR_25);

   VAR_23 = 0;
  } else {
   FUNC_5(VAR_17, &VAR_22,
          &VAR_23,
          &VAR_24,
          &VAR_25);
  }

  if ((VAR_17->features & VAR_4) == 0)
   VAR_23 = 0;

  if (VAR_16
   && (VAR_17->features & VAR_3) == 0) {
   FUNC_6("%s: internal 50 cable %s present",
          FUNC_1(VAR_17),
          VAR_22 ? "is":"not");

   if ((VAR_17->features & VAR_4) != 0)
    FUNC_6(", internal 68 cable %s present",
           VAR_23 ? "is":"not");
   FUNC_6("\n%s: external cable %s present\n",
          FUNC_1(VAR_17),
          VAR_24 ? "is":"not");
  }
  if (VAR_16)
   FUNC_6("%s: BIOS eeprom %s present\n",
          FUNC_1(VAR_17), VAR_25 ? "is" : "not");

  if ((VAR_17->flags & VAR_0) != 0) {







   VAR_22 = 0;
  }
  if ((VAR_17->features & VAR_3) == 0
   && (VAR_22 != 0)
   && (VAR_23 != 0)
   && (VAR_24 != 0)) {
   FUNC_6("%s: Illegal cable configuration!!. "
          "Only two connectors on the "
          "adapter may be used at a "
          "time!\n", FUNC_1(VAR_17));






    VAR_22 = 0;
   VAR_23 = 0;
   VAR_24 = 0;
  }

  if ((VAR_17->features & VAR_4) != 0
   && ((VAR_24 == 0)
    || (VAR_23 == 0)
    || (VAR_27 != 0))) {
   VAR_21 |= VAR_7;
   if (VAR_16) {
    if ((VAR_17->flags & VAR_0) != 0)
     FUNC_6("%s: 68 pin termination "
            "Enabled\n", FUNC_1(VAR_17));
    else
     FUNC_6("%s: %sHigh byte termination "
            "Enabled\n", FUNC_1(VAR_17),
            VAR_27 ? "Secondary "
             : "");
   }
  }

  VAR_30 = VAR_22 + VAR_23
      + VAR_24;
  if (VAR_30 < 2 || (VAR_26 != 0)) {
   if ((VAR_17->features & VAR_3) != 0)
    VAR_21 |= VAR_6;
   else
    *VAR_20 |= VAR_14;
   if (VAR_16) {
    if ((VAR_17->flags & VAR_0) != 0)
     FUNC_6("%s: 50 pin termination "
            "Enabled\n", FUNC_1(VAR_17));
    else
     FUNC_6("%s: %sLow byte termination "
            "Enabled\n", FUNC_1(VAR_17),
            VAR_26 ? "Secondary "
            : "");
   }
  }

  if (VAR_28 != 0) {
   *VAR_20 |= VAR_14;
   if (VAR_16)
    FUNC_6("%s: Primary Low Byte termination "
           "Enabled\n", FUNC_1(VAR_17));
  }





  FUNC_3(VAR_17, VAR_15, *VAR_20);

  if (VAR_29 != 0) {
   VAR_21 |= VAR_5;
   if (VAR_16)
    FUNC_6("%s: Primary High Byte "
           "termination Enabled\n",
           FUNC_1(VAR_17));
  }

  FUNC_7(VAR_17, VAR_21);

 } else {
  if ((VAR_19 & VAR_12) != 0) {
   *VAR_20 |= VAR_14;

   if (VAR_16)
    FUNC_6("%s: %sLow byte termination Enabled\n",
           FUNC_1(VAR_17),
           (VAR_17->features & VAR_3) ? "Primary "
            : "");
  }

  if ((VAR_19 & VAR_13) != 0
   && (VAR_17->features & VAR_4) != 0) {
   VAR_21 |= VAR_7;
   if (VAR_16)
    FUNC_6("%s: %sHigh byte termination Enabled\n",
           FUNC_1(VAR_17),
           (VAR_17->features & VAR_3)
         ? "Secondary " : "");
  }





  FUNC_3(VAR_17, VAR_15, *VAR_20);

  if ((VAR_17->features & VAR_4) != 0)
   FUNC_7(VAR_17, VAR_21);
 }
 FUNC_0(VAR_18, VAR_18->sd_MS);
}
