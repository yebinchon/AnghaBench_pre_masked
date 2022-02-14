
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int count; struct qdio_buffer** sbal; } ;
struct zfcp_qdio {TYPE_3__ resp_q; struct zfcp_adapter* adapter; } ;
struct TYPE_5__ {int sbal_response; int qdio_inb_usage; } ;
struct zfcp_fsf_req {TYPE_2__ queue_req; int list; } ;
struct zfcp_adapter {int req_list_lock; TYPE_1__* ccw_device; } ;
struct qdio_buffer_element {int eflags; scalar_t__ addr; } ;
struct qdio_buffer {struct qdio_buffer_element* element; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,unsigned long,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 int FUNC_8 (struct zfcp_adapter*) ;
 struct zfcp_fsf_req* FUNC_9 (struct zfcp_adapter*,unsigned long) ;

void FUNC_10(struct zfcp_qdio *VAR_2, int VAR_3)
{
 struct zfcp_adapter *VAR_4 = VAR_2->adapter;
 struct qdio_buffer *VAR_5 = VAR_2->resp_q.sbal[VAR_3];
 struct qdio_buffer_element *VAR_6;
 struct zfcp_fsf_req *VAR_7;
 unsigned long VAR_8, VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {

  VAR_6 = &VAR_5->element[VAR_10];
  VAR_9 = (unsigned long) VAR_6->addr;
  FUNC_5(&VAR_4->req_list_lock, VAR_8);
  VAR_7 = FUNC_9(VAR_4, VAR_9);

  if (!VAR_7) {




   FUNC_8(VAR_4);
   FUNC_4("error: unknown req_id (%lx) on adapter %s.\n",
         VAR_9, FUNC_1(&VAR_4->ccw_device->dev));
  }

  FUNC_3(&VAR_7->list);
  FUNC_6(&VAR_4->req_list_lock, VAR_8);

  VAR_7->queue_req.sbal_response = VAR_3;
  VAR_7->queue_req.qdio_inb_usage =
   FUNC_0(&VAR_2->resp_q.count);
  FUNC_7(VAR_7);

  if (FUNC_2(VAR_6->eflags & VAR_1))
   break;
 }
}
