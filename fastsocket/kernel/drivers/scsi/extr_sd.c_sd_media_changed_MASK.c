
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int asc; } ;
struct scsi_disk {int media_present; int previous_state; struct scsi_device* device; } ;
struct scsi_device {int changed; int removable; } ;
struct gendisk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct scsi_sense_hdr*) ;
 struct scsi_sense_hdr* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (struct scsi_device*) ;
 struct scsi_disk* FUNC_5 (struct gendisk*) ;
 scalar_t__ FUNC_6 (struct scsi_sense_hdr*) ;
 int FUNC_7 (struct scsi_device*,int ,int ,struct scsi_sense_hdr*) ;
 int FUNC_8 (int ,struct scsi_disk*,char*) ;
 int FUNC_9 (struct scsi_device*,int ,int ) ;
 int FUNC_10 (struct scsi_disk*) ;

__attribute__((used)) static int FUNC_11(struct gendisk *VAR_6)
{
 struct scsi_disk *VAR_7 = FUNC_5(VAR_6);
 struct scsi_device *VAR_8 = VAR_7->device;
 struct scsi_sense_hdr *VAR_9 = ((void*)0);
 int VAR_10;

 FUNC_0(3, FUNC_8(VAR_2, VAR_7, "sd_media_changed\n"));

 if (!VAR_8->removable)
  return 0;







 if (!FUNC_4(VAR_8)) {
  FUNC_10(VAR_7);
  VAR_10 = 1;
  goto out;
 }
 VAR_10 = -VAR_0;

 if (FUNC_3(VAR_8)) {
  VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1);
  VAR_10 = FUNC_7(VAR_8, VAR_5, VAR_4,
           VAR_9);
 }







 if (VAR_10 || (FUNC_6(VAR_9) &&

         VAR_9->asc == 0x3a)) {
  FUNC_10(VAR_7);
  VAR_10 = 1;
  goto out;
 }






 VAR_7->media_present = 1;

 VAR_10 = VAR_8->changed;
 VAR_8->changed = 0;
out:
 if (VAR_10 != VAR_7->previous_state)
  FUNC_9(VAR_8, VAR_3, VAR_1);
 VAR_7->previous_state = VAR_10;
 FUNC_1(VAR_9);
 return VAR_10;
}
