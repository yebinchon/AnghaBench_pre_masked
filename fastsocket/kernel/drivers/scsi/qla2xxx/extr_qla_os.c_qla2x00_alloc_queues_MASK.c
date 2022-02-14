
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsp_que {int dummy; } ;
struct req_que {int dummy; } ;
struct qla_hw_data {int max_req_queues; int max_rsp_queues; struct req_que** req_q_map; int req_qid_map; int rsp_qid_map; struct rsp_que** rsp_q_map; int pdev; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct req_que**) ;
 void* FUNC_1 (int,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int,char*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct qla_hw_data *VAR_3, struct req_que *VAR_4,
    struct rsp_que *VAR_5)
{
 scsi_qla_host_t *VAR_6 = FUNC_2(VAR_3->pdev);
 VAR_3->req_q_map = FUNC_1(sizeof(struct req_que *) * VAR_3->max_req_queues,
    VAR_1);
 if (!VAR_3->req_q_map) {
  FUNC_3(VAR_2, VAR_6, 0x003b,
      "Unable to allocate memory for request queue ptrs.\n");
  goto fail_req_map;
 }

 VAR_3->rsp_q_map = FUNC_1(sizeof(struct rsp_que *) * VAR_3->max_rsp_queues,
    VAR_1);
 if (!VAR_3->rsp_q_map) {
  FUNC_3(VAR_2, VAR_6, 0x003c,
      "Unable to allocate memory for response queue ptrs.\n");
  goto fail_rsp_map;
 }




 VAR_3->rsp_q_map[0] = VAR_5;
 VAR_3->req_q_map[0] = VAR_4;
 FUNC_4(0, VAR_3->rsp_qid_map);
 FUNC_4(0, VAR_3->req_qid_map);
 return 1;

fail_rsp_map:
 FUNC_0(VAR_3->req_q_map);
 VAR_3->req_q_map = ((void*)0);
fail_req_map:
 return -VAR_0;
}
