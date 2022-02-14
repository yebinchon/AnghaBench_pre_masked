
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct rsp_que {int id; } ;
struct req_que {int id; } ;
struct qla_hw_data {int max_req_queues; int max_rsp_queues; struct rsp_que** rsp_q_map; struct req_que** req_q_map; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct scsi_qla_host*,struct req_que*) ;
 int FUNC_2 (struct scsi_qla_host*,struct rsp_que*) ;

int
FUNC_3(struct scsi_qla_host *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 struct req_que *VAR_5 = ((void*)0);
 struct rsp_que *VAR_6 = ((void*)0);
 struct qla_hw_data *VAR_7 = VAR_2->hw;


 for (VAR_3 = 1; VAR_3 < VAR_7->max_req_queues; VAR_3++) {
  VAR_5 = VAR_7->req_q_map[VAR_3];
  if (VAR_5) {
   VAR_4 = FUNC_1(VAR_2, VAR_5);
   if (VAR_4 != VAR_0) {
    FUNC_0(VAR_1, VAR_2, 0x00ea,
        "Couldn't delete req que %d.\n",
        VAR_5->id);
    return VAR_4;
   }
  }
 }


 for (VAR_3 = 1; VAR_3 < VAR_7->max_rsp_queues; VAR_3++) {
  VAR_6 = VAR_7->rsp_q_map[VAR_3];
  if (VAR_6) {
   VAR_4 = FUNC_2(VAR_2, VAR_6);
   if (VAR_4 != VAR_0) {
    FUNC_0(VAR_1, VAR_2, 0x00eb,
        "Couldn't delete rsp que %d.\n",
        VAR_6->id);
    return VAR_4;
   }
  }
 }
 return VAR_4;
}
