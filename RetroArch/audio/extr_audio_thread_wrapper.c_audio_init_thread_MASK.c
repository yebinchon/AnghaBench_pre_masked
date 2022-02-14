
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* device; unsigned int out_rate; unsigned int* new_rate; unsigned int latency; unsigned int block_frames; int alive; int stopped; scalar_t__ inited; int lock; int cond; int thread; int const* driver; } ;
typedef TYPE_1__ audio_thread_t ;
typedef int audio_driver_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_1__*) ;

bool FUNC_8(const audio_driver_t **VAR_2,
      void **VAR_3, const char *VAR_4, unsigned VAR_5,
      unsigned *VAR_6, unsigned VAR_7,
      unsigned VAR_8, const audio_driver_t *VAR_9)
{
   audio_thread_t *VAR_10 = (audio_thread_t*)FUNC_1(1, sizeof(*VAR_10));
   if (!VAR_10)
      return 0;

   VAR_10->driver = (const audio_driver_t*)VAR_9;
   VAR_10->device = VAR_4;
   VAR_10->out_rate = VAR_5;
   VAR_10->new_rate = VAR_6;
   VAR_10->latency = VAR_7;
   VAR_10->block_frames = VAR_8;

   if (!(VAR_10->cond = FUNC_2()))
      goto error;
   if (!(VAR_10->lock = FUNC_5()))
      goto error;

   VAR_10->alive = 1;
   VAR_10->stopped = 1;

   if (!(VAR_10->thread = FUNC_7(VAR_1, VAR_10)))
      goto error;


   FUNC_4(VAR_10->lock);
   while (!VAR_10->inited)
      FUNC_3(VAR_10->cond, VAR_10->lock);
   FUNC_6(VAR_10->lock);

   if (VAR_10->inited < 0)
      goto error;

   *VAR_2 = &VAR_0;
   *VAR_3 = VAR_10;
   return 1;

error:
   *VAR_2 = ((void*)0);
   *VAR_3 = ((void*)0);
   FUNC_0(VAR_10);
   return 0;
}
