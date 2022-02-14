
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;scalar_t__ tag; int result; void* host_scribble; TYPE_2__* device; } ;
struct TYPE_15__ {scalar_t__ phase; } ;
struct TYPE_14__ {int issue; } ;
struct TYPE_13__ {int queues; } ;
struct TYPE_16__ {int host_lock; TYPE_5__ scsi; TYPE_4__ queues; TYPE_3__ stats; } ;
struct TYPE_12__ {TYPE_1__* host; } ;
struct TYPE_11__ {scalar_t__ hostdata; } ;
typedef TYPE_6__ FAS216_Info ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,int ,struct scsi_cmnd*,char*,struct scsi_cmnd*) ;
 int FUNC_3 (TYPE_6__*,int ,int,char*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (int *,struct scsi_cmnd*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct scsi_cmnd *VAR_3,
    void (*VAR_4)(struct scsi_cmnd *))
{
 FAS216_Info *VAR_5 = (FAS216_Info *)VAR_3->device->host->hostdata;
 int VAR_6;

 FUNC_0(VAR_5);

 FUNC_2(VAR_5, VAR_0, VAR_3,
      "received command (%p)", VAR_3);

 VAR_3->scsi_done = VAR_4;
 VAR_3->host_scribble = (void *)VAR_2;
 VAR_3->result = 0;

 FUNC_4(VAR_3);

 VAR_5->stats.queues += 1;
 VAR_3->tag = 0;

 FUNC_6(&VAR_5->host_lock);





 VAR_6 = !FUNC_5(&VAR_5->queues.issue, VAR_3);





 if (VAR_6 == 0 && VAR_5->scsi.phase == VAR_1)
  FUNC_1(VAR_5);
 FUNC_7(&VAR_5->host_lock);

 FUNC_3(VAR_5, VAR_0, -1, "queue %s",
  VAR_6 ? "failure" : "success");

 return VAR_6;
}
