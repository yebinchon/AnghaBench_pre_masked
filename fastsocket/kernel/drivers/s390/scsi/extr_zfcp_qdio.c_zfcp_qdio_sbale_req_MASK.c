
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_queue_req {int sbal_last; } ;
struct zfcp_qdio {int req_q; } ;
struct qdio_buffer_element {int dummy; } ;


 struct qdio_buffer_element* FUNC_0 (int *,int ,int ) ;

struct qdio_buffer_element *FUNC_1(struct zfcp_qdio *VAR_0,
      struct zfcp_queue_req *VAR_1)
{
 return FUNC_0(&VAR_0->req_q, VAR_1->sbal_last, 0);
}
