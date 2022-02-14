
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {size_t input_scale; scalar_t__ rgb32; } ;
typedef TYPE_3__ video_info_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {int * buffer; void* lock; } ;
struct TYPE_14__ {void** input_data; int alive; int focus; int has_windowed; int suppress_screensaver; int (* send_and_wait ) (TYPE_4__*,TYPE_5__*) ;int thread; int last_time; TYPE_1__ frame; TYPE_3__ info; int ** input; void* cond_thread; void* cond_cmd; void* alpha_lock; void* lock; } ;
typedef TYPE_4__ thread_video_t ;
struct TYPE_12__ {int b; } ;
struct TYPE_15__ {TYPE_2__ data; int member_0; } ;
typedef TYPE_5__ thread_packet_t ;
typedef int input_driver_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int *,int,size_t) ;
 void* FUNC_3 () ;
 void* FUNC_4 () ;
 int FUNC_5 (int ,TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static bool FUNC_7(thread_video_t *VAR_3,
      const video_info_t VAR_4,
      input_driver_t **VAR_5, void **VAR_6)
{
   size_t VAR_7;
   thread_packet_t VAR_8 = {VAR_0};

   VAR_3->lock = FUNC_4();
   VAR_3->alpha_lock = FUNC_4();
   VAR_3->frame.lock = FUNC_4();
   VAR_3->cond_cmd = FUNC_3();
   VAR_3->cond_thread = FUNC_3();
   VAR_3->input = VAR_5;
   VAR_3->input_data = VAR_6;
   VAR_3->info = VAR_4;
   VAR_3->alive = 1;
   VAR_3->focus = 1;
   VAR_3->has_windowed = 1;
   VAR_3->suppress_screensaver = 1;

   VAR_7 = VAR_4.input_scale * VAR_1;
   VAR_7 *= VAR_7;
   VAR_7 *= VAR_4.rgb32 ? sizeof(uint32_t) : sizeof(uint16_t);
   VAR_3->frame.buffer = (uint8_t*)FUNC_1(VAR_7);

   if (!VAR_3->frame.buffer)
      return 0;

   FUNC_2(VAR_3->frame.buffer, 0x80, VAR_7);

   VAR_3->last_time = FUNC_0();
   VAR_3->thread = FUNC_5(VAR_2, VAR_3);

   if (!VAR_3->thread)
      return 0;

   FUNC_6(VAR_3, &VAR_8);

   VAR_3->send_and_wait = FUNC_6;
   return VAR_8.data.b;
}
