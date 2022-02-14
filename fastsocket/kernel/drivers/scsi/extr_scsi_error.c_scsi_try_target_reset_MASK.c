
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_3__* device; } ;
struct TYPE_6__ {TYPE_1__* host; } ;
struct TYPE_5__ {int (* eh_target_reset_handler ) (struct scsi_cmnd*) ;} ;
struct TYPE_4__ {int host_lock; TYPE_2__* hostt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 if (!VAR_3->device->host->hostt->eh_target_reset_handler)
  return VAR_0;

 VAR_5 = VAR_3->device->host->hostt->eh_target_reset_handler(VAR_3);
 if (VAR_5 == VAR_1) {
  FUNC_2(VAR_3->device->host->host_lock, VAR_4);
  FUNC_0(FUNC_1(VAR_3->device), ((void*)0),
       VAR_2);
  FUNC_3(VAR_3->device->host->host_lock, VAR_4);
 }

 return VAR_5;
}
