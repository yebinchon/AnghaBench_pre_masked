
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int host_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_1)
{





 FUNC_0(VAR_1->device->host->host_lock);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1->device->host->host_lock);

 return VAR_0;
}
