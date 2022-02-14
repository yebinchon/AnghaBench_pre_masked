
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct softfilter_work_packet {struct softfilter_thread_data* thread_data; int work; } ;
struct softfilter_thread_data {size_t out_pitch; size_t in_pitch; unsigned int width; unsigned int height; unsigned int first; int last; int const* in_data; int * out_data; } ;
struct filter_data {unsigned int threads; scalar_t__ in_fmt; int * workers; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(void *VAR_3,
      struct softfilter_work_packet *VAR_4,
      void *VAR_5, size_t VAR_6,
      const void *VAR_7, unsigned VAR_8, unsigned VAR_9, size_t VAR_10)
{
   unsigned VAR_11;
   struct filter_data *VAR_12 = (struct filter_data*)VAR_3;

   for (VAR_11 = 0; VAR_11 < VAR_12->threads; VAR_11++)
   {
      struct softfilter_thread_data *VAR_13 =
         (struct softfilter_thread_data*)&VAR_12->workers[VAR_11];

      unsigned VAR_14 = (VAR_9 * VAR_11) / VAR_12->threads;
      unsigned VAR_15 = (VAR_9 * (VAR_11 + 1)) / VAR_12->threads;
      VAR_13->out_data = (uint8_t*)VAR_5 + VAR_14 * VAR_0 * VAR_6;
      VAR_13->in_data = (const uint8_t*)VAR_7 + VAR_14 * VAR_10;
      VAR_13->out_pitch = VAR_6;
      VAR_13->in_pitch = VAR_10;
      VAR_13->width = VAR_8;
      VAR_13->height = VAR_15 - VAR_14;



      VAR_13->first = VAR_14;
      VAR_13->last = VAR_15 == VAR_9;

      if (VAR_12->in_fmt == VAR_1)
         VAR_4[VAR_11].work = VAR_2;
      VAR_4[VAR_11].thread_data = VAR_13;
   }
}
