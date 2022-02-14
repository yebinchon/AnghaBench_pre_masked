
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct se_cmd {int data_direction; scalar_t__ sam_task_attr; int data_length; int * t_task_cdb; struct pscsi_plugin_task* priv; int se_dev; int t_data_nents; struct scatterlist* t_data_sg; } ;
struct scatterlist {int dummy; } ;
struct request {int retries; int timeout; scalar_t__ sense_len; int * sense; int * cmd; int cmd_len; struct se_cmd* end_io_data; int end_io; int cmd_type; } ;
struct pscsi_plugin_task {int * pscsi_sense; int * pscsi_cdb; } ;
struct pscsi_dev_virt {TYPE_1__* pdv_sd; } ;
struct bio {struct bio* bi_next; } ;
typedef scalar_t__ sense_reason_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {scalar_t__ type; int request_queue; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct request*) ;
 scalar_t__ VAR_3 ;
 struct pscsi_dev_virt* FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (int ,int *,struct request*,int,int ) ;
 struct request* FUNC_5 (int ,int,int ) ;
 struct request* FUNC_6 (int ,struct bio*,int ) ;
 int FUNC_7 (struct pscsi_plugin_task*) ;
 struct pscsi_plugin_task* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (struct se_cmd*,struct scatterlist*,int ,int,struct bio**) ;
 int VAR_10 ;
 int FUNC_12 (int *) ;

__attribute__((used)) static sense_reason_t
FUNC_13(struct se_cmd *VAR_11)
{
 struct scatterlist *VAR_12 = VAR_11->t_data_sg;
 u32 VAR_13 = VAR_11->t_data_nents;
 enum dma_data_direction VAR_14 = VAR_11->data_direction;
 struct pscsi_dev_virt *VAR_15 = FUNC_2(VAR_11->se_dev);
 struct pscsi_plugin_task *VAR_16;
 struct request *VAR_17;
 struct bio *VAR_18;
 sense_reason_t VAR_19;





 VAR_16 = FUNC_8(sizeof(*VAR_16) + FUNC_12(VAR_11->t_task_cdb), VAR_2);
 if (!VAR_16) {
  return VAR_8;
 }
 VAR_11->priv = VAR_16;

 FUNC_9(VAR_16->pscsi_cdb, VAR_11->t_task_cdb,
  FUNC_12(VAR_11->t_task_cdb));

 if (!VAR_12) {
  VAR_17 = FUNC_5(VAR_15->pdv_sd->request_queue,
    (VAR_14 == VAR_0),
    VAR_2);
  if (!VAR_17 || FUNC_1(VAR_17)) {
   FUNC_10("PSCSI: blk_get_request() failed: %ld\n",
     VAR_17 ? FUNC_1(VAR_17) : -VAR_1);
   VAR_19 = VAR_8;
   goto fail;
  }
 } else {
  FUNC_0(!VAR_11->data_length);

  VAR_19 = FUNC_11(VAR_11, VAR_12, VAR_13, VAR_14, &VAR_18);
  if (VAR_19)
   goto fail;

  VAR_17 = FUNC_6(VAR_15->pdv_sd->request_queue, VAR_18,
           VAR_2);
  if (FUNC_1(VAR_17)) {
   FUNC_10("pSCSI: blk_make_request() failed\n");
   VAR_19 = VAR_8;
   goto fail_free_bio;
  }
 }

 VAR_17->cmd_type = VAR_7;
 VAR_17->end_io = VAR_10;
 VAR_17->end_io_data = VAR_11;
 VAR_17->cmd_len = FUNC_12(VAR_16->pscsi_cdb);
 VAR_17->cmd = &VAR_16->pscsi_cdb[0];
 VAR_17->sense = &VAR_16->pscsi_sense[0];
 VAR_17->sense_len = 0;
 if (VAR_15->pdv_sd->type == VAR_9)
  VAR_17->timeout = VAR_5;
 else
  VAR_17->timeout = VAR_6;
 VAR_17->retries = VAR_4;

 FUNC_4(VAR_15->pdv_sd->request_queue, ((void*)0), VAR_17,
   (VAR_11->sam_task_attr == VAR_3),
   VAR_10);

 return 0;

fail_free_bio:
 while (VAR_18) {
  struct bio *VAR_20 = VAR_18;
  VAR_18 = VAR_18->bi_next;
  FUNC_3(VAR_20, 0);
 }
 VAR_19 = VAR_8;
fail:
 FUNC_7(VAR_16);
 return VAR_19;
}
