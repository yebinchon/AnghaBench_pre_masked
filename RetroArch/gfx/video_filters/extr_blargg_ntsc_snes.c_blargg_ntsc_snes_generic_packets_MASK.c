
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct softfilter_work_packet {struct softfilter_thread_data* thread_data; int work; } ;
struct softfilter_thread_data {size_t out_pitch; size_t in_pitch; unsigned int width; unsigned int height; unsigned int first; int last; int const* in_data; int * out_data; } ;
struct filter_data {unsigned int threads; scalar_t__ in_fmt; int * workers; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(void *VAR_2,
      struct softfilter_work_packet *VAR_3,
      void *VAR_4, size_t VAR_5,
      const void *VAR_6, unsigned VAR_7, unsigned VAR_8, size_t VAR_9)
{
   struct filter_data *VAR_10 = (struct filter_data*)VAR_2;
   unsigned VAR_11;
   for (VAR_11 = 0; VAR_11 < VAR_10->threads; VAR_11++)
   {
      struct softfilter_thread_data *VAR_12 =
         (struct softfilter_thread_data*)&VAR_10->workers[VAR_11];

      unsigned VAR_13 = (VAR_8 * VAR_11) / VAR_10->threads;
      unsigned VAR_14 = (VAR_8 * (VAR_11 + 1)) / VAR_10->threads;
      VAR_12->out_data = (uint8_t*)VAR_4 + VAR_13 * VAR_5;
      VAR_12->in_data = (const uint8_t*)VAR_6 + VAR_13 * VAR_9;
      VAR_12->out_pitch = VAR_5;
      VAR_12->in_pitch = VAR_9;
      VAR_12->width = VAR_7;
      VAR_12->height = VAR_14 - VAR_13;



      VAR_12->first = VAR_13;
      VAR_12->last = VAR_14 == VAR_8;

      if (VAR_10->in_fmt == VAR_0)
         VAR_3[VAR_11].work = VAR_1;
      VAR_3[VAR_11].thread_data = VAR_12;
   }
}
