
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int neighbor_discovery_context; TYPE_1__* (* neighbor_discovery ) (int const,int ) ;} ;
typedef TYPE_1__ ccv_nnc_stream_context_t ;


 TYPE_1__* FUNC_0 (int const,int ) ;

ccv_nnc_stream_context_t* FUNC_1(ccv_nnc_stream_context_t* const VAR_0, const int VAR_1)
{
 if (VAR_0->neighbor_discovery)
  return VAR_0->neighbor_discovery(VAR_1, VAR_0->neighbor_discovery_context);
 return 0;
}
