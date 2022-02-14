
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int queue_depth; scalar_t__ tagged_supported; scalar_t__ hostdata; TYPE_2__* host; } ;
struct ipr_resource_entry {int dummy; } ;
struct ipr_ioa_cfg {TYPE_1__* host; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;
struct TYPE_3__ {int host_lock; } ;


 scalar_t__ FUNC_0 (struct ipr_resource_entry*) ;
 int FUNC_1 (struct scsi_device*,int ) ;
 int FUNC_2 (struct scsi_device*,int ) ;
 int FUNC_3 (struct scsi_device*,int) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct scsi_device *VAR_0, int VAR_1)
{
 struct ipr_ioa_cfg *VAR_2 = (struct ipr_ioa_cfg *)VAR_0->host->hostdata;
 struct ipr_resource_entry *VAR_3;
 unsigned long VAR_4 = 0;

 FUNC_4(VAR_2->host->host_lock, VAR_4);
 VAR_3 = (struct ipr_resource_entry *)VAR_0->hostdata;

 if (VAR_3) {
  if (FUNC_0(VAR_3) && VAR_0->tagged_supported) {




   FUNC_3(VAR_0, VAR_1);

   if (VAR_1)
    FUNC_1(VAR_0, VAR_0->queue_depth);
   else
    FUNC_2(VAR_0, VAR_0->queue_depth);
  } else
   VAR_1 = 0;
 } else
  VAR_1 = 0;

 FUNC_5(VAR_2->host->host_lock, VAR_4);
 return VAR_1;
}
