
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_cmd_pool {int cmd_slab; int sense_slab; } ;
struct scsi_cmnd {struct scsi_cmnd* sense_buffer; struct scsi_cmnd* prot_sdb; } ;


 int FUNC_0 (int ,struct scsi_cmnd*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct scsi_host_cmd_pool *VAR_1,
    struct scsi_cmnd *VAR_2)
{
 if (VAR_2->prot_sdb)
  FUNC_0(VAR_0, VAR_2->prot_sdb);

 FUNC_0(VAR_1->sense_slab, VAR_2->sense_buffer);
 FUNC_0(VAR_1->cmd_slab, VAR_2);
}
