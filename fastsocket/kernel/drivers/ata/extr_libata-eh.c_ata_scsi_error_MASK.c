
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int dummy; } ;
struct Scsi_Host {scalar_t__ host_failed; int host_lock; int eh_cmd_q; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct Scsi_Host*,struct ata_port*,int *) ;
 int FUNC_4 (struct Scsi_Host*,struct ata_port*) ;
 struct ata_port* FUNC_5 (struct Scsi_Host*) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;

void FUNC_10(struct Scsi_Host *VAR_1)
{
 struct ata_port *VAR_2 = FUNC_5(VAR_1);
 unsigned long VAR_3;
 FUNC_1(VAR_0);

 FUNC_0("ENTER\n");

 FUNC_8(VAR_1->host_lock, VAR_3);
 FUNC_7(&VAR_1->eh_cmd_q, &VAR_0);
 FUNC_9(VAR_1->host_lock, VAR_3);

 FUNC_3(VAR_1, VAR_2, &VAR_0);



 FUNC_4(VAR_1, VAR_2);


 FUNC_2(VAR_1->host_failed || !FUNC_6(&VAR_0));

 FUNC_0("EXIT\n");
}
