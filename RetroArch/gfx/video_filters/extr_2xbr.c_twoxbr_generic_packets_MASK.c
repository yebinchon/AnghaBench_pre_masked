
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
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(void *VAR_7,
      struct softfilter_work_packet *VAR_8,
      void *VAR_9, size_t VAR_10,
      const void *VAR_11, unsigned VAR_12,
      unsigned VAR_13, size_t VAR_14)
{
   unsigned VAR_15;
   struct filter_data *VAR_16 = (struct filter_data*)VAR_7;

   for (VAR_15 = 0; VAR_15 < VAR_16->threads; VAR_15++)
   {
      struct softfilter_thread_data *VAR_17 =
         (struct softfilter_thread_data*)&VAR_16->workers[VAR_15];

      unsigned VAR_18 = (VAR_13 * VAR_15) / VAR_16->threads;
      unsigned VAR_19 = (VAR_13 * (VAR_15 + 1)) / VAR_16->threads;

      VAR_17->out_data = (uint8_t*)VAR_9 + VAR_18 *
         VAR_3 * VAR_10;
      VAR_17->in_data = (const uint8_t*)VAR_11 + VAR_18 * VAR_14;
      VAR_17->out_pitch = VAR_10;
      VAR_17->in_pitch = VAR_14;
      VAR_17->width = VAR_12;
      VAR_17->height = VAR_19 - VAR_18;



      VAR_17->first = VAR_18;
      VAR_17->last = VAR_19 == VAR_13;

      if (VAR_16->in_fmt == VAR_1)
         VAR_8[VAR_15].work = VAR_5;




      else if (VAR_16->in_fmt == VAR_2)
         VAR_8[VAR_15].work = VAR_6;
      VAR_8[VAR_15].thread_data = VAR_17;
   }
}
