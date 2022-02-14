
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int * class; struct TYPE_7__* parent; } ;
struct scsi_disk {int previous_state; TYPE_1__ dev; scalar_t__ openers; int index; struct gendisk* disk; int * driver; struct scsi_device* device; } ;
struct scsi_device {scalar_t__ type; TYPE_1__ sdev_gendev; TYPE_6__* request_queue; } ;
struct gendisk {int disk_name; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int rq_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 struct gendisk* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scsi_disk*,int *) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (struct scsi_disk*) ;
 struct scsi_disk* FUNC_13 (int,int ) ;
 int FUNC_14 (struct gendisk*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (char*,int ,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_16 (int ,struct scsi_device*,char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 struct scsi_device* FUNC_19 (struct device*) ;

__attribute__((used)) static int FUNC_20(struct device *VAR_18)
{
 struct scsi_device *VAR_19 = FUNC_19(VAR_18);
 struct scsi_disk *VAR_20;
 struct gendisk *VAR_21;
 u32 VAR_22;
 int VAR_23;

 VAR_23 = -VAR_2;
 if (VAR_19->type != VAR_9 && VAR_19->type != VAR_10 && VAR_19->type != VAR_11)
  goto out;

 FUNC_0(3, FUNC_16(VAR_5, VAR_19,
     "sd_attach\n"));

 VAR_23 = -VAR_3;
 VAR_20 = FUNC_13(sizeof(*VAR_20), VAR_4);
 if (!VAR_20)
  goto out;

 VAR_21 = FUNC_1(VAR_6);
 if (!VAR_21)
  goto out_free;

 do {
  if (!FUNC_10(&VAR_14, VAR_4))
   goto out_put;

  FUNC_17(&VAR_15);
  VAR_23 = FUNC_9(&VAR_14, &VAR_22);
  FUNC_18(&VAR_15);
 } while (VAR_23 == -VAR_1);

 if (VAR_23)
  goto out_put;

 VAR_23 = FUNC_15("sd", VAR_22, VAR_21->disk_name, VAR_0);
 if (VAR_23)
  goto out_free_index;

 VAR_20->device = VAR_19;
 VAR_20->driver = &VAR_17;
 VAR_20->disk = VAR_21;
 VAR_20->index = VAR_22;
 VAR_20->openers = 0;
 VAR_20->previous_state = 1;

 if (!VAR_19->request_queue->rq_timeout) {
  if (VAR_19->type != VAR_10)
   FUNC_3(VAR_19->request_queue, VAR_8);
  else
   FUNC_3(VAR_19->request_queue,
          VAR_7);
 }

 FUNC_7(&VAR_20->dev);
 VAR_20->dev.parent = &VAR_19->sdev_gendev;
 VAR_20->dev.class = &VAR_13;
 FUNC_5(&VAR_20->dev, FUNC_4(&VAR_19->sdev_gendev));

 if (FUNC_6(&VAR_20->dev))
  goto out_free_index;

 FUNC_8(&VAR_19->sdev_gendev);

 FUNC_8(&VAR_20->dev);
 FUNC_2(VAR_16, VAR_20, &VAR_12);

 return 0;

 out_free_index:
 FUNC_17(&VAR_15);
 FUNC_11(&VAR_14, VAR_22);
 FUNC_18(&VAR_15);
 out_put:
 FUNC_14(VAR_21);
 out_free:
 FUNC_12(VAR_20);
 out:
 return VAR_23;
}
