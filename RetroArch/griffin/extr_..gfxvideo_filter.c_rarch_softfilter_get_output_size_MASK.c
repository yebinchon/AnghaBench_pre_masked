
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int impl_data; TYPE_1__* impl; } ;
typedef TYPE_2__ rarch_softfilter_t ;
struct TYPE_4__ {int (* query_output_size ) (int ,unsigned int*,unsigned int*,unsigned int,unsigned int) ;} ;


 int FUNC_0 (int ,unsigned int*,unsigned int*,unsigned int,unsigned int) ;

void FUNC_1(rarch_softfilter_t *VAR_0,
      unsigned *VAR_1, unsigned *VAR_2,
      unsigned VAR_3, unsigned VAR_4)
{
   if (VAR_0 && VAR_0->impl && VAR_0->impl->query_output_size)
      VAR_0->impl->query_output_size(VAR_0->impl_data, VAR_1,
            VAR_2, VAR_3, VAR_4);
}
