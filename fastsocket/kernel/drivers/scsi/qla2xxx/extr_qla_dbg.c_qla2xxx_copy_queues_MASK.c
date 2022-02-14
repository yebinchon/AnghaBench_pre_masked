
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsp_que {int length; int ring; } ;
struct req_que {int length; int ring; } ;
struct qla_hw_data {struct rsp_que** rsp_q_map; struct req_que** req_q_map; } ;
typedef int response_t ;
typedef int request_t ;


 int FUNC_0 (void*,int ,int) ;

__attribute__((used)) static inline void *
FUNC_1(struct qla_hw_data *VAR_0, void *VAR_1)
{
 struct req_que *VAR_2 = VAR_0->req_q_map[0];
 struct rsp_que *VAR_3 = VAR_0->rsp_q_map[0];

 FUNC_0(VAR_1, VAR_2->ring, VAR_2->length *
     sizeof(request_t));


 VAR_1 += VAR_2->length * sizeof(request_t);
 FUNC_0(VAR_1, VAR_3->ring, VAR_3->length *
     sizeof(response_t));

 return VAR_1 + (VAR_3->length * sizeof(response_t));
}
