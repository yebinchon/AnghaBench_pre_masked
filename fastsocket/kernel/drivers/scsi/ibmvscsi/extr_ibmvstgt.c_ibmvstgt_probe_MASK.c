
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_port {unsigned int liobn; unsigned int riobn; int crq_queue; int crq_work; struct srp_target* target; struct vio_dev* dma_dev; } ;
struct vio_device_id {int dummy; } ;
struct vio_dev {int dev; } ;
struct srp_target {int dev; struct vio_port* ldata; struct Scsi_Host* shost; } ;
struct Scsi_Host {int transportt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,struct srp_target*) ;
 int FUNC_2 (char*,unsigned int) ;
 int VAR_5 ;
 struct srp_target* FUNC_3 (struct Scsi_Host*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct vio_port*) ;
 struct vio_port* FUNC_5 (int,int ) ;
 int FUNC_6 (struct Scsi_Host*,int ) ;
 struct Scsi_Host* FUNC_7 (int *,int) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (struct Scsi_Host*) ;
 int FUNC_11 (struct Scsi_Host*) ;
 int FUNC_12 (struct srp_target*,int *,int ,int ) ;
 int FUNC_13 (struct srp_target*) ;
 scalar_t__ FUNC_14 (struct vio_dev*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_15(struct vio_dev *VAR_8, const struct vio_device_id *VAR_9)
{
 struct Scsi_Host *VAR_10;
 struct srp_target *VAR_11;
 struct vio_port *VAR_12;
 unsigned int *VAR_13, VAR_14;
 int VAR_15 = -VAR_1;

 VAR_12 = FUNC_5(sizeof(struct vio_port), VAR_2);
 if (!VAR_12)
  return VAR_15;
 VAR_10 = FUNC_7(&VAR_6, sizeof(struct srp_target));
 if (!VAR_10)
  goto free_vport;
 VAR_10->transportt = VAR_7;

 VAR_11 = FUNC_3(VAR_10);
 VAR_11->shost = VAR_10;
 VAR_12->dma_dev = VAR_8;
 VAR_11->ldata = VAR_12;
 VAR_12->target = VAR_11;
 VAR_15 = FUNC_12(VAR_11, &VAR_8->dev, VAR_3,
          VAR_4);
 if (VAR_15)
  goto put_host;

 VAR_13 = (unsigned int *) FUNC_14(VAR_8, "ibm,my-dma-window",
       &VAR_14);
 if (!VAR_13 || VAR_14 != 40) {
  FUNC_2("Couldn't get window property %d\n", VAR_14);
  VAR_15 = -VAR_0;
  goto free_srp_target;
 }
 VAR_12->liobn = VAR_13[0];
 VAR_12->riobn = VAR_13[5];

 FUNC_0(&VAR_12->crq_work, VAR_5);

 VAR_15 = FUNC_6(VAR_10, VAR_11->dev);
 if (VAR_15)
  goto free_srp_target;

 VAR_15 = FUNC_10(VAR_10);
 if (VAR_15)
  goto remove_host;

 VAR_15 = FUNC_1(&VAR_12->crq_queue, VAR_11);
 if (VAR_15)
  goto free_queue;

 return 0;
free_queue:
 FUNC_11(VAR_10);
remove_host:
 FUNC_9(VAR_10);
free_srp_target:
 FUNC_13(VAR_11);
put_host:
 FUNC_8(VAR_10);
free_vport:
 FUNC_4(VAR_12);
 return VAR_15;
}
