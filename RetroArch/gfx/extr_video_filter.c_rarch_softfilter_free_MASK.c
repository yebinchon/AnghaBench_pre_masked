
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int num_plugs; unsigned int threads; int die; scalar_t__ conf; struct TYPE_6__* thread_data; int cond; int lock; int thread; struct TYPE_6__* plugs; scalar_t__ lib; scalar_t__ impl_data; TYPE_1__* impl; struct TYPE_6__* packets; } ;
typedef TYPE_2__ rarch_softfilter_t ;
struct TYPE_5__ {int (* destroy ) (scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;

void FUNC_10(rarch_softfilter_t *VAR_0)
{
   unsigned VAR_1 = 0;
   (void)VAR_1;

   if (!VAR_0)
      return;

   FUNC_2(VAR_0->packets);
   if (VAR_0->impl && VAR_0->impl_data)
      VAR_0->impl->destroy(VAR_0->impl_data);
   if (VAR_0->conf)
      FUNC_0(VAR_0->conf);

   FUNC_2(VAR_0);
}
