
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct iser_conn {TYPE_2__* device; } ;
struct iscsi_session {int scsi_cmds_max; } ;
struct iscsi_iser_task {int dummy; } ;
struct iscsi_endpoint {struct iser_conn* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct Scsi_Host {int max_cmd_len; int can_queue; scalar_t__ max_channel; scalar_t__ max_id; int max_lun; int transportt; } ;
struct TYPE_4__ {TYPE_1__* ib_device; } ;
struct TYPE_3__ {int * dma_device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct iscsi_cls_session* FUNC_4 (int *,struct Scsi_Host*,int ,int ,int,int ,int ) ;

__attribute__((used)) static struct iscsi_cls_session *
FUNC_5(struct iscsi_endpoint *VAR_5,
     uint16_t VAR_6, uint16_t VAR_7,
     uint32_t VAR_8)
{
 struct iscsi_cls_session *VAR_9;
 struct iscsi_session *VAR_10;
 struct Scsi_Host *VAR_11;
 struct iser_conn *VAR_12;

 VAR_11 = FUNC_1(&VAR_2, 0, 0);
 if (!VAR_11)
  return ((void*)0);
 VAR_11->transportt = VAR_1;
 VAR_11->max_lun = VAR_4;
 VAR_11->max_id = 0;
 VAR_11->max_channel = 0;
 VAR_11->max_cmd_len = 16;





 if (VAR_5)
  VAR_12 = VAR_5->dd_data;

 if (FUNC_0(VAR_11,
      VAR_5 ? VAR_12->device->ib_device->dma_device : ((void*)0)))
  goto free_host;





 VAR_9 = FUNC_4(&VAR_3, VAR_11,
       VAR_0, 0,
       sizeof(struct iscsi_iser_task),
       VAR_8, 0);
 if (!VAR_9)
  goto remove_host;
 VAR_10 = VAR_9->dd_data;

 VAR_11->can_queue = VAR_10->scsi_cmds_max;
 return VAR_9;

remove_host:
 FUNC_3(VAR_11);
free_host:
 FUNC_2(VAR_11);
 return ((void*)0);
}
