
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_driver {int dummy; } ;
struct scsi_cmnd {TYPE_2__* request; } ;
struct TYPE_4__ {TYPE_1__* rq_disk; } ;
struct TYPE_3__ {scalar_t__ private_data; } ;



__attribute__((used)) static struct scsi_driver *FUNC_0(struct scsi_cmnd *VAR_0)
{
 return *(struct scsi_driver **)VAR_0->request->rq_disk->private_data;
}
