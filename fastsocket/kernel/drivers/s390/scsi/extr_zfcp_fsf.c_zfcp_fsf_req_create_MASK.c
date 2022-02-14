
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct zfcp_qdio_queue {int first; } ;
struct zfcp_qdio {struct zfcp_adapter* adapter; struct zfcp_qdio_queue req_q; } ;
struct TYPE_10__ {int sbal_number; int sbale_curr; int sbal_last; int sbal_first; } ;
struct zfcp_fsf_req {size_t fsf_command; scalar_t__ req_id; TYPE_4__* qtcb; int seq_no; TYPE_5__ queue_req; struct zfcp_adapter* adapter; int completion; int timer; int list; } ;
struct TYPE_6__ {int * qtcb_pool; } ;
struct zfcp_adapter {scalar_t__ req_no; int fsf_req_seq_no; TYPE_1__ pool; } ;
struct qdio_buffer_element {int length; void* addr; int sflags; scalar_t__ eflags; } ;
struct fsf_qtcb {int dummy; } ;
typedef int mempool_t ;
struct TYPE_8__ {scalar_t__ req_id; int ulp_info; int req_seq_no; int qtcb_version; int qtcb_type; } ;
struct TYPE_7__ {scalar_t__ req_handle; size_t fsf_command; } ;
struct TYPE_9__ {TYPE_3__ prefix; TYPE_2__ header; } ;


 int VAR_0 ;
 struct zfcp_fsf_req* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 struct zfcp_fsf_req* FUNC_6 (int *) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 struct qdio_buffer_element* FUNC_8 (struct zfcp_qdio*,TYPE_5__*) ;
 void* FUNC_9 (int *) ;

__attribute__((used)) static struct zfcp_fsf_req *FUNC_10(struct zfcp_qdio *VAR_5,
      u32 VAR_6, mempool_t *VAR_7)
{
 struct qdio_buffer_element *VAR_8;
 struct zfcp_qdio_queue *VAR_9 = &VAR_5->req_q;
 struct zfcp_adapter *VAR_10 = VAR_5->adapter;
 struct zfcp_fsf_req *VAR_11 = FUNC_6(VAR_7);

 if (FUNC_5(!VAR_11))
  return FUNC_0(-VAR_0);

 if (VAR_10->req_no == 0)
  VAR_10->req_no++;

 FUNC_1(&VAR_11->list);
 FUNC_3(&VAR_11->timer);
 FUNC_2(&VAR_11->completion);

 VAR_11->adapter = VAR_10;
 VAR_11->fsf_command = VAR_6;
 VAR_11->req_id = VAR_10->req_no;
 VAR_11->queue_req.sbal_number = 1;
 VAR_11->queue_req.sbal_first = VAR_9->first;
 VAR_11->queue_req.sbal_last = VAR_9->first;
 VAR_11->queue_req.sbale_curr = 1;

 VAR_8 = FUNC_8(VAR_5, &VAR_11->queue_req);
 VAR_8[0].addr = (void *) VAR_11->req_id;
 VAR_8[0].eflags = 0;
 VAR_8[0].sflags |= VAR_3;

 if (FUNC_4(VAR_6 != VAR_2)) {
  if (FUNC_4(*VAR_7))
   VAR_11->qtcb = FUNC_9(VAR_10->pool.qtcb_pool);
  else
   VAR_11->qtcb = FUNC_9(((void*)0));

  if (FUNC_5(!VAR_11->qtcb)) {
   FUNC_7(VAR_11);
   return FUNC_0(-VAR_0);
  }

  VAR_11->qtcb->prefix.req_seq_no = VAR_10->fsf_req_seq_no;
  VAR_11->qtcb->prefix.req_id = VAR_11->req_id;
  VAR_11->qtcb->prefix.ulp_info = 26;
  VAR_11->qtcb->prefix.qtcb_type = VAR_4[VAR_11->fsf_command];
  VAR_11->qtcb->prefix.qtcb_version = VAR_1;
  VAR_11->qtcb->header.req_handle = VAR_11->req_id;
  VAR_11->qtcb->header.fsf_command = VAR_11->fsf_command;
  VAR_11->seq_no = VAR_10->fsf_req_seq_no;
  VAR_11->qtcb->prefix.req_seq_no = VAR_10->fsf_req_seq_no;
  VAR_8[1].addr = (void *) VAR_11->qtcb;
  VAR_8[1].length = sizeof(struct fsf_qtcb);
 }

 return VAR_11;
}
