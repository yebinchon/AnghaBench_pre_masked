
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_3__* device; } ;
struct TYPE_6__ {TYPE_2__* host; } ;
struct TYPE_5__ {TYPE_1__* hostt; } ;
struct TYPE_4__ {int (* eh_device_reset_handler ) (struct scsi_cmnd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_2)
{
 int VAR_3;

 if (!VAR_2->device->host->hostt->eh_device_reset_handler)
  return VAR_0;

 VAR_3 = VAR_2->device->host->hostt->eh_device_reset_handler(VAR_2);
 if (VAR_3 == VAR_1)
  FUNC_0(VAR_2->device, ((void*)0));
 return VAR_3;
}
