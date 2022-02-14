
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbio_image_handle {scalar_t__ frame_duration; int processing_final_state; } ;
typedef scalar_t__ retro_time_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct nbio_image_handle*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct nbio_image_handle *VAR_1)
{
   int VAR_2 = 0;
   unsigned VAR_3 = 0;
   unsigned VAR_4 = 0;
   retro_time_t VAR_5 = FUNC_0();

   do
   {
      VAR_2 = FUNC_1(VAR_1, &VAR_3, &VAR_4);

      if (VAR_2 != VAR_0)
         break;
   }
   while (FUNC_0() - VAR_5 < VAR_1->frame_duration);

   if (VAR_2 == VAR_0)
      return 0;

   VAR_1->processing_final_state = VAR_2;
   return -1;
}
