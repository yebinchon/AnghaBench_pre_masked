
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef scalar_t__ u64 ;
struct TYPE_19__ {int kobj; int release; int * parent; } ;
struct TYPE_27__ {int min; } ;
struct TYPE_26__ {int min; } ;
struct TYPE_28__ {TYPE_8__ fabric; TYPE_7__ channel; } ;
struct TYPE_24__ {int min; } ;
struct TYPE_23__ {int min; } ;
struct TYPE_25__ {TYPE_5__ fabric; TYPE_4__ channel; } ;
struct TYPE_21__ {int min; } ;
struct TYPE_20__ {int min; } ;
struct TYPE_22__ {TYPE_2__ fabric; TYPE_1__ channel; } ;
struct TYPE_17__ {TYPE_9__ cmd; TYPE_6__ read; TYPE_3__ write; int lock; } ;
struct zfcp_unit {int status; int list; TYPE_12__ sysfs_device; TYPE_10__ latencies; scalar_t__ fcp_lun; struct zfcp_port* port; int scsi_work; int remove_wq; int refcount; } ;
struct zfcp_port {int unit_list_head; int sysfs_device; } ;
struct TYPE_18__ {int config_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct zfcp_unit* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_12__*,struct zfcp_unit*) ;
 scalar_t__ FUNC_6 (TYPE_12__*,char*,unsigned long long) ;
 scalar_t__ FUNC_7 (TYPE_12__*) ;
 int FUNC_8 (TYPE_12__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct zfcp_unit*) ;
 struct zfcp_unit* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (TYPE_12__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 TYPE_11__ VAR_5 ;
 scalar_t__ FUNC_20 (struct zfcp_port*,scalar_t__) ;
 int FUNC_21 (struct zfcp_port*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_22 (struct zfcp_unit*) ;

struct zfcp_unit *FUNC_23(struct zfcp_port *VAR_9, u64 VAR_10)
{
 struct zfcp_unit *VAR_11;

 FUNC_14(&VAR_5.config_lock);
 if (FUNC_20(VAR_9, VAR_10)) {
  FUNC_15(&VAR_5.config_lock);
  return FUNC_0(-VAR_0);
 }
 FUNC_15(&VAR_5.config_lock);

 VAR_11 = FUNC_11(sizeof(struct zfcp_unit), VAR_2);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 FUNC_3(&VAR_11->refcount, 0);
 FUNC_9(&VAR_11->remove_wq);
 FUNC_1(&VAR_11->scsi_work, VAR_6);

 VAR_11->port = VAR_9;
 VAR_11->fcp_lun = VAR_10;

 if (FUNC_6(&VAR_11->sysfs_device, "0x%016llx",
    (unsigned long long) VAR_10)) {
  FUNC_10(VAR_11);
  return FUNC_0(-VAR_1);
 }
 VAR_11->sysfs_device.parent = &VAR_9->sysfs_device;
 VAR_11->sysfs_device.release = VAR_8;
 FUNC_5(&VAR_11->sysfs_device, VAR_11);


 FUNC_4(VAR_3, &VAR_11->status);

 FUNC_16(&VAR_11->latencies.lock);
 VAR_11->latencies.write.channel.min = 0xFFFFFFFF;
 VAR_11->latencies.write.fabric.min = 0xFFFFFFFF;
 VAR_11->latencies.read.channel.min = 0xFFFFFFFF;
 VAR_11->latencies.read.fabric.min = 0xFFFFFFFF;
 VAR_11->latencies.cmd.channel.min = 0xFFFFFFFF;
 VAR_11->latencies.cmd.fabric.min = 0xFFFFFFFF;

 if (FUNC_7(&VAR_11->sysfs_device)) {
  FUNC_13(&VAR_11->sysfs_device);
  return FUNC_0(-VAR_0);
 }

 if (FUNC_17(&VAR_11->sysfs_device.kobj,
          &VAR_7)) {
  FUNC_8(&VAR_11->sysfs_device);
  return FUNC_0(-VAR_0);
 }

 FUNC_22(VAR_11);

 FUNC_18(&VAR_5.config_lock);
 FUNC_12(&VAR_11->list, &VAR_9->unit_list_head);
 FUNC_2(VAR_3, &VAR_11->status);
 FUNC_4(VAR_4, &VAR_11->status);

 FUNC_19(&VAR_5.config_lock);

 FUNC_21(VAR_9);

 return VAR_11;
}
