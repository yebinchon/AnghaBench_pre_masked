
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vio_device_id {int dummy; } ;
struct device {int dummy; } ;
struct vio_dev {struct device dev; } ;
struct srp_rport_identifiers {int roles; int port_id; } ;
struct srp_rport {int dummy; } ;
struct TYPE_3__ {int partition_name; } ;
struct ibmvscsi_host_data {struct srp_rport* work_thread; int queue; int pool; struct Scsi_Host* host; int request_limit; TYPE_1__ madapter_info; struct device* dev; int work_wait_q; int sent; } ;
struct Scsi_Host {int max_lun; int max_cmd_len; int max_channel; int max_id; int host_no; int max_sectors; int transportt; } ;
struct TYPE_4__ {int (* init_crq_queue ) (int *,struct ibmvscsi_host_data*,int ) ;scalar_t__ (* send_crq ) (struct ibmvscsi_host_data*,int ,int ) ;int (* release_crq_queue ) (int *,struct ibmvscsi_host_data*,int ) ;} ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct srp_rport*) ;
 int FUNC_2 (struct srp_rport*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,struct ibmvscsi_host_data*) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,struct ibmvscsi_host_data*) ;
 unsigned long VAR_10 ;
 struct srp_rport* FUNC_9 (int ,struct ibmvscsi_host_data*,char*,char*,int ) ;
 int FUNC_10 (struct srp_rport*) ;
 scalar_t__ FUNC_11 (struct ibmvscsi_host_data*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (struct ibmvscsi_host_data*,int,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *,struct ibmvscsi_host_data*) ;
 scalar_t__ FUNC_16 (struct Scsi_Host*,struct device*) ;
 struct Scsi_Host* FUNC_17 (int *,int) ;
 int FUNC_18 (struct Scsi_Host*) ;
 int FUNC_19 (struct Scsi_Host*) ;
 int FUNC_20 (struct Scsi_Host*) ;
 struct ibmvscsi_host_data* FUNC_21 (struct Scsi_Host*) ;
 struct srp_rport* FUNC_22 (struct Scsi_Host*,struct srp_rport_identifiers*) ;
 int FUNC_23 (int *,struct ibmvscsi_host_data*,int ) ;
 scalar_t__ FUNC_24 (struct ibmvscsi_host_data*,int ,int ) ;
 int FUNC_25 (int *,struct ibmvscsi_host_data*,int ) ;
 scalar_t__ FUNC_26 (unsigned long,unsigned long) ;
 int FUNC_27 (struct ibmvscsi_host_data*) ;

__attribute__((used)) static int FUNC_28(struct vio_dev *VAR_14, const struct vio_device_id *VAR_15)
{
 struct ibmvscsi_host_data *VAR_16;
 struct Scsi_Host *VAR_17;
 struct device *VAR_18 = &VAR_14->dev;
 struct srp_rport_identifiers VAR_19;
 struct srp_rport *VAR_20;
 unsigned long VAR_21 = 0;
 int VAR_22;

 FUNC_6(&VAR_14->dev, ((void*)0));

 VAR_17 = FUNC_17(&VAR_5, sizeof(*VAR_16));
 if (!VAR_17) {
  FUNC_5(&VAR_14->dev, "couldn't allocate host data\n");
  goto scsi_host_alloc_failed;
 }

 VAR_17->transportt = VAR_7;
 VAR_16 = FUNC_21(VAR_17);
 FUNC_13(VAR_16, 0x00, sizeof(*VAR_16));
 FUNC_0(&VAR_16->sent);
 FUNC_7(&VAR_16->work_wait_q);
 VAR_16->host = VAR_17;
 VAR_16->dev = VAR_18;
 FUNC_4(&VAR_16->request_limit, -1);
 VAR_16->host->max_sectors = VAR_3;

 if (FUNC_11(VAR_16)) {
  FUNC_5(&VAR_14->dev, "couldn't map persistent buffers\n");
  goto persist_bufs_failed;
 }

 VAR_16->work_thread = FUNC_9(VAR_8, VAR_16, "%s_%d",
         "ibmvscsi", VAR_17->host_no);

 if (FUNC_1(VAR_16->work_thread)) {
  FUNC_5(&VAR_14->dev, "couldn't initialize kthread. rc=%ld\n",
   FUNC_2(VAR_16->work_thread));
  goto init_crq_failed;
 }

 VAR_22 = VAR_6->init_crq_queue(&VAR_16->queue, VAR_16, VAR_12);
 if (VAR_22 != 0 && VAR_22 != VAR_1) {
  FUNC_5(&VAR_14->dev, "couldn't initialize crq. rc=%d\n", VAR_22);
  goto kill_kthread;
 }
 if (FUNC_8(&VAR_16->pool, VAR_12, VAR_16) != 0) {
  FUNC_5(&VAR_14->dev, "couldn't initialize event pool\n");
  goto init_pool_failed;
 }

 VAR_17->max_lun = 8;
 VAR_17->max_id = VAR_13;
 VAR_17->max_channel = VAR_11;
 VAR_17->max_cmd_len = 16;

 if (FUNC_16(VAR_16->host, VAR_16->dev))
  goto add_host_failed;


 FUNC_12(VAR_19.port_id, VAR_16->madapter_info.partition_name,
        sizeof(VAR_19.port_id));
 VAR_19.roles = VAR_4;
 VAR_20 = FUNC_22(VAR_17, &VAR_19);
 if (FUNC_1(VAR_20))
  goto add_srp_port_failed;





 if (VAR_6->send_crq(VAR_16, VAR_2, 0) == 0
     || VAR_22 == VAR_1) {






  for (VAR_21 = VAR_10 + (VAR_9 * VAR_0);
       FUNC_26(VAR_10, VAR_21) &&
       FUNC_3(&VAR_16->request_limit) < 2;) {

   FUNC_14(10);
  }


  if (FUNC_3(&VAR_16->request_limit) > 0)
   FUNC_20(VAR_17);
 }

 FUNC_6(&VAR_14->dev, VAR_16);
 return 0;

      add_srp_port_failed:
 FUNC_19(VAR_16->host);
      add_host_failed:
 FUNC_15(&VAR_16->pool, VAR_16);
      init_pool_failed:
 VAR_6->release_crq_queue(&VAR_16->queue, VAR_16, VAR_12);
      kill_kthread:
      FUNC_10(VAR_16->work_thread);
      init_crq_failed:
 FUNC_27(VAR_16);
      persist_bufs_failed:
 FUNC_18(VAR_17);
      scsi_host_alloc_failed:
 return -1;
}
