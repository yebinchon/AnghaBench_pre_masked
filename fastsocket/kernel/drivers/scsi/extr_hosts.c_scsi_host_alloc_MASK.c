
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_host_template {scalar_t__ supported_mode; int dma_boundary; scalar_t__ max_sectors; scalar_t__ max_host_blocked; int ordered_tag; int use_clustering; scalar_t__ unchecked_isa_dma; int cmd_per_lun; int sg_tablesize; int can_queue; int this_id; } ;
struct TYPE_3__ {int groups; int * class; struct TYPE_3__* parent; int * type; int * bus; } ;
struct Scsi_Host {int dma_channel; int max_id; int max_lun; int max_cmd_len; int eh_deadline; scalar_t__ active_mode; int dma_boundary; struct scsi_host_template* hostt; int ehandler; scalar_t__ host_no; TYPE_1__ shost_dev; TYPE_1__ shost_gendev; scalar_t__ max_sectors; scalar_t__ max_host_blocked; int ordered_tag; int use_clustering; scalar_t__ unchecked_isa_dma; int cmd_per_lun; int sg_tablesize; int can_queue; int this_id; int * transportt; scalar_t__ max_channel; int scan_mutex; int host_wait; int starved_list; int eh_cmd_q; int __targets; int __devices; int shost_state; int * host_lock; int default_lock; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (int ,struct Scsi_Host*,char*,scalar_t__) ;
 struct Scsi_Host* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (struct scsi_host_template*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (int *) ;

struct Scsi_Host *FUNC_13(struct scsi_host_template *VAR_16, int VAR_17)
{
 struct Scsi_Host *VAR_18;
 gfp_t VAR_19 = VAR_0;
 int VAR_20;

 if (VAR_16->unchecked_isa_dma && VAR_17)
  VAR_19 |= VAR_7;

 VAR_18 = FUNC_9(sizeof(struct Scsi_Host) + VAR_17, VAR_19);
 if (!VAR_18)
  return ((void*)0);

 VAR_18->host_lock = &VAR_18->default_lock;
 FUNC_12(VAR_18->host_lock);
 VAR_18->shost_state = VAR_6;
 FUNC_0(&VAR_18->__devices);
 FUNC_0(&VAR_18->__targets);
 FUNC_0(&VAR_18->eh_cmd_q);
 FUNC_0(&VAR_18->starved_list);
 FUNC_6(&VAR_18->host_wait);

 FUNC_10(&VAR_18->scan_mutex);





 VAR_18->host_no = FUNC_3(&VAR_11) - 1;
 VAR_18->dma_channel = 0xff;


 VAR_18->max_channel = 0;
 VAR_18->max_id = 8;
 VAR_18->max_lun = 8;


 VAR_18->transportt = &VAR_8;







 VAR_18->max_cmd_len = 12;
 VAR_18->hostt = VAR_16;
 VAR_18->this_id = VAR_16->this_id;
 VAR_18->can_queue = VAR_16->can_queue;
 VAR_18->sg_tablesize = VAR_16->sg_tablesize;
 VAR_18->cmd_per_lun = VAR_16->cmd_per_lun;
 VAR_18->unchecked_isa_dma = VAR_16->unchecked_isa_dma;
 VAR_18->use_clustering = VAR_16->use_clustering;
 VAR_18->ordered_tag = VAR_16->ordered_tag;
 VAR_18->eh_deadline = VAR_15 * VAR_1;

 if (VAR_16->supported_mode == VAR_3)

  VAR_18->active_mode = VAR_2;
 else
  VAR_18->active_mode = VAR_16->supported_mode;

 if (VAR_16->max_host_blocked)
  VAR_18->max_host_blocked = VAR_16->max_host_blocked;
 else
  VAR_18->max_host_blocked = VAR_4;





 if (VAR_16->max_sectors)
  VAR_18->max_sectors = VAR_16->max_sectors;
 else
  VAR_18->max_sectors = VAR_5;




 if (VAR_16->dma_boundary)
  VAR_18->dma_boundary = VAR_16->dma_boundary;
 else
  VAR_18->dma_boundary = 0xffffffff;

 FUNC_5(&VAR_18->shost_gendev);
 FUNC_4(&VAR_18->shost_gendev, "host%d", VAR_18->host_no);

 VAR_18->shost_gendev.bus = &VAR_9;

 VAR_18->shost_gendev.type = &VAR_12;

 FUNC_5(&VAR_18->shost_dev);
 VAR_18->shost_dev.parent = &VAR_18->shost_gendev;
 VAR_18->shost_dev.class = &VAR_14;
 FUNC_4(&VAR_18->shost_dev, "host%d", VAR_18->host_no);
 VAR_18->shost_dev.groups = VAR_13;

 VAR_18->ehandler = FUNC_8(VAR_10, VAR_18,
   "scsi_eh_%d", VAR_18->host_no);
 if (FUNC_1(VAR_18->ehandler)) {
  VAR_20 = FUNC_2(VAR_18->ehandler);
  goto fail_kfree;
 }

 FUNC_11(VAR_18->hostt);
 return VAR_18;

 fail_kfree:
 FUNC_7(VAR_18);
 return ((void*)0);
}
