
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_12__ {int efb_prio_attr; int cdb; int lun; } ;
struct TYPE_11__ {int tptt; int hashed_src_addr; int hashed_dest_addr; int frame_type; } ;
struct TYPE_14__ {int proto_conn_rate; int sg_element; int retry_count; int data_dir; void* conn_handle; void* sister_scb; TYPE_5__ ssp_cmd; TYPE_4__ ssp_frame; int total_xfer_len; } ;
struct TYPE_8__ {int opcode; } ;
struct scb {TYPE_7__ ssp_task; TYPE_1__ header; } ;
struct TYPE_13__ {int task_prio; int task_attr; int cdb; scalar_t__ enable_first_burst; int LUN; } ;
struct sas_task {size_t data_dir; TYPE_6__ ssp_task; int total_xfer_len; struct domain_device* dev; } ;
struct domain_device {int linkrate; scalar_t__ lldd_dev; TYPE_3__* port; int hashed_sas_addr; } ;
struct asd_ascb {int tasklet_complete; struct scb* scb; } ;
typedef int gfp_t ;
struct TYPE_10__ {TYPE_2__* ha; } ;
struct TYPE_9__ {int hashed_sas_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sas_task*,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int * VAR_5 ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct asd_ascb *VAR_6, struct sas_task *VAR_7,
         gfp_t VAR_8)
{
 struct domain_device *VAR_9 = VAR_7->dev;
 struct scb *VAR_10;
 int VAR_11 = 0;

 VAR_10 = VAR_6->scb;

 VAR_10->header.opcode = VAR_2;

 VAR_10->ssp_task.proto_conn_rate = (1 << 4);
 VAR_10->ssp_task.proto_conn_rate |= VAR_9->linkrate;
 VAR_10->ssp_task.total_xfer_len = FUNC_3(VAR_7->total_xfer_len);
 VAR_10->ssp_task.ssp_frame.frame_type = VAR_3;
 FUNC_4(VAR_10->ssp_task.ssp_frame.hashed_dest_addr, VAR_9->hashed_sas_addr,
        VAR_1);
 FUNC_4(VAR_10->ssp_task.ssp_frame.hashed_src_addr,
        VAR_9->port->ha->hashed_sas_addr, VAR_1);
 VAR_10->ssp_task.ssp_frame.tptt = FUNC_1(0xFFFF);

 FUNC_4(VAR_10->ssp_task.ssp_cmd.lun, VAR_7->ssp_task.LUN, 8);
 if (VAR_7->ssp_task.enable_first_burst)
  VAR_10->ssp_task.ssp_cmd.efb_prio_attr |= VAR_0;
 VAR_10->ssp_task.ssp_cmd.efb_prio_attr |= (VAR_7->ssp_task.task_prio << 3);
 VAR_10->ssp_task.ssp_cmd.efb_prio_attr |= (VAR_7->ssp_task.task_attr & 7);
 FUNC_4(VAR_10->ssp_task.ssp_cmd.cdb, VAR_7->ssp_task.cdb, 16);

 VAR_10->ssp_task.sister_scb = FUNC_2(0xFFFF);
 VAR_10->ssp_task.conn_handle = FUNC_2(
  (u16)(unsigned long)VAR_9->lldd_dev);
 VAR_10->ssp_task.data_dir = VAR_5[VAR_7->data_dir];
 VAR_10->ssp_task.retry_count = VAR_10->ssp_task.retry_count;

 VAR_6->tasklet_complete = VAR_4;

 VAR_11 = FUNC_0(VAR_7, VAR_10->ssp_task.sg_element, VAR_8);

 return VAR_11;
}
