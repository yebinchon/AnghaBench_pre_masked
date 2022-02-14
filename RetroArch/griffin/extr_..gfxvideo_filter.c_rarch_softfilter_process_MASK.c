
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int threads; TYPE_4__* packets; int impl_data; TYPE_2__* thread_data; TYPE_1__* impl; } ;
typedef TYPE_3__ rarch_softfilter_t ;
struct TYPE_9__ {int thread_data; int (* work ) (int ,int ) ;} ;
struct TYPE_7__ {int done; int lock; int cond; TYPE_4__* packet; } ;
struct TYPE_6__ {int (* get_work_packets ) (int ,TYPE_4__*,void*,size_t,void const*,unsigned int,unsigned int,size_t) ;} ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_4__*,void*,size_t,void const*,unsigned int,unsigned int,size_t) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(rarch_softfilter_t *VAR_0,
      void *VAR_1, size_t VAR_2,
      const void *VAR_3, unsigned VAR_4, unsigned VAR_5,
      size_t VAR_6)
{
   unsigned VAR_7;

   if (!VAR_0)
      return;

   if (VAR_0->impl && VAR_0->impl->get_work_packets)
      VAR_0->impl->get_work_packets(VAR_0->impl_data, VAR_0->packets,
            VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
   for (VAR_7 = 0; VAR_7 < VAR_0->threads; VAR_7++)
      VAR_0->packets[VAR_7].work(VAR_0->impl_data, VAR_0->packets[VAR_7].thread_data);

}
