
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct ata_queued_cmd {int tag; int scsidone; struct scsi_cmnd* scsicmd; struct ata_port* ap; } ;
struct ata_port {int eh_done_q; int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct scsi_cmnd*,int *) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;
 struct scsi_cmnd *VAR_3 = VAR_1->scsicmd;
 unsigned long VAR_4;

 FUNC_4(VAR_2->lock, VAR_4);
 VAR_1->scsidone = VAR_0;
 FUNC_1(VAR_1);
 FUNC_0(FUNC_2(VAR_1->tag));
 FUNC_5(VAR_2->lock, VAR_4);

 FUNC_3(VAR_3, &VAR_2->eh_done_q);
}
