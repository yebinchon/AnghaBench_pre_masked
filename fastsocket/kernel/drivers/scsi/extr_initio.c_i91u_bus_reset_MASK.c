
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct initio_host {int dummy; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int host_lock; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct initio_host*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd * VAR_1)
{
 struct initio_host *VAR_2;

 VAR_2 = (struct initio_host *) VAR_1->device->host->hostdata;

 FUNC_1(VAR_1->device->host->host_lock);
 FUNC_0(VAR_2, 0);
 FUNC_2(VAR_1->device->host->host_lock);

 return VAR_0;
}
