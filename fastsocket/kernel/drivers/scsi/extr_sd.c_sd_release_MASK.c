
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int openers; struct scsi_device* device; } ;
struct scsi_device {scalar_t__ removable; } ;
struct gendisk {int dummy; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct scsi_device*) ;
 struct scsi_disk* FUNC_2 (struct gendisk*) ;
 int FUNC_3 (struct scsi_disk*) ;
 int FUNC_4 (struct scsi_device*,int ) ;
 int FUNC_5 (int ,struct scsi_disk*,char*) ;

__attribute__((used)) static int FUNC_6(struct gendisk *VAR_2, fmode_t VAR_3)
{
 struct scsi_disk *VAR_4 = FUNC_2(VAR_2);
 struct scsi_device *VAR_5 = VAR_4->device;

 FUNC_0(3, FUNC_5(VAR_0, VAR_4, "sd_release\n"));

 if (!--VAR_4->openers && VAR_5->removable) {
  if (FUNC_1(VAR_5))
   FUNC_4(VAR_5, VAR_1);
 }





 FUNC_3(VAR_4);
 return 0;
}
