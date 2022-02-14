
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
struct TYPE_4__ {int (* eh_abort_handler ) (struct scsi_cmnd*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_1(struct scsi_cmnd *VAR_1)
{
 if (!VAR_1->device->host->hostt->eh_abort_handler)
  return VAR_0;

 return VAR_1->device->host->hostt->eh_abort_handler(VAR_1);
}
