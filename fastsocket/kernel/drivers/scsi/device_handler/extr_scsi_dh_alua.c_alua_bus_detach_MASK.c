
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_dh_data {scalar_t__ buf; } ;
struct scsi_device {TYPE_1__* request_queue; struct scsi_dh_data* scsi_dh_data; } ;
struct alua_dh_data {scalar_t__ buff; scalar_t__ inq; } ;
struct TYPE_2__ {int queue_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_dh_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scsi_device*,char*,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct scsi_device *VAR_3)
{
 struct scsi_dh_data *VAR_4;
 struct alua_dh_data *VAR_5;
 unsigned long VAR_6;

 FUNC_3(VAR_3->request_queue->queue_lock, VAR_6);
 VAR_4 = VAR_3->scsi_dh_data;
 VAR_3->scsi_dh_data = ((void*)0);
 FUNC_4(VAR_3->request_queue->queue_lock, VAR_6);

 VAR_5 = (struct alua_dh_data *) VAR_4->buf;
 if (VAR_5->buff && VAR_5->inq != VAR_5->buff)
  FUNC_0(VAR_5->buff);
 FUNC_0(VAR_4);
 FUNC_1(VAR_2);
 FUNC_2(VAR_1, VAR_3, "%s: Detached\n", VAR_0);
}
