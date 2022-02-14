
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_dh_data {scalar_t__ buf; int * scsi_dh; } ;
struct scsi_device {TYPE_1__* request_queue; struct scsi_dh_data* scsi_dh_data; } ;
struct alua_dh_data {int group_id; int rel_port; struct scsi_device* sdev; int bufflen; int inq; int buff; int state; int tpgs; } ;
struct TYPE_2__ {int queue_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct scsi_device*,struct alua_dh_data*) ;
 int FUNC_1 (struct scsi_dh_data*) ;
 struct scsi_dh_data* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,struct scsi_device*,char*,int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct scsi_device *VAR_13)
{
 struct scsi_dh_data *VAR_14;
 struct alua_dh_data *VAR_15;
 unsigned long VAR_16;
 int VAR_17 = VAR_8;

 VAR_14 = FUNC_2(sizeof(*VAR_14)
          + sizeof(*VAR_15) , VAR_4);
 if (!VAR_14) {
  FUNC_3(VAR_5, VAR_13, "%s: Attach failed\n",
       VAR_0);
  return -VAR_3;
 }

 VAR_14->scsi_dh = &VAR_12;
 VAR_15 = (struct alua_dh_data *) VAR_14->buf;
 VAR_15->tpgs = VAR_10;
 VAR_15->state = VAR_11;
 VAR_15->group_id = -1;
 VAR_15->rel_port = -1;
 VAR_15->buff = VAR_15->inq;
 VAR_15->bufflen = VAR_1;
 VAR_15->sdev = VAR_13;

 VAR_17 = FUNC_0(VAR_13, VAR_15);
 if ((VAR_17 != VAR_8) && (VAR_17 != VAR_7))
  goto failed;

 if (!FUNC_6(VAR_9))
  goto failed;

 FUNC_4(VAR_13->request_queue->queue_lock, VAR_16);
 VAR_13->scsi_dh_data = VAR_14;
 FUNC_5(VAR_13->request_queue->queue_lock, VAR_16);
 FUNC_3(VAR_6, VAR_13, "%s: Attached\n", VAR_0);

 return 0;

failed:
 FUNC_1(VAR_14);
 FUNC_3(VAR_5, VAR_13, "%s: not attached\n", VAR_0);
 return -VAR_2;
}
