
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int queue_depth; scalar_t__ tagged_supported; scalar_t__ hostdata; } ;
struct pmcraid_resource_entry {int cfg_entry; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_device*,int ) ;
 int FUNC_3 (struct scsi_device*,int ) ;
 int FUNC_4 (struct scsi_device*,int) ;

__attribute__((used)) static int FUNC_5(struct scsi_device *VAR_0, int VAR_1)
{
 struct pmcraid_resource_entry *VAR_2;

 VAR_2 = (struct pmcraid_resource_entry *)VAR_0->hostdata;

 if ((VAR_2) && VAR_0->tagged_supported &&
     (FUNC_0(VAR_2->cfg_entry) || FUNC_1(VAR_2->cfg_entry))) {
  FUNC_4(VAR_0, VAR_1);

  if (VAR_1)
   FUNC_2(VAR_0, VAR_0->queue_depth);
  else
   FUNC_3(VAR_0, VAR_0->queue_depth);
 } else
  VAR_1 = 0;

 return VAR_1;
}
