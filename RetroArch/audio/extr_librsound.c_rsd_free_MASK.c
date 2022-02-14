
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cond; int cond_mutex; int mutex; } ;
struct TYPE_6__ {TYPE_1__ thread; int cb_lock; struct TYPE_6__* port; struct TYPE_6__* host; scalar_t__ fifo_buffer; } ;
typedef TYPE_2__ rsound_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(rsound_t *VAR_0)
{
   FUNC_2(VAR_0 != ((void*)0));
   if (VAR_0->fifo_buffer)
      FUNC_0(VAR_0->fifo_buffer);
   if (VAR_0->host)
      FUNC_1(VAR_0->host);
   if (VAR_0->port)
      FUNC_1(VAR_0->port);

   FUNC_4(VAR_0->thread.mutex);
   FUNC_4(VAR_0->thread.cond_mutex);
   FUNC_4(VAR_0->cb_lock);
   FUNC_3(VAR_0->thread.cond);

   FUNC_1(VAR_0);

   return 0;
}
