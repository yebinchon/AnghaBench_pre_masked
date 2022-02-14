
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_sense_hdr {int asc; } ;
struct scsi_cd {int previous_state; TYPE_1__* device; } ;
struct cdrom_device_info {struct scsi_cd* handle; } ;
struct TYPE_3__ {int changed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scsi_cd*) ;
 int FUNC_1 (struct scsi_sense_hdr*) ;
 struct scsi_sense_hdr* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct scsi_sense_hdr*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (struct cdrom_device_info*) ;
 int FUNC_6 (TYPE_1__*,struct scsi_sense_hdr*) ;

__attribute__((used)) static int FUNC_7(struct cdrom_device_info *VAR_4, int VAR_5)
{
 struct scsi_cd *VAR_6 = VAR_4->handle;
 int VAR_7;
 struct scsi_sense_hdr *VAR_8;

 if (VAR_0 != VAR_5) {

  return -VAR_1;
 }

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
 VAR_7 = FUNC_6(VAR_6->device, VAR_8);
 if (VAR_7 || (FUNC_3(VAR_8) &&

         VAR_8->asc == 0x3a)) {





  VAR_6->device->changed = 1;

  VAR_7 = 1;
  goto out;
 };

 VAR_7 = VAR_6->device->changed;
 VAR_6->device->changed = 0;


 if (VAR_7) {

  FUNC_5(VAR_4);
  FUNC_0(VAR_6);
 }

out:

 if (VAR_7 != VAR_6->previous_state)
  FUNC_4(VAR_6->device, VAR_3,
         VAR_2);
 VAR_6->previous_state = VAR_7;
 FUNC_1(VAR_8);

 return VAR_7;
}
