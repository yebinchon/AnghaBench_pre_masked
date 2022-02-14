
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scsi_cmnd {int tag; } ;
typedef enum res_abort { ____Placeholder_res_abort } res_abort ;
struct TYPE_8__ {int phase; int disconnectable; } ;
struct TYPE_7__ {int disconnected; int issue; } ;
struct TYPE_9__ {struct scsi_cmnd* origSCpnt; struct scsi_cmnd* SCpnt; TYPE_2__ scsi; TYPE_1__ queues; } ;
typedef TYPE_3__ AS_Host ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,struct scsi_cmnd*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static enum res_abort FUNC_6(AS_Host *VAR_6, struct scsi_cmnd *VAR_7)
{
 enum res_abort VAR_8 = VAR_2;

 if (FUNC_4(&VAR_6->queues.issue, VAR_7)) {







  FUNC_3("on issue queue ");

  VAR_8 = VAR_4;
 } else if (FUNC_4(&VAR_6->queues.disconnected, VAR_7)) {
  FUNC_3("on disconnected queue ");

  VAR_8 = VAR_4;
 } else if (VAR_6->SCpnt == VAR_7) {
  unsigned long VAR_9;


  FUNC_3("executing ");


  FUNC_2(VAR_9);
  switch (VAR_6->scsi.phase) {
  case 128:
   if (VAR_6->scsi.disconnectable) {
    VAR_6->scsi.disconnectable = 0;
    VAR_6->SCpnt = ((void*)0);
    VAR_8 = VAR_4;
   }
   break;






  case 129:
   FUNC_5(VAR_6, VAR_1, VAR_0);
   VAR_6->SCpnt = ((void*)0);
   VAR_8 = VAR_5;
   break;

  default:
   FUNC_0(VAR_6, VAR_6->SCpnt->tag);
   VAR_8 = VAR_3;
  }
  FUNC_1(VAR_9);
 } else if (VAR_6->origSCpnt == VAR_7) {






  VAR_6->origSCpnt = ((void*)0);

  FUNC_3("waiting for execution ");

  VAR_8 = VAR_5;
 } else
  FUNC_3("unknown ");

 return VAR_8;
}
