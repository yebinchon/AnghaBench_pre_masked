
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int lock; TYPE_3__* buffer; } ;
struct TYPE_8__ {TYPE_3__* frame; } ;
struct TYPE_10__ {int miss_count; int hit_count; int alpha_lock; struct TYPE_10__* alpha_mod; int cond_thread; int cond_cmd; int lock; TYPE_2__ frame; TYPE_1__ texture; int thread; } ;
typedef TYPE_3__ thread_video_t ;
struct TYPE_11__ {int member_0; } ;
typedef TYPE_4__ thread_packet_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_6(void *VAR_1)
{
   thread_video_t *VAR_2 = (thread_video_t*)VAR_1;
   thread_packet_t VAR_3 = { VAR_0 };

   if (!VAR_2)
      return;

   FUNC_5(VAR_2, &VAR_3);

   FUNC_4(VAR_2->thread);




   FUNC_1(VAR_2->frame.buffer);
   FUNC_3(VAR_2->frame.lock);
   FUNC_3(VAR_2->lock);
   FUNC_2(VAR_2->cond_cmd);
   FUNC_2(VAR_2->cond_thread);

   FUNC_1(VAR_2->alpha_mod);
   FUNC_3(VAR_2->alpha_lock);

   FUNC_0("Threaded video stats: Frames pushed: %u, Frames dropped: %u.\n",
         VAR_2->hit_count, VAR_2->miss_count);

   FUNC_1(VAR_2);
}
