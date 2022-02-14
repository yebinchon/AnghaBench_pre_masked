
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
struct info_str {char* buffer; int length; scalar_t__ offset; scalar_t__ pos; } ;
struct TYPE_2__ {int numscbs; } ;
struct ahd_softc {int features; int our_id; int * seep_config; TYPE_1__ scb_data; int description; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ahd_softc*,char*) ;
 int FUNC_1 (struct ahd_softc*,struct info_str*,int ,char,int) ;
 int FUNC_2 (struct ahd_softc*,char*,int) ;
 int FUNC_3 (struct info_str*,char*,...) ;

int
FUNC_4(struct Scsi_Host *VAR_4, char *VAR_5, char **VAR_6,
      off_t VAR_7, int VAR_8, int VAR_9)
{
 struct ahd_softc *VAR_10 = *(struct ahd_softc **)VAR_4->hostdata;
 struct info_str VAR_11;
 char VAR_12[256];
 u_int VAR_13;
 u_int VAR_14;
 int VAR_15;


 if (VAR_9 == VAR_3) {
  VAR_15 = FUNC_2(VAR_10, VAR_5, VAR_8);
  goto done;
 }

 if (VAR_6)
  *VAR_6 = VAR_5;

 VAR_11.buffer = VAR_5;
 VAR_11.length = VAR_8;
 VAR_11.offset = VAR_7;
 VAR_11.pos = 0;

 FUNC_3(&VAR_11, "Adaptec AIC79xx driver version: %s\n",
    VAR_2);
 FUNC_3(&VAR_11, "%s\n", VAR_10->description);
 FUNC_0(VAR_10, VAR_12);
 FUNC_3(&VAR_11, "%s\n", VAR_12);
 FUNC_3(&VAR_11, "Allocated SCBs: %d, SG List Length: %d\n\n",
    VAR_10->scb_data.numscbs, VAR_0);

 VAR_13 = 16;

 if (VAR_10->seep_config == ((void*)0))
  FUNC_3(&VAR_11, "No Serial EEPROM\n");
 else {
  FUNC_3(&VAR_11, "Serial EEPROM:\n");
  for (VAR_14 = 0; VAR_14 < sizeof(*VAR_10->seep_config)/2; VAR_14++) {
   if (((VAR_14 % 8) == 0) && (VAR_14 != 0)) {
    FUNC_3(&VAR_11, "\n");
   }
   FUNC_3(&VAR_11, "0x%.4x ",
      ((uint16_t*)VAR_10->seep_config)[VAR_14]);
  }
  FUNC_3(&VAR_11, "\n");
 }
 FUNC_3(&VAR_11, "\n");

 if ((VAR_10->features & VAR_1) == 0)
  VAR_13 = 8;

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {

  FUNC_1(VAR_10, &VAR_11, VAR_10->our_id, 'A',
                       VAR_14);
 }
 VAR_15 = VAR_11.pos > VAR_11.offset ? VAR_11.pos - VAR_11.offset : 0;
done:
 return (VAR_15);
}
