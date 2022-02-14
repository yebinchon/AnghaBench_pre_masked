
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
 int VAR_1 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd * VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_0;

 FUNC_1(VAR_2->device->host->host_lock, VAR_3);
 VAR_4 = FUNC_0(VAR_2);
 FUNC_2(VAR_2->device->host->host_lock, VAR_3);

 VAR_1;
 return VAR_4;
}
