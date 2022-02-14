
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;int * host_scribble; } ;
struct TYPE_2__ {struct scsi_cmnd* head; } ;
struct aic7xxx_host {TYPE_1__ completeq; } ;


 int FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_1(struct aic7xxx_host *VAR_0)
{
 struct scsi_cmnd *VAR_1;

 while (VAR_0->completeq.head != ((void*)0)) {
  VAR_1 = VAR_0->completeq.head;
  VAR_0->completeq.head = (struct scsi_cmnd *) VAR_1->host_scribble;
  VAR_1->host_scribble = ((void*)0);
  VAR_1->scsi_done(VAR_1);
 }
}
