
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct scsi_cmnd {TYPE_4__* device; } ;
struct TYPE_9__ {scalar_t__ irq; } ;
struct TYPE_13__ {TYPE_2__* host; scalar_t__ internal_done; TYPE_1__ scsi; } ;
struct TYPE_12__ {TYPE_3__* host; } ;
struct TYPE_11__ {scalar_t__ hostdata; } ;
struct TYPE_10__ {int host_lock; } ;
typedef TYPE_5__ FAS216_Info ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct scsi_cmnd*,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct scsi_cmnd *VAR_4,
      void (*VAR_5)(struct scsi_cmnd *))
{
 FAS216_Info *VAR_6 = (FAS216_Info *)VAR_4->device->host->hostdata;

 FUNC_1(VAR_6);





 FUNC_0(VAR_6->scsi.irq != VAR_0);

 VAR_6->internal_done = 0;
 FUNC_3(VAR_4, VAR_3);







 FUNC_6(VAR_6->host->host_lock);

 while (!VAR_6->internal_done) {
  if (FUNC_4(VAR_6, VAR_1) & VAR_2) {
   FUNC_5(VAR_6->host->host_lock);
   FUNC_2(VAR_6);
   FUNC_6(VAR_6->host->host_lock);
  }
 }

 FUNC_5(VAR_6->host->host_lock);

 VAR_5(VAR_4);

 return 0;
}
