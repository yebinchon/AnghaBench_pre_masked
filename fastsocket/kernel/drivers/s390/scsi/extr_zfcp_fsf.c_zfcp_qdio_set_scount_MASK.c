
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_queue_req {size_t sbal_first; scalar_t__ sbal_number; } ;
struct TYPE_4__ {TYPE_1__** sbal; } ;
struct zfcp_qdio {TYPE_2__ req_q; } ;
struct qdio_buffer_element {scalar_t__ scount; } ;
struct TYPE_3__ {struct qdio_buffer_element* element; } ;



__attribute__((used)) static inline
void FUNC_0(struct zfcp_qdio *VAR_0, struct zfcp_queue_req *VAR_1)
{
 struct qdio_buffer_element *VAR_2;

 VAR_2 = VAR_0->req_q.sbal[VAR_1->sbal_first]->element;
 VAR_2->scount = VAR_1->sbal_number - 1;
}
