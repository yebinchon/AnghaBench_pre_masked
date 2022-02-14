
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {int capacity; TYPE_1__* disk; scalar_t__ DPOFUA; scalar_t__ WCE; scalar_t__ first_scan; scalar_t__ media_present; struct scsi_device* device; } ;
struct scsi_device {int dummy; } ;
struct gendisk {int dummy; } ;
struct TYPE_2__ {int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct scsi_device*) ;
 struct scsi_disk* FUNC_5 (struct gendisk*) ;
 int FUNC_6 (int ,struct scsi_disk*,char*) ;
 int FUNC_7 (struct scsi_disk*,unsigned char*) ;
 int FUNC_8 (struct scsi_disk*) ;
 int FUNC_9 (struct scsi_disk*) ;
 int FUNC_10 (struct scsi_disk*) ;
 int FUNC_11 (struct scsi_disk*,unsigned char*) ;
 int FUNC_12 (struct scsi_disk*,unsigned char*) ;
 int FUNC_13 (struct scsi_disk*,unsigned char*) ;
 int FUNC_14 (struct scsi_disk*) ;
 scalar_t__ FUNC_15 (struct scsi_device*) ;
 int FUNC_16 (struct gendisk*,int ) ;

__attribute__((used)) static int FUNC_17(struct gendisk *VAR_6)
{
 struct scsi_disk *VAR_7 = FUNC_5(VAR_6);
 struct scsi_device *VAR_8 = VAR_7->device;
 unsigned char *VAR_9;
 unsigned VAR_10 = 0;

 FUNC_0(3, FUNC_6(VAR_1, VAR_7,
          "sd_revalidate_disk\n"));





 if (!FUNC_4(VAR_8))
  goto out;

 VAR_9 = FUNC_3(VAR_5, VAR_0);
 if (!VAR_9) {
  FUNC_6(VAR_2, VAR_7, "sd_revalidate_disk: Memory "
     "allocation failure.\n");
  goto out;
 }

 FUNC_14(VAR_7);





 if (VAR_7->media_present) {
  FUNC_12(VAR_7, VAR_9);

  if (FUNC_15(VAR_8)) {
   FUNC_10(VAR_7);
   FUNC_9(VAR_7);
   FUNC_8(VAR_7);
  }

  FUNC_13(VAR_7, VAR_9);
  FUNC_11(VAR_7, VAR_9);
  FUNC_7(VAR_7, VAR_9);
 }

 VAR_7->first_scan = 0;





 if (VAR_7->WCE) {
  VAR_10 |= VAR_3;
  if (VAR_7->DPOFUA)
   VAR_10 |= VAR_4;
 }

 FUNC_1(VAR_7->disk->queue, VAR_10);

 FUNC_16(VAR_6, VAR_7->capacity);
 FUNC_2(VAR_9);

 out:
 return 0;
}
