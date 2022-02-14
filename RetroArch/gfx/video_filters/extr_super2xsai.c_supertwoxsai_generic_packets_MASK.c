
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct softfilter_work_packet {struct softfilter_thread_data* thread_data; int work; } ;
struct softfilter_thread_data {size_t out_pitch; size_t in_pitch; unsigned int width; unsigned int height; unsigned int first; int last; int const* in_data; int * out_data; } ;
struct filter_data {unsigned int threads; scalar_t__ in_fmt; int * workers; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(void *VAR_5,
      struct softfilter_work_packet *VAR_6,
      void *VAR_7, size_t VAR_8,
      const void *VAR_9, unsigned VAR_10, unsigned VAR_11, size_t VAR_12)
{
   unsigned VAR_13;
   struct filter_data *VAR_14 = (struct filter_data*)VAR_5;

   for (VAR_13 = 0; VAR_13 < VAR_14->threads; VAR_13++)
   {
      struct softfilter_thread_data *VAR_15 = (struct softfilter_thread_data*)&VAR_14->workers[VAR_13];

      unsigned VAR_16 = (VAR_11 * VAR_13) / VAR_14->threads;
      unsigned VAR_17 = (VAR_11 * (VAR_13 + 1)) / VAR_14->threads;
      VAR_15->out_data = (uint8_t*)VAR_7 + VAR_16 * VAR_2 * VAR_8;
      VAR_15->in_data = (const uint8_t*)VAR_9 + VAR_16 * VAR_12;
      VAR_15->out_pitch = VAR_8;
      VAR_15->in_pitch = VAR_12;
      VAR_15->width = VAR_10;
      VAR_15->height = VAR_17 - VAR_16;


      VAR_15->first = VAR_16;
      VAR_15->last = VAR_17 == VAR_11;

      if (VAR_14->in_fmt == VAR_0)
         VAR_6[VAR_13].work = VAR_3;
      else if (VAR_14->in_fmt == VAR_1)
         VAR_6[VAR_13].work = VAR_4;
      VAR_6[VAR_13].thread_data = VAR_15;
   }
}
