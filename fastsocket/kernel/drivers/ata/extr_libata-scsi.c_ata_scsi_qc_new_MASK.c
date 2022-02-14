
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int result; } ;
struct ata_queued_cmd {void (* scsidone ) (struct scsi_cmnd*) ;int n_elem; int sg; struct scsi_cmnd* scsicmd; } ;
struct ata_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ata_queued_cmd* FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static struct ata_queued_cmd *FUNC_3(struct ata_device *VAR_2,
           struct scsi_cmnd *VAR_3,
           void (*VAR_4)(struct scsi_cmnd *))
{
 struct ata_queued_cmd *VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5) {
  VAR_5->scsicmd = VAR_3;
  VAR_5->scsidone = VAR_4;

  VAR_5->sg = FUNC_2(VAR_3);
  VAR_5->n_elem = FUNC_1(VAR_3);
 } else {
  VAR_3->result = (VAR_0 << 16) | (VAR_1 << 1);
  VAR_4(VAR_3);
 }

 return VAR_5;
}
