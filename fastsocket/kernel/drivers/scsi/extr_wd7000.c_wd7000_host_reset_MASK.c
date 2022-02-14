
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_4__ {int host_lock; scalar_t__ hostdata; } ;
struct TYPE_3__ {TYPE_2__* host; } ;
typedef int Adapter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_2)
{
 Adapter *VAR_3 = (Adapter *) VAR_2->device->host->hostdata;

 FUNC_0(VAR_2->device->host->host_lock);

 if (FUNC_1(VAR_3) < 0) {
  FUNC_0(VAR_2->device->host->host_lock);
  return VAR_0;
 }

 FUNC_2(VAR_3);

 FUNC_0(VAR_2->device->host->host_lock);
 return VAR_1;
}
