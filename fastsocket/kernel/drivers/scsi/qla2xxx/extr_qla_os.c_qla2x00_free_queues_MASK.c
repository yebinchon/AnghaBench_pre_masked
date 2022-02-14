
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsp_que {int dummy; } ;
typedef struct rsp_que req_que ;
struct qla_hw_data {int max_req_queues; int max_rsp_queues; struct rsp_que** rsp_q_map; struct rsp_que** req_q_map; } ;


 int FUNC_0 (struct rsp_que**) ;
 int FUNC_1 (struct qla_hw_data*,struct rsp_que*) ;
 int FUNC_2 (struct qla_hw_data*,struct rsp_que*) ;

__attribute__((used)) static void FUNC_3(struct qla_hw_data *VAR_0)
{
 struct req_que *VAR_1;
 struct rsp_que *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->max_req_queues; VAR_3++) {
  VAR_1 = VAR_0->req_q_map[VAR_3];
  FUNC_1(VAR_0, VAR_1);
 }
 FUNC_0(VAR_0->req_q_map);
 VAR_0->req_q_map = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_0->max_rsp_queues; VAR_3++) {
  VAR_2 = VAR_0->rsp_q_map[VAR_3];
  FUNC_2(VAR_0, VAR_2);
 }
 FUNC_0(VAR_0->rsp_q_map);
 VAR_0->rsp_q_map = ((void*)0);
}
