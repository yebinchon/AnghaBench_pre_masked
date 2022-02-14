
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_qdio_queue {TYPE_1__** sbal; } ;
struct qdio_buffer_element {int dummy; } ;
struct TYPE_2__ {struct qdio_buffer_element* element; } ;



__attribute__((used)) static struct qdio_buffer_element *
FUNC_0(struct zfcp_qdio_queue *VAR_0, int VAR_1, int VAR_2)
{
 return &VAR_0->sbal[VAR_1]->element[VAR_2];
}
