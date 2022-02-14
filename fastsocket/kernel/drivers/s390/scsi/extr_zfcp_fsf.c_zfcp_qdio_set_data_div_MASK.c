
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct zfcp_queue_req {size_t sbal_first; } ;
struct TYPE_4__ {TYPE_1__** sbal; } ;
struct zfcp_qdio {TYPE_2__ req_q; } ;
struct qdio_buffer_element {int length; } ;
struct TYPE_3__ {struct qdio_buffer_element* element; } ;



__attribute__((used)) static inline
void FUNC_0(struct zfcp_qdio *VAR_0,
       struct zfcp_queue_req *VAR_1, u32 VAR_2)
{
 struct qdio_buffer_element *VAR_3;

 VAR_3 = VAR_0->req_q.sbal[VAR_1->sbal_first]->element;
 VAR_3->length = VAR_2;
}
