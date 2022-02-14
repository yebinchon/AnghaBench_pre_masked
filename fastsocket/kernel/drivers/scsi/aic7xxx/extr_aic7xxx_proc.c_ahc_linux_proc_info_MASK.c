
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
struct info_str {char* buffer; int length; scalar_t__ offset; scalar_t__ pos; } ;
struct ahc_softc {int features; int our_id; int our_id_b; int * seep_config; TYPE_1__* scb_data; int description; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {int numscbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ahc_softc*,char*) ;
 int FUNC_1 (struct ahc_softc*,struct info_str*,int,char,int,int) ;
 int FUNC_2 (struct ahc_softc*,char*,int) ;
 int FUNC_3 (struct info_str*,char*,...) ;

int
FUNC_4(struct Scsi_Host *VAR_5, char *VAR_6, char **VAR_7,
      off_t VAR_8, int VAR_9, int VAR_10)
{
 struct ahc_softc *VAR_11 = *(struct ahc_softc **)VAR_5->hostdata;
 struct info_str VAR_12;
 char VAR_13[256];
 u_int VAR_14;
 u_int VAR_15;
 int VAR_16;


 if (VAR_10 == VAR_4) {
  VAR_16 = FUNC_2(VAR_11, VAR_6, VAR_9);
  goto done;
 }

 if (VAR_7)
  *VAR_7 = VAR_6;

 VAR_12.buffer = VAR_6;
 VAR_12.length = VAR_9;
 VAR_12.offset = VAR_8;
 VAR_12.pos = 0;

 FUNC_3(&VAR_12, "Adaptec AIC7xxx driver version: %s\n",
    VAR_3);
 FUNC_3(&VAR_12, "%s\n", VAR_11->description);
 FUNC_0(VAR_11, VAR_13);
 FUNC_3(&VAR_12, "%s\n", VAR_13);
 FUNC_3(&VAR_12, "Allocated SCBs: %d, SG List Length: %d\n\n",
    VAR_11->scb_data->numscbs, VAR_0);


 if (VAR_11->seep_config == ((void*)0))
  FUNC_3(&VAR_12, "No Serial EEPROM\n");
 else {
  FUNC_3(&VAR_12, "Serial EEPROM:\n");
  for (VAR_15 = 0; VAR_15 < sizeof(*VAR_11->seep_config)/2; VAR_15++) {
   if (((VAR_15 % 8) == 0) && (VAR_15 != 0)) {
    FUNC_3(&VAR_12, "\n");
   }
   FUNC_3(&VAR_12, "0x%.4x ",
      ((uint16_t*)VAR_11->seep_config)[VAR_15]);
  }
  FUNC_3(&VAR_12, "\n");
 }
 FUNC_3(&VAR_12, "\n");

 VAR_14 = 16;
 if ((VAR_11->features & (VAR_2|VAR_1)) == 0)
  VAR_14 = 8;

 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  u_int VAR_17;
  u_int VAR_18;
  char VAR_19;

  VAR_19 = 'A';
  VAR_17 = VAR_11->our_id;
  VAR_18 = VAR_15;
  if (VAR_15 > 7 && (VAR_11->features & VAR_1) != 0) {
   VAR_19 = 'B';
   VAR_17 = VAR_11->our_id_b;
   VAR_18 = VAR_15 % 8;
  }

  FUNC_1(VAR_11, &VAR_12, VAR_17,
          VAR_19, VAR_18, VAR_15);
 }
 VAR_16 = VAR_12.pos > VAR_12.offset ? VAR_12.pos - VAR_12.offset : 0;
done:
 return (VAR_16);
}
