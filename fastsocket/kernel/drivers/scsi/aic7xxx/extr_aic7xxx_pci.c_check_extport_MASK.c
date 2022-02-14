
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct seeprom_descriptor {scalar_t__ sd_chip; int sd_DI; int sd_DO; int sd_CK; int sd_CS; int sd_RDY; int sd_MS; void* sd_dataout_offset; void* sd_status_offset; void* sd_control_offset; struct ahc_softc* sd_ahc; } ;
struct seeprom_config {int adapter_control; } ;
struct ahc_softc {int flags; char channel; int features; struct seeprom_config* seep_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct ahc_softc*,struct seeprom_descriptor*) ;
 int FUNC_1 (struct ahc_softc*,scalar_t__) ;
 char* FUNC_2 (struct ahc_softc*) ;
 int FUNC_3 (struct ahc_softc*,int ,int) ;
 int FUNC_4 (struct ahc_softc*,struct seeprom_config*) ;
 int FUNC_5 (struct seeprom_descriptor*,int*,int,int) ;
 int FUNC_6 (struct seeprom_descriptor*) ;
 int FUNC_7 (struct seeprom_config*) ;
 scalar_t__ VAR_26 ;
 int FUNC_8 (struct ahc_softc*,struct seeprom_descriptor*,int,int*) ;
 int FUNC_9 (struct seeprom_config*,int ) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static void
FUNC_11(struct ahc_softc *VAR_27, u_int *VAR_28)
{
 struct seeprom_descriptor VAR_29;
 struct seeprom_config *VAR_30;
 int VAR_31;
 int VAR_32;

 VAR_29.sd_ahc = VAR_27;
 VAR_29.sd_control_offset = VAR_17;
 VAR_29.sd_status_offset = VAR_17;
 VAR_29.sd_dataout_offset = VAR_17;
 VAR_30 = VAR_27->seep_config;







 if (VAR_27->flags & VAR_1)
  VAR_29.sd_chip = VAR_6;
 else
  VAR_29.sd_chip = VAR_5;

 VAR_29.sd_MS = VAR_20;
 VAR_29.sd_RDY = VAR_21;
 VAR_29.sd_CS = VAR_16;
 VAR_29.sd_CK = VAR_15;
 VAR_29.sd_DO = VAR_19;
 VAR_29.sd_DI = VAR_18;

 VAR_31 = FUNC_0(VAR_27, &VAR_29);
 if (VAR_31) {

  if (VAR_26)
   FUNC_10("%s: Reading SEEPROM...", FUNC_2(VAR_27));

  for (;;) {
   u_int VAR_33;

   VAR_33 = 32 * (VAR_27->channel - 'A');

   VAR_31 = FUNC_5(&VAR_29, (uint16_t *)VAR_30,
       VAR_33,
       sizeof(*VAR_30)/2);

   if (VAR_31)
    VAR_31 = FUNC_7(VAR_30);

   if (VAR_31 != 0 || VAR_29.sd_chip == VAR_6) {
    if (VAR_26) {
     if (VAR_31 == 0)
      FUNC_10 ("checksum error\n");
     else
      FUNC_10 ("done.\n");
    }
    break;
   }
   VAR_29.sd_chip = VAR_6;
  }
  FUNC_6(&VAR_29);


  if (VAR_29.sd_chip == VAR_6)
   VAR_27->flags |= VAR_1;
 }

 if (!VAR_31) {







  FUNC_3(VAR_27, VAR_13, 2);
  if (FUNC_1(VAR_27, VAR_14) == 'A'
   && FUNC_1(VAR_27, VAR_14 + 1) == 'D'
   && FUNC_1(VAR_27, VAR_14 + 2) == 'P'
   && FUNC_1(VAR_27, VAR_14 + 3) == 'T') {
   uint16_t *VAR_34;
   int VAR_35;

   VAR_34 = (uint16_t *)VAR_30;
   for (VAR_35 = 0; VAR_35 < 32; VAR_35++, VAR_34++) {
    int VAR_36;

    VAR_36 = VAR_35 * 2;
    *VAR_34 = FUNC_1(VAR_27, VAR_23 + VAR_36)
      | FUNC_1(VAR_27, VAR_23 + VAR_36 + 1) << 8;
   }
   VAR_31 = FUNC_7(VAR_30);
   if (VAR_31)
    VAR_27->flags |= VAR_2;
  }




  FUNC_3(VAR_27, VAR_9, VAR_10);
  FUNC_3(VAR_27, VAR_9, VAR_8);
 }

 if (!VAR_31) {
  if (VAR_26)
   FUNC_10("%s: No SEEPROM available.\n", FUNC_2(VAR_27));
  VAR_27->flags |= VAR_4;
  FUNC_9(VAR_27->seep_config, VAR_12);
  VAR_27->seep_config = ((void*)0);
  VAR_30 = ((void*)0);
 } else {
  FUNC_4(VAR_27, VAR_30);
 }







 VAR_32 = VAR_31;






 if ((VAR_27->features & VAR_3) != 0) {
  if ((FUNC_1(VAR_27, VAR_22) & VAR_24) == 0)
   VAR_32 = VAR_11;
 }

 if (VAR_32) {
  VAR_27->flags |= VAR_0;
  FUNC_0(VAR_27, &VAR_29);
  FUNC_8(VAR_27, &VAR_29, VAR_30->adapter_control, VAR_28);
  FUNC_6(&VAR_29);
 } else if (VAR_31) {
  *VAR_28 &= ~VAR_25;
  if ((VAR_30->adapter_control & VAR_7) != 0)
   *VAR_28 |= VAR_25;
  if (VAR_26)
   FUNC_10("%s: Low byte termination %sabled\n",
          FUNC_2(VAR_27),
          (*VAR_28 & VAR_25) ? "en" : "dis");
 }
}
