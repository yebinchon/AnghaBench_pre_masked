
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {struct ipr_resource_entry* hostdata; TYPE_1__* host; } ;
struct ipr_resource_entry {int needs_sync_complete; scalar_t__ in_erp; scalar_t__ add_to_ml; struct scsi_device* sdev; } ;
struct ipr_ioa_cfg {TYPE_2__* host; } ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*) ;
 struct ipr_resource_entry* FUNC_1 (struct scsi_device*) ;
 scalar_t__ FUNC_2 (struct ipr_resource_entry*) ;
 int FUNC_3 (struct ipr_resource_entry*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct scsi_device *VAR_1)
{
 struct ipr_ioa_cfg *VAR_2 = (struct ipr_ioa_cfg *) VAR_1->host->hostdata;
 struct ipr_resource_entry *VAR_3;
 unsigned long VAR_4;
 int VAR_5 = -VAR_0;

 VAR_1->hostdata = ((void*)0);

 FUNC_4(VAR_2->host->host_lock, VAR_4);

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3) {
  VAR_3->sdev = VAR_1;
  VAR_3->add_to_ml = 0;
  VAR_3->in_erp = 0;
  VAR_1->hostdata = VAR_3;
  if (!FUNC_3(VAR_3))
   VAR_3->needs_sync_complete = 1;
  VAR_5 = 0;
  if (FUNC_2(VAR_3)) {
   FUNC_5(VAR_2->host->host_lock, VAR_4);
   return FUNC_0(VAR_1);
  }
 }

 FUNC_5(VAR_2->host->host_lock, VAR_4);

 return VAR_5;
}
