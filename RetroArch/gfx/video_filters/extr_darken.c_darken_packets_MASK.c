
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct softfilter_work_packet {struct softfilter_thread_data* thread_data; int work; } ;
struct softfilter_thread_data {size_t out_pitch; size_t in_pitch; unsigned int width; unsigned int height; int const* in_data; int * out_data; } ;
struct filter_data {unsigned int threads; scalar_t__ in_fmt; int * workers; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(void *VAR_4,
      struct softfilter_work_packet *VAR_5,
      void *VAR_6, size_t VAR_7,
      const void *VAR_8, unsigned VAR_9, unsigned VAR_10, size_t VAR_11)
{
   unsigned VAR_12;
   struct filter_data *VAR_13 = (struct filter_data*)VAR_4;
   for (VAR_12 = 0; VAR_12 < VAR_13->threads; VAR_12++)
   {
      struct softfilter_thread_data *VAR_14 =
         (struct softfilter_thread_data*)&VAR_13->workers[VAR_12];
      unsigned VAR_15 = (VAR_10 * VAR_12) / VAR_13->threads;
      unsigned VAR_16 = (VAR_10 * (VAR_12 + 1)) / VAR_13->threads;
      VAR_14->out_data = (uint8_t*)VAR_6 + VAR_15 * VAR_7;
      VAR_14->in_data = (const uint8_t*)VAR_8 + VAR_15 * VAR_11;
      VAR_14->out_pitch = VAR_7;
      VAR_14->in_pitch = VAR_11;
      VAR_14->width = VAR_9;
      VAR_14->height = VAR_16 - VAR_15;

      if (VAR_13->in_fmt == VAR_1)
         VAR_5[VAR_12].work = VAR_3;
      else if (VAR_13->in_fmt == VAR_0)
         VAR_5[VAR_12].work = VAR_2;
      VAR_5[VAR_12].thread_data = VAR_14;
   }
}
