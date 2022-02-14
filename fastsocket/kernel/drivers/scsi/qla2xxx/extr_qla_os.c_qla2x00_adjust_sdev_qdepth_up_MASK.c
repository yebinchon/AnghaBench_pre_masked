
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {int host_no; struct req_que* req; } ;
struct scsi_device {int queue_depth; int lun; int id; scalar_t__ ordered_tags; TYPE_1__* hostdata; } ;
struct req_que {int max_q_depth; } ;
struct TYPE_2__ {struct scsi_qla_host* vha; } ;
typedef TYPE_1__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct scsi_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct scsi_device *VAR_3, int VAR_4)
{
 fc_port_t *VAR_5 = VAR_3->hostdata;
 struct scsi_qla_host *VAR_6 = VAR_5->vha;
 struct req_que *VAR_7 = ((void*)0);

 VAR_7 = VAR_6->req;
 if (!VAR_7)
  return;

 if (VAR_7->max_q_depth <= VAR_3->queue_depth || VAR_7->max_q_depth < VAR_4)
  return;

 if (VAR_3->ordered_tags)
  FUNC_1(VAR_3, VAR_0, VAR_4);
 else
  FUNC_1(VAR_3, VAR_1, VAR_4);

 FUNC_0(VAR_2, VAR_6, 0x302a,
     "Queue depth adjusted-up to %d for nexus=%ld:%d:%d.\n",
     VAR_3->queue_depth, VAR_5->vha->host_no, VAR_3->id, VAR_3->lun);
}
