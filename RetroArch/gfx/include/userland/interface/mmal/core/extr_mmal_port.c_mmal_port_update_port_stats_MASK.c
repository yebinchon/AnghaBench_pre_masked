
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {unsigned int first_buffer_time; unsigned int last_buffer_time; int max_delay; int buffer_count; } ;
struct TYPE_7__ {TYPE_5__ tx; TYPE_5__ rx; } ;
struct TYPE_10__ {int stats_lock; TYPE_1__ stats; } ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {TYPE_4__* core; } ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_PORT_PRIVATE_CORE_T ;
typedef scalar_t__ MMAL_CORE_STATS_DIR ;
typedef TYPE_5__ MMAL_CORE_STATISTICS_T ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(MMAL_PORT_T *VAR_1, MMAL_CORE_STATS_DIR VAR_2)
{
   MMAL_PORT_PRIVATE_CORE_T *VAR_3 = VAR_1->priv->core;
   MMAL_CORE_STATISTICS_T *VAR_4;
   unsigned VAR_5 = FUNC_0();

   FUNC_2(&VAR_3->stats_lock);

   VAR_4 = VAR_2 == VAR_0 ? &VAR_3->stats.rx : &VAR_3->stats.tx;

   VAR_4->buffer_count++;

   if (!VAR_4->first_buffer_time)
   {
      VAR_4->last_buffer_time = VAR_4->first_buffer_time = VAR_5;
   }
   else
   {
      VAR_4->max_delay = FUNC_1(VAR_4->max_delay, VAR_5-VAR_4->last_buffer_time);
      VAR_4->last_buffer_time = VAR_5;
   }
   FUNC_3(&VAR_3->stats_lock);
}
