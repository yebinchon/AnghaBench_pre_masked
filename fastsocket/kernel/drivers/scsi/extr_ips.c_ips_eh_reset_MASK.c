
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int host_lock; } ;


 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0->device->host->host_lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(VAR_0->device->host->host_lock);

 return VAR_1;
}
