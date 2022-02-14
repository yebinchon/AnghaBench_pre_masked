
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_long ;
typedef int u_int16_t ;
typedef int u_int ;
struct seeprom_descriptor {int sd_DI; int sd_DO; int sd_CK; int sd_CS; int sd_RDY; scalar_t__ sd_MS; void* sd_chip; void* sd_dataout_offset; void* sd_status_offset; void* sd_control_offset; struct ahc_softc* sd_ahc; } ;
struct seeprom_config {int dummy; } ;
struct ahc_softc {int chip; int flags; char channel; int * seep_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
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
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct ahc_softc*,struct seeprom_descriptor*) ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*,int *) ;
 int FUNC_3 (struct ahc_softc*) ;
 int FUNC_4 (struct seeprom_descriptor*,int *,int,int) ;
 int FUNC_5 (struct seeprom_descriptor*) ;
 int FUNC_6 (struct ahc_softc*,int *) ;
 int FUNC_7 (struct ahc_softc*) ;
 int FUNC_8 (struct seeprom_config*) ;
 int FUNC_9 (struct seeprom_descriptor*,int *,int,int) ;
 int * FUNC_10 (int,int ,int ) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12(struct ahc_softc *VAR_23, char *VAR_24, int VAR_25)
{
 struct seeprom_descriptor VAR_26;
 int VAR_27;
 u_long VAR_28;
 int VAR_29;
 int VAR_30;


 VAR_30 = -VAR_10;
 FUNC_2(VAR_23, &VAR_28);
 VAR_29 = FUNC_1(VAR_23);
 if (!VAR_29)
  FUNC_3(VAR_23);

 if (VAR_25 != sizeof(struct seeprom_config)) {
  FUNC_11("ahc_proc_write_seeprom: incorrect buffer size\n");
  goto done;
 }

 VAR_27 = FUNC_8((struct seeprom_config*)VAR_24);
 if (VAR_27 == 0) {
  FUNC_11("ahc_proc_write_seeprom: cksum verification failed\n");
  goto done;
 }

 VAR_26.sd_ahc = VAR_23;
 if ((VAR_23->chip & VAR_2) != 0) {
  VAR_26.sd_control_offset = VAR_16;
  VAR_26.sd_status_offset = VAR_21;
  VAR_26.sd_dataout_offset = VAR_21;
  VAR_26.sd_chip = VAR_3;
  VAR_26.sd_MS = 0;
  VAR_26.sd_RDY = VAR_9;
  VAR_26.sd_CS = VAR_6;
  VAR_26.sd_CK = VAR_5;
  VAR_26.sd_DO = VAR_8;
  VAR_26.sd_DI = VAR_7;
  VAR_27 = VAR_22;
 } else {
  FUNC_11("ahc_proc_write_seeprom: unsupported adapter type\n");
  goto done;
 }

 if (!VAR_27) {
  FUNC_11("ahc_proc_write_seeprom: No Serial EEPROM\n");
  goto done;
 } else {
  u_int VAR_31;

  if (VAR_23->seep_config == ((void*)0)) {
   VAR_23->seep_config = FUNC_10(sizeof(*VAR_23->seep_config),
        VAR_11, VAR_12);
   if (VAR_23->seep_config == ((void*)0)) {
    FUNC_11("aic7xxx: Unable to allocate serial "
           "eeprom buffer.  Write failing\n");
    goto done;
   }
  }
  FUNC_11("aic7xxx: Writing Serial EEPROM\n");
  VAR_31 = 32 * (VAR_23->channel - 'A');
  FUNC_9(&VAR_26, (u_int16_t *)VAR_24, VAR_31,
      sizeof(struct seeprom_config)/2);
  FUNC_4(&VAR_26, (uint16_t *)VAR_23->seep_config,
     VAR_31, sizeof(struct seeprom_config)/2);




  VAR_30 = VAR_25;
 }

done:
 if (!VAR_29)
  FUNC_7(VAR_23);
 FUNC_6(VAR_23, &VAR_28);
 return (VAR_30);
}
