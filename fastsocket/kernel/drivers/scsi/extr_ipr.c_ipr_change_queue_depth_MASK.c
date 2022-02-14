
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int queue_depth; scalar_t__ hostdata; TYPE_1__* host; } ;
struct ipr_resource_entry {int dummy; } ;
struct ipr_ioa_cfg {TYPE_2__* host; } ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ipr_resource_entry*) ;
 int FUNC_1 (struct scsi_device*,int ,int) ;
 int FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct scsi_device *VAR_3, int VAR_4,
      int VAR_5)
{
 struct ipr_ioa_cfg *VAR_6 = (struct ipr_ioa_cfg *)VAR_3->host->hostdata;
 struct ipr_resource_entry *VAR_7;
 unsigned long VAR_8 = 0;

 if (VAR_5 != VAR_2)
  return -VAR_0;

 FUNC_3(VAR_6->host->host_lock, VAR_8);
 VAR_7 = (struct ipr_resource_entry *)VAR_3->hostdata;

 if (VAR_7 && FUNC_0(VAR_7) && VAR_4 > VAR_1)
  VAR_4 = VAR_1;
 FUNC_4(VAR_6->host->host_lock, VAR_8);

 FUNC_1(VAR_3, FUNC_2(VAR_3), VAR_4);
 return VAR_3->queue_depth;
}
