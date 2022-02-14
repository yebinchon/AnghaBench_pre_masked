
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_dh_data {scalar_t__ buf; int * scsi_dh; } ;
struct scsi_device {TYPE_1__* request_queue; struct scsi_dh_data* scsi_dh_data; } ;
struct hp_sw_dh_data {scalar_t__ path_state; struct scsi_device* sdev; int retries; } ;
struct TYPE_2__ {int queue_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct scsi_device*,struct hp_sw_dh_data*) ;
 int FUNC_1 (struct scsi_dh_data*) ;
 struct scsi_dh_data* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,struct scsi_device*,char*,int ,...) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct scsi_device *VAR_11)
{
 struct scsi_dh_data *VAR_12;
 struct hp_sw_dh_data *VAR_13;
 unsigned long VAR_14;
 int VAR_15;

 VAR_12 = FUNC_2(sizeof(*VAR_12)
          + sizeof(*VAR_13) , VAR_1);
 if (!VAR_12) {
  FUNC_3(VAR_6, VAR_11, "%s: Attach Failed\n",
       VAR_2);
  return 0;
 }

 VAR_12->scsi_dh = &VAR_10;
 VAR_13 = (struct hp_sw_dh_data *) VAR_12->buf;
 VAR_13->path_state = VAR_4;
 VAR_13->retries = VAR_5;
 VAR_13->sdev = VAR_11;

 VAR_15 = FUNC_0(VAR_11, VAR_13);
 if (VAR_15 != VAR_8 || VAR_13->path_state == VAR_4)
  goto failed;

 if (!FUNC_6(VAR_9))
  goto failed;

 FUNC_4(VAR_11->request_queue->queue_lock, VAR_14);
 VAR_11->scsi_dh_data = VAR_12;
 FUNC_5(VAR_11->request_queue->queue_lock, VAR_14);

 FUNC_3(VAR_7, VAR_11, "%s: attached to %s path\n",
      VAR_2, VAR_13->path_state == VAR_3?
      "active":"passive");

 return 0;

failed:
 FUNC_1(VAR_12);
 FUNC_3(VAR_6, VAR_11, "%s: not attached\n",
      VAR_2);
 return -VAR_0;
}
