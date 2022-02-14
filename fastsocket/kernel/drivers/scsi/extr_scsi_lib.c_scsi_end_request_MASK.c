
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {struct request* request; TYPE_1__* device; } ;
struct request_queue {int dummy; } ;
struct request {int dummy; } ;
struct TYPE_2__ {struct request_queue* request_queue; } ;


 int FUNC_0 (struct scsi_cmnd*,int ) ;
 scalar_t__ FUNC_1 (struct request*,int,int) ;
 int FUNC_2 (struct request*,int) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct request_queue*,struct scsi_cmnd*) ;

__attribute__((used)) static struct scsi_cmnd *FUNC_7(struct scsi_cmnd *VAR_0, int VAR_1,
       int VAR_2, int VAR_3)
{
 struct request_queue *VAR_4 = VAR_0->device->request_queue;
 struct request *VAR_5 = VAR_0->request;





 if (FUNC_1(VAR_5, VAR_1, VAR_2)) {

  if (VAR_1 && FUNC_4(VAR_0))
   FUNC_2(VAR_5, VAR_1);
  else {
   if (VAR_3) {





    FUNC_5(VAR_0);
    FUNC_6(VAR_4, VAR_0);
    VAR_0 = ((void*)0);
   }
   return VAR_0;
  }
 }





 FUNC_0(VAR_0, 0);
 FUNC_3(VAR_0);
 return ((void*)0);
}
