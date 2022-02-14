
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cd {TYPE_1__* device; } ;
struct cdrom_device_info {struct scsi_cd* handle; } ;
struct TYPE_2__ {int sector_size; } ;


 int FUNC_0 (struct scsi_cd*,int) ;

__attribute__((used)) static void FUNC_1(struct cdrom_device_info *VAR_0)
{
 struct scsi_cd *VAR_1 = VAR_0->handle;

 if (VAR_1->device->sector_size > 2048)
  FUNC_0(VAR_1, 2048);

}
