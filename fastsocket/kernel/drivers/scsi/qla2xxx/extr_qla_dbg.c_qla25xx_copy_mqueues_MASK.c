
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct rsp_que {int length; int ring; } ;
struct req_que {int length; int ring; } ;
struct qla_hw_data {int max_req_queues; int max_rsp_queues; struct rsp_que** rsp_q_map; struct req_que** req_q_map; int mqenable; } ;
struct qla2xxx_mqueue_header {void* size; void* number; void* queue; } ;
struct qla2xxx_mqueue_chain {void* chain_size; void* type; } ;
typedef int response_t ;
typedef int request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,int ,int) ;

__attribute__((used)) static inline void *
FUNC_3(struct qla_hw_data *VAR_3, void *VAR_4, uint32_t **VAR_5)
{
 struct qla2xxx_mqueue_chain *VAR_6;
 struct qla2xxx_mqueue_header *VAR_7;
 struct req_que *VAR_8;
 struct rsp_que *VAR_9;
 int VAR_10;

 if (!VAR_3->mqenable)
  return VAR_4;


 for (VAR_10 = 1; VAR_10 < VAR_3->max_req_queues; VAR_10++) {
  VAR_8 = VAR_3->req_q_map[VAR_10];
  if (!VAR_8)
   break;


  VAR_6 = VAR_4;
  *VAR_5 = &VAR_6->type;
  VAR_6->type = FUNC_0(VAR_0);
  VAR_6->chain_size = FUNC_1(
      sizeof(struct qla2xxx_mqueue_chain) +
      sizeof(struct qla2xxx_mqueue_header) +
      (VAR_8->length * sizeof(request_t)));
  VAR_4 += sizeof(struct qla2xxx_mqueue_chain);


  VAR_7 = VAR_4;
  VAR_7->queue = FUNC_0(VAR_1);
  VAR_7->number = FUNC_1(VAR_10);
  VAR_7->size = FUNC_1(VAR_8->length * sizeof(request_t));
  VAR_4 += sizeof(struct qla2xxx_mqueue_header);


  FUNC_2(VAR_4, VAR_8->ring, VAR_8->length * sizeof(request_t));
  VAR_4 += VAR_8->length * sizeof(request_t);
 }


 for (VAR_10 = 1; VAR_10 < VAR_3->max_rsp_queues; VAR_10++) {
  VAR_9 = VAR_3->rsp_q_map[VAR_10];
  if (!VAR_9)
   break;


  VAR_6 = VAR_4;
  *VAR_5 = &VAR_6->type;
  VAR_6->type = FUNC_0(VAR_0);
  VAR_6->chain_size = FUNC_1(
      sizeof(struct qla2xxx_mqueue_chain) +
      sizeof(struct qla2xxx_mqueue_header) +
      (VAR_9->length * sizeof(response_t)));
  VAR_4 += sizeof(struct qla2xxx_mqueue_chain);


  VAR_7 = VAR_4;
  VAR_7->queue = FUNC_0(VAR_2);
  VAR_7->number = FUNC_1(VAR_10);
  VAR_7->size = FUNC_1(VAR_9->length * sizeof(response_t));
  VAR_4 += sizeof(struct qla2xxx_mqueue_header);


  FUNC_2(VAR_4, VAR_9->ring, VAR_9->length * sizeof(response_t));
  VAR_4 += VAR_9->length * sizeof(response_t);
 }

 return VAR_4;
}
