
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buffer_size; void* buffer; } ;
typedef TYPE_1__ ccv_nnc_graph_t ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (void*,int) ;

void* FUNC_2(ccv_nnc_graph_t* const VAR_0, int VAR_1)
{
 if (VAR_0->buffer_size >= VAR_1)
  return VAR_0->buffer;
 VAR_0->buffer_size = VAR_1;
 VAR_0->buffer = (VAR_0->buffer) ? FUNC_1(VAR_0->buffer, VAR_1) : FUNC_0(VAR_1);
 return VAR_0->buffer;
}
