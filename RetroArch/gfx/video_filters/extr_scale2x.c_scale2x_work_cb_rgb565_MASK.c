
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct softfilter_thread_data {unsigned int width; unsigned int height; int in_pitch; int out_pitch; int last; int first; scalar_t__ out_data; scalar_t__ in_data; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,int ,int ,int const*,unsigned int,int *,unsigned int) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, void *VAR_2)
{
   struct softfilter_thread_data *VAR_3 =
      (struct softfilter_thread_data*)VAR_2;
   const uint16_t *VAR_4 = (const uint16_t*)VAR_3->in_data;
   uint16_t *VAR_5 = (uint16_t*)VAR_3->out_data;
   unsigned VAR_6 = VAR_3->width;
   unsigned VAR_7 = VAR_3->height;

   FUNC_0(VAR_6, VAR_7,
         VAR_3->first, VAR_3->last, VAR_4,
         (unsigned)(VAR_3->in_pitch / VAR_0),
         VAR_5,
         (unsigned)(VAR_3->out_pitch / VAR_0));
}
