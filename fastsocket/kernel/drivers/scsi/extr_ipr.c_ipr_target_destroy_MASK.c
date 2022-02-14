
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {scalar_t__ channel; struct ipr_sata_port* hostdata; int id; int dev; } ;
struct ipr_sata_port {int ap; } ;
struct ipr_ioa_cfg {int target_ids; int vset_ids; int array_ids; scalar_t__ sis64; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct Scsi_Host* FUNC_2 (int *) ;
 int FUNC_3 (struct scsi_target*) ;
 int FUNC_4 (struct ipr_sata_port*) ;

__attribute__((used)) static void FUNC_5(struct scsi_target *VAR_2)
{
 struct ipr_sata_port *VAR_3 = VAR_2->hostdata;
 struct Scsi_Host *VAR_4 = FUNC_2(&VAR_2->dev);
 struct ipr_ioa_cfg *VAR_5 = (struct ipr_ioa_cfg *) VAR_4->hostdata;

 if (VAR_5->sis64) {
  if (!FUNC_3(VAR_2)) {
   if (VAR_2->channel == VAR_0)
    FUNC_1(VAR_2->id, VAR_5->array_ids);
   else if (VAR_2->channel == VAR_1)
    FUNC_1(VAR_2->id, VAR_5->vset_ids);
   else if (VAR_2->channel == 0)
    FUNC_1(VAR_2->id, VAR_5->target_ids);
  }
 }

 if (VAR_3) {
  VAR_2->hostdata = ((void*)0);
  FUNC_0(VAR_3->ap);
  FUNC_4(VAR_3);
 }
}
