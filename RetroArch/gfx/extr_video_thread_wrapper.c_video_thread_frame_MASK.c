
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int refresh_rate; } ;
typedef TYPE_5__ video_frame_info_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_13__ {int updated; unsigned int width; unsigned int height; unsigned int pitch; char* msg; int count; int * buffer; scalar_t__ within_thread; } ;
struct TYPE_12__ {scalar_t__ enable; } ;
struct TYPE_11__ {scalar_t__ rgb32; } ;
struct TYPE_15__ {scalar_t__ last_time; int lock; int miss_count; int hit_count; int cond_cmd; TYPE_4__ frame; TYPE_3__ texture; int cond_thread; int nonblock; TYPE_2__ info; int driver_data; TYPE_1__* driver; } ;
typedef TYPE_6__ thread_video_t ;
typedef scalar_t__ retro_time_t ;
struct TYPE_10__ {int (* frame ) (int ,void const*,unsigned int,unsigned int,int ,unsigned int,char const*,TYPE_5__*) ;} ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int const*,unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (int ,void const*,unsigned int,unsigned int,int ,unsigned int,char const*,TYPE_5__*) ;
 int FUNC_10 (TYPE_6__*) ;

__attribute__((used)) static bool FUNC_11(void *VAR_0, const void *VAR_1,
      unsigned VAR_2, unsigned VAR_3, uint64_t VAR_4,
      unsigned VAR_5, const char *VAR_6, video_frame_info_t *VAR_7)
{
   unsigned VAR_8;
   const uint8_t *VAR_9 = ((void*)0);
   uint8_t *VAR_10 = ((void*)0);
   thread_video_t *VAR_11 = (thread_video_t*)VAR_0;



   if (VAR_11->frame.within_thread)
   {
      FUNC_10(VAR_11);

      if (VAR_11->driver && VAR_11->driver->frame)
         return VAR_11->driver->frame(VAR_11->driver_data, VAR_1,
               VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
      return 0;
   }

   VAR_8 = VAR_2 * (VAR_11->info.rgb32
         ? sizeof(uint32_t) : sizeof(uint16_t));

   VAR_9 = (const uint8_t*)VAR_1;
   VAR_10 = VAR_11->frame.buffer;

   FUNC_6(VAR_11->lock);

   if (!VAR_11->nonblock)
   {

      retro_time_t VAR_12 = (retro_time_t)
         FUNC_2(1000000 / VAR_7->refresh_rate);
      retro_time_t VAR_13 = VAR_11->last_time + VAR_12;


      while (VAR_11->frame.updated)
      {
         retro_time_t VAR_14 = FUNC_0();
         retro_time_t VAR_15 = VAR_13 - VAR_14;

         if (VAR_15 <= 0)
            break;

         if (!FUNC_5(VAR_11->cond_cmd, VAR_11->lock, VAR_15))
            break;
      }
   }



   if (!VAR_11->frame.updated)
   {
      if (VAR_9)
      {
         unsigned VAR_16;
         for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++, VAR_9 += VAR_5, VAR_10 += VAR_8)
            FUNC_1(VAR_10, VAR_9, VAR_8);
      }

      VAR_11->frame.updated = 1;
      VAR_11->frame.width = VAR_2;
      VAR_11->frame.height = VAR_3;
      VAR_11->frame.count = VAR_4;
      VAR_11->frame.pitch = VAR_8;

      if (VAR_6)
         FUNC_8(VAR_11->frame.msg, VAR_6, sizeof(VAR_11->frame.msg));
      else
         *VAR_11->frame.msg = '\0';

      FUNC_3(VAR_11->cond_thread);
      VAR_11->hit_count++;
   }
   else
      VAR_11->miss_count++;

   FUNC_7(VAR_11->lock);

   VAR_11->last_time = FUNC_0();
   return 1;
}
