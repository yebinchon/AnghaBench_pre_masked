
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct scsi_disk {TYPE_1__* device; } ;
struct TYPE_2__ {scalar_t__ start_stop_pwr_cond; scalar_t__ no_start_on_add; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (unsigned int) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct scsi_disk*,struct scsi_sense_hdr*) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 unsigned int FUNC_5 (TYPE_1__*,unsigned char*,int ,int *,int ,struct scsi_sense_hdr*,int ,int ,int *) ;
 int FUNC_6 (struct scsi_sense_hdr*) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 int FUNC_8 (struct scsi_disk*,unsigned int) ;
 int FUNC_9 (struct scsi_disk*,struct scsi_sense_hdr*) ;
 int FUNC_10 (int ,struct scsi_disk*,char*) ;
 scalar_t__ FUNC_11 (int,unsigned long) ;

__attribute__((used)) static void
FUNC_12(struct scsi_disk *VAR_11)
{
 unsigned char VAR_12[10];
 unsigned long VAR_13 = 0;
 int VAR_14, VAR_15;
 unsigned int VAR_16;
 struct scsi_sense_hdr VAR_17;
 int VAR_18 = 0;

 VAR_15 = 0;



 do {
  VAR_14 = 0;

  do {
   VAR_12[0] = VAR_8;
   FUNC_2((void *) &VAR_12[1], 0, 9);

   VAR_16 = FUNC_5(VAR_11->device, VAR_12,
            VAR_0, ((void*)0), 0,
            &VAR_17, VAR_6,
            VAR_5, ((void*)0));






   if (FUNC_1(VAR_11, &VAR_17))
    return;

   if (VAR_16)
    VAR_18 = FUNC_6(&VAR_17);
   VAR_14++;
  } while (VAR_14 < 3 &&
    (!FUNC_7(VAR_16) ||
     ((FUNC_0(VAR_16) & VAR_1) &&
     VAR_18 && VAR_17.sense_key == VAR_9)));

  if ((FUNC_0(VAR_16) & VAR_1) == 0) {


   if(!VAR_15 && !FUNC_7(VAR_16)) {
    FUNC_10(VAR_3, VAR_11, "Unit Not Ready\n");
    FUNC_8(VAR_11, VAR_16);
   }
   break;
  }




  if (VAR_11->device->no_start_on_add)
   break;

  if (VAR_18 && VAR_17.sense_key == VAR_4) {
   if (VAR_17.asc == 4 && VAR_17.ascq == 3)
    break;
   if (VAR_17.asc == 4 && VAR_17.ascq == 0xb)
    break;
   if (VAR_17.asc == 4 && VAR_17.ascq == 0xc)
    break;



   if (!VAR_15) {
    FUNC_10(VAR_3, VAR_11, "Spinning up disk...");
    VAR_12[0] = VAR_7;
    VAR_12[1] = 1;
    FUNC_2((void *) &VAR_12[2], 0, 8);
    VAR_12[4] = 1;
    if (VAR_11->device->start_stop_pwr_cond)
     VAR_12[4] |= 1 << 4;
    FUNC_5(VAR_11->device, VAR_12, VAR_0,
       ((void*)0), 0, &VAR_17,
       VAR_6, VAR_5,
       ((void*)0));
    VAR_13 = VAR_10 + 100 * VAR_2;
    VAR_15 = 1;
   }

   FUNC_3(1000);
   FUNC_4(".");






  } else if (VAR_18 &&
    VAR_17.sense_key == VAR_9 &&
    VAR_17.asc == 0x28) {
   if (!VAR_15) {
    VAR_13 = VAR_10 + 5 * VAR_2;
    VAR_15 = 1;
   }

   FUNC_3(1000);
  } else {


   if(!VAR_15) {
    FUNC_10(VAR_3, VAR_11, "Unit Not Ready\n");
    FUNC_9(VAR_11, &VAR_17);
   }
   break;
  }

 } while (VAR_15 && FUNC_11(VAR_10, VAR_13));

 if (VAR_15) {
  if (FUNC_7(VAR_16))
   FUNC_4("ready\n");
  else
   FUNC_4("not responding...\n");
 }
}
