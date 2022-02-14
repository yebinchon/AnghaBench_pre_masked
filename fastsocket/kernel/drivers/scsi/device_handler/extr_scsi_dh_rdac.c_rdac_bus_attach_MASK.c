
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_dh_data {scalar_t__ buf; int * scsi_dh; } ;
struct scsi_device {TYPE_1__* request_queue; struct scsi_dh_data* scsi_dh_data; } ;
struct rdac_dh_data {TYPE_2__* ctlr; scalar_t__ lun_state; scalar_t__ mode; int lun; int state; } ;
struct TYPE_4__ {int kref; } ;
struct TYPE_3__ {int queue_lock; } ;


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
 int FUNC_0 (struct scsi_device*,struct rdac_dh_data*) ;
 int FUNC_1 (struct scsi_device*,struct rdac_dh_data*,char*,char*) ;
 int FUNC_2 (struct scsi_device*,struct rdac_dh_data*,char*,char*) ;
 int FUNC_3 (struct scsi_dh_data*) ;
 int FUNC_4 (int *,int ) ;
 struct scsi_dh_data* FUNC_5 (int,int ) ;
 int VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int ,struct scsi_device*,char*,int ,...) ;
 int FUNC_7 (struct scsi_device*,struct rdac_dh_data*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,unsigned long) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct scsi_device *VAR_17)
{
 struct scsi_dh_data *VAR_18;
 struct rdac_dh_data *VAR_19;
 unsigned long VAR_20;
 int VAR_21;
 char VAR_22[VAR_0];
 char VAR_23[VAR_11];

 VAR_18 = FUNC_5(sizeof(*VAR_18)
          + sizeof(*VAR_19) , VAR_3);
 if (!VAR_18) {
  FUNC_6(VAR_4, VAR_17, "%s: Attach failed\n",
       VAR_6);
  return -VAR_2;
 }

 VAR_18->scsi_dh = &VAR_15;
 VAR_19 = (struct rdac_dh_data *) VAR_18->buf;
 VAR_19->lun = VAR_10;
 VAR_19->state = VAR_7;

 VAR_21 = FUNC_1(VAR_17, VAR_19, VAR_22, VAR_23);
 if (VAR_21 != VAR_8)
  goto failed;

 VAR_21 = FUNC_2(VAR_17, VAR_19, VAR_22, VAR_23);
 if (VAR_21 != VAR_8)
  goto failed;

 VAR_21 = FUNC_0(VAR_17, VAR_19);
 if (VAR_21 != VAR_8)
  goto clean_ctlr;

 VAR_21 = FUNC_7(VAR_17, VAR_19);
 if (VAR_21 != VAR_8)
  goto clean_ctlr;

 if (!FUNC_12(VAR_9))
  goto clean_ctlr;

 FUNC_9(VAR_17->request_queue->queue_lock, VAR_20);
 VAR_17->scsi_dh_data = VAR_18;
 FUNC_11(VAR_17->request_queue->queue_lock, VAR_20);

 FUNC_6(VAR_5, VAR_17,
      "%s: LUN %d (%s) (%s)\n",
      VAR_6, VAR_19->lun, VAR_14[(int)VAR_19->mode],
      VAR_13[(int)VAR_19->lun_state]);

 return 0;

clean_ctlr:
 FUNC_8(&VAR_12);
 FUNC_4(&VAR_19->ctlr->kref, VAR_16);
 FUNC_10(&VAR_12);

failed:
 FUNC_3(VAR_18);
 FUNC_6(VAR_4, VAR_17, "%s: not attached\n",
      VAR_6);
 return -VAR_1;
}
