
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct Scsi_Host {TYPE_2__* hostt; } ;
struct TYPE_4__ {int (* eh_device_reset_handler ) (struct scsi_cmnd*) ;int (* eh_bus_reset_handler ) (struct scsi_cmnd*) ;} ;
struct TYPE_3__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_2)
{
 int VAR_3;
 struct Scsi_Host *VAR_4 = VAR_2->device->host;

 if (!VAR_4->hostt->eh_device_reset_handler)
  goto try_bus_reset;

 VAR_3 = VAR_4->hostt->eh_device_reset_handler(VAR_2);
 if (VAR_3 == VAR_1)
  return VAR_3;

try_bus_reset:
 if (VAR_4->hostt->eh_bus_reset_handler)
  return VAR_4->hostt->eh_bus_reset_handler(VAR_2);

 return VAR_0;
}
