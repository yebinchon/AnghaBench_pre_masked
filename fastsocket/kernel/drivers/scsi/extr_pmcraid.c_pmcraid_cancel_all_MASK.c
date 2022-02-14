
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scsi_cmnd {TYPE_2__* device; } ;
struct pmcraid_resource_entry {int cfg_entry; } ;
struct pmcraid_ioarcb {int ioarcb_bus_addr; scalar_t__ data_transfer_length; scalar_t__ ioadl_length; scalar_t__ ioadl_bus_addr; int * cdb; int request_type; int request_flags0; } ;
struct pmcraid_cmd {TYPE_1__* ioa_cb; struct scsi_cmnd* scsi_cmd; } ;
struct TYPE_4__ {struct pmcraid_resource_entry* hostdata; } ;
struct TYPE_3__ {struct pmcraid_ioarcb ioarcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ) ;
 void FUNC_2 (struct pmcraid_cmd*) ;
 void FUNC_3 (struct pmcraid_cmd*) ;
 int FUNC_4 (struct pmcraid_cmd*,void (*) (struct pmcraid_cmd*),int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(struct pmcraid_cmd *VAR_7, u32 VAR_8)
{
 struct scsi_cmnd *VAR_9 = VAR_7->scsi_cmd;
 struct pmcraid_ioarcb *VAR_10 = &VAR_7->ioa_cb->ioarcb;
 struct pmcraid_resource_entry *VAR_11 = VAR_9->device->hostdata;
 void (*VAR_12) (struct pmcraid_cmd *) = VAR_8 ? FUNC_2
       : FUNC_3;

 FUNC_1(VAR_10->cdb, 0, VAR_1);
 VAR_10->request_flags0 = VAR_5;
 VAR_10->request_type = VAR_4;
 VAR_10->cdb[0] = VAR_0;

 if (FUNC_0(VAR_11->cfg_entry))
  VAR_10->cdb[1] = VAR_3;

 VAR_10->ioadl_bus_addr = 0;
 VAR_10->ioadl_length = 0;
 VAR_10->data_transfer_length = 0;
 VAR_10->ioarcb_bus_addr &= (~0x1FULL);




 FUNC_4(VAR_7, VAR_12,
    VAR_2,
    VAR_6);
}
