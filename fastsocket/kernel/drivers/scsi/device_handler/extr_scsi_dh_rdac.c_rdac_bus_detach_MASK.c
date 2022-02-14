
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_dh_data {scalar_t__ buf; } ;
struct scsi_device {TYPE_1__* request_queue; struct scsi_dh_data* scsi_dh_data; } ;
struct rdac_dh_data {TYPE_2__* ctlr; } ;
struct TYPE_4__ {int kref; scalar_t__ ms_queued; } ;
struct TYPE_3__ {int queue_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct scsi_dh_data*) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,struct scsi_device*,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_9( struct scsi_device *VAR_6 )
{
 struct scsi_dh_data *VAR_7;
 struct rdac_dh_data *VAR_8;
 unsigned long VAR_9;

 VAR_7 = VAR_6->scsi_dh_data;
 VAR_8 = (struct rdac_dh_data *) VAR_7->buf;
 if (VAR_8->ctlr && VAR_8->ctlr->ms_queued)
  FUNC_0(VAR_3);

 FUNC_6(VAR_6->request_queue->queue_lock, VAR_9);
 VAR_6->scsi_dh_data = ((void*)0);
 FUNC_8(VAR_6->request_queue->queue_lock, VAR_9);

 FUNC_5(&VAR_4);
 if (VAR_8->ctlr)
  FUNC_2(&VAR_8->ctlr->kref, VAR_5);
 FUNC_7(&VAR_4);
 FUNC_1(VAR_7);
 FUNC_3(VAR_2);
 FUNC_4(VAR_0, VAR_6, "%s: Detached\n", VAR_1);
}
