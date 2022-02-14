
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct scsi_cmnd {int dummy; } ;
struct TYPE_20__ {TYPE_1__* device; } ;
struct TYPE_17__ {int this_residual; int ptr; } ;
struct TYPE_18__ {TYPE_3__ SCp; scalar_t__ disconnectable; } ;
struct TYPE_16__ {int disconnected; int issue; } ;
struct TYPE_19__ {TYPE_4__ scsi; TYPE_6__* SCpnt; TYPE_2__ queues; int busyluns; struct scsi_cmnd* origSCpnt; struct scsi_cmnd* reqSCpnt; struct scsi_cmnd* rstSCpnt; } ;
struct TYPE_15__ {int id; } ;
typedef TYPE_5__ FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (TYPE_5__*,struct scsi_cmnd*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,struct scsi_cmnd*) ;
 int FUNC_4 (TYPE_5__*,int,char*,int ,...) ;
 int FUNC_5 (TYPE_5__*,int,struct scsi_cmnd*,char*) ;
 int FUNC_6 (TYPE_5__*,struct scsi_cmnd*) ;
 int FUNC_7 (int *,TYPE_6__*) ;
 struct scsi_cmnd* FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(FAS216_Info *VAR_4)
{
 struct scsi_cmnd *VAR_5 = ((void*)0);



 int VAR_6 = 0;

 FUNC_1(VAR_4);




 do {
  if (VAR_4->rstSCpnt) {
   VAR_5 = VAR_4->rstSCpnt;

   VAR_6 = 1;
   break;
  }

  if (VAR_4->reqSCpnt) {
   VAR_5 = VAR_4->reqSCpnt;
   VAR_4->reqSCpnt = ((void*)0);
   break;
  }

  if (VAR_4->origSCpnt) {
   VAR_5 = VAR_4->origSCpnt;
   VAR_4->origSCpnt = ((void*)0);
   break;
  }


  if (!VAR_5) {
   VAR_5 = FUNC_8(&VAR_4->queues.issue,
           VAR_4->busyluns);
   VAR_6 = 2;
   break;
  }
 } while (0);

 if (!VAR_5) {



  FUNC_2(VAR_4, VAR_1);
  return;
 }




 FUNC_2(VAR_4, VAR_0);

 if (VAR_4->scsi.disconnectable && VAR_4->SCpnt) {
  FUNC_4(VAR_4, VAR_2,
   "moved command for %d to disconnected queue",
   VAR_4->SCpnt->device->id);
  FUNC_7(&VAR_4->queues.disconnected, VAR_4->SCpnt);
  VAR_4->scsi.disconnectable = 0;
  VAR_4->SCpnt = ((void*)0);
 }

 FUNC_5(VAR_4, VAR_2 | VAR_3, VAR_5,
      "starting");

 switch (VAR_6) {
 case 2:
  FUNC_0(VAR_4, VAR_5);
 case 0:
  FUNC_6(VAR_4, VAR_5);
  break;
 case 1:
  FUNC_3(VAR_4, VAR_5);
  break;
 }

 FUNC_4(VAR_4, VAR_2, "select: data pointers [%p, %X]",
  VAR_4->scsi.SCp.ptr, VAR_4->scsi.SCp.this_residual);





}
