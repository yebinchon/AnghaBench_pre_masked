
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
struct fnic_io_req {int dummy; } ;
struct fnic {TYPE_1__* lport; } ;
typedef int spinlock_t ;
struct TYPE_2__ {int host; } ;


 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,char*,int ) ;
 int VAR_2 ;
 int * FUNC_3 (struct fnic*,struct scsi_cmnd*) ;
 int FUNC_4 (scalar_t__) ;
 struct scsi_cmnd* FUNC_5 (int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct fnic *VAR_3, struct scsi_cmnd *VAR_4)
{
 int VAR_5;
 struct fnic_io_req *VAR_6;
 spinlock_t *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;
 struct scsi_cmnd *VAR_10;
 struct scsi_device *VAR_11 = ((void*)0);

 if (VAR_4)
  VAR_11 = VAR_4->device;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_10 = FUNC_5(VAR_3->lport->host, VAR_5);




  if (!VAR_10 || (VAR_4 && (VAR_10->device != VAR_11 || VAR_10 == VAR_4)))
   continue;

  VAR_7 = FUNC_3(VAR_3, VAR_10);
  FUNC_6(VAR_7, VAR_8);

  VAR_6 = (struct fnic_io_req *)FUNC_0(VAR_10);

  if (!VAR_6 || VAR_10->device != VAR_11) {
   FUNC_7(VAR_7, VAR_8);
   continue;
  }





  FUNC_2(VAR_2, VAR_3->lport->host,
         "Found IO in %s on lun\n",
         FUNC_4(FUNC_1(VAR_10)));

  if (FUNC_1(VAR_10) == VAR_0)
   VAR_9 = 1;
  FUNC_7(VAR_7, VAR_8);
 }

 return VAR_9;
}
