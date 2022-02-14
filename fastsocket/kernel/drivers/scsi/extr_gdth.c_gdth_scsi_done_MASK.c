
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;scalar_t__ request; int * host_scribble; } ;
struct gdth_cmndinfo {int internal_command; } ;
struct completion {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct completion*) ;
 struct gdth_cmndinfo* FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct gdth_cmndinfo*) ;
 int FUNC_4 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_5(struct scsi_cmnd *VAR_0)
{
 struct gdth_cmndinfo *VAR_1 = FUNC_2(VAR_0);
 int VAR_2 = VAR_1->internal_command;

 FUNC_0(("gdth_scsi_done()\n"));

 FUNC_3(VAR_1);
 VAR_0->host_scribble = ((void*)0);

 if (VAR_2)
  FUNC_1((struct completion *)VAR_0->request);
 else
  VAR_0->scsi_done(VAR_0);
}
