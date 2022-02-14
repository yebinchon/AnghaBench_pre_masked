
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int inited; int stopped_ack; scalar_t__ driver_data; TYPE_1__* driver; int lock; int is_shutdown; int cond; scalar_t__ stopped; int alive; int use_float; int new_rate; int block_frames; int latency; int out_rate; int device; } ;
typedef TYPE_2__ audio_thread_t ;
struct TYPE_3__ {int (* free ) (scalar_t__) ;int (* start ) (scalar_t__,int ) ;int (* stop ) (scalar_t__) ;int (* use_float ) (scalar_t__) ;scalar_t__ (* init ) (int ,int ,int ,int ,int ) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(void *VAR_0)
{
   audio_thread_t *VAR_1 = (audio_thread_t*)VAR_0;

   if (!VAR_1)
      return;

   VAR_1->driver_data = VAR_1->driver->init(
         VAR_1->device, VAR_1->out_rate, VAR_1->latency,
         VAR_1->block_frames, VAR_1->new_rate);
   FUNC_3(VAR_1->lock);
   VAR_1->inited = VAR_1->driver_data ? 1 : -1;
   if (VAR_1->inited > 0 && VAR_1->driver->use_float)
      VAR_1->use_float = VAR_1->driver->use_float(VAR_1->driver_data);
   FUNC_1(VAR_1->cond);
   FUNC_4(VAR_1->lock);

   if (VAR_1->inited < 0)
      return;



   FUNC_3(VAR_1->lock);
   while (VAR_1->stopped)
      FUNC_2(VAR_1->cond, VAR_1->lock);
   FUNC_4(VAR_1->lock);

   for (;;)
   {
      FUNC_3(VAR_1->lock);

      if (!VAR_1->alive)
      {
         FUNC_1(VAR_1->cond);
         VAR_1->stopped_ack = 1;
         FUNC_4(VAR_1->lock);
         break;
      }

      if (VAR_1->stopped)
      {
         VAR_1->driver->stop(VAR_1->driver_data);
         while (VAR_1->stopped)
         {



            VAR_1->stopped_ack = 1;
            FUNC_1(VAR_1->cond);

            FUNC_2(VAR_1->cond, VAR_1->lock);
         }
         VAR_1->driver->start(VAR_1->driver_data, VAR_1->is_shutdown);
      }

      FUNC_4(VAR_1->lock);
      FUNC_0();
   }

   VAR_1->driver->free(VAR_1->driver_data);
}
