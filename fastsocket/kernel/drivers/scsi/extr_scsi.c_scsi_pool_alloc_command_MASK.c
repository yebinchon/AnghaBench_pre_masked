
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_cmd_pool {int gfp_mask; int cmd_slab; int sense_slab; } ;
struct scsi_cmnd {int sense_buffer; } ;
typedef int gfp_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,struct scsi_cmnd*) ;
 struct scsi_cmnd* FUNC_2 (int ,int) ;

__attribute__((used)) static struct scsi_cmnd *
FUNC_3(struct scsi_host_cmd_pool *VAR_0, gfp_t VAR_1)
{
 struct scsi_cmnd *VAR_2;

 VAR_2 = FUNC_2(VAR_0->cmd_slab, VAR_1 | VAR_0->gfp_mask);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->sense_buffer = FUNC_0(VAR_0->sense_slab,
          VAR_1 | VAR_0->gfp_mask);
 if (!VAR_2->sense_buffer) {
  FUNC_1(VAR_0->cmd_slab, VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
