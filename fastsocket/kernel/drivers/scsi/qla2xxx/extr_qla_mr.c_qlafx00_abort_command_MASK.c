
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct scsi_qla_host {struct req_que* req; struct qla_hw_data* hw; } ;
struct req_que {TYPE_1__** outstanding_cmds; } ;
struct qla_hw_data {int hardware_lock; } ;
struct TYPE_5__ {TYPE_2__* fcport; } ;
typedef TYPE_1__ srb_t ;
struct TYPE_6__ {struct scsi_qla_host* vha; } ;
typedef TYPE_2__ fc_port_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(srb_t *VAR_2)
{
 unsigned long VAR_3 = 0;

 uint32_t VAR_4;
 fc_port_t *VAR_5 = VAR_2->fcport;
 struct scsi_qla_host *VAR_6 = VAR_5->vha;
 struct qla_hw_data *VAR_7 = VAR_6->hw;
 struct req_que *VAR_8 = VAR_6->req;

 FUNC_1(&VAR_7->hardware_lock, VAR_3);
 for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_8->outstanding_cmds[VAR_4] == VAR_2)
   break;
 }
 FUNC_2(&VAR_7->hardware_lock, VAR_3);
 if (VAR_4 == VAR_0) {

  return VAR_1;
 }
 return FUNC_0(VAR_2);
}
