
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nbio_image_handle {int processing_final_state; int is_blocking_on_processing; int is_blocking; int is_finished; int ti; } ;
struct TYPE_2__ {int is_finished; scalar_t__ data; } ;
typedef TYPE_1__ nbio_handle_t ;




 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int,int *) ;
 int FUNC_1 (unsigned int*,unsigned int*,unsigned int*,unsigned int*,int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, size_t VAR_1)
{
   unsigned VAR_2, VAR_3, VAR_4, VAR_5;
   nbio_handle_t *VAR_6 = (nbio_handle_t*)VAR_0;
   struct nbio_image_handle *VAR_7 = (struct nbio_image_handle*)VAR_6->data;

   if (!VAR_7)
      return -1;

   switch (VAR_7->processing_final_state)
   {
      case 129:
      case 128:
         return -1;
      default:
         break;
   }

   FUNC_1(&VAR_2, &VAR_3, &VAR_4,
         &VAR_5, &VAR_7->ti);

   FUNC_0(VAR_2, VAR_3, VAR_4,
         VAR_5, &VAR_7->ti);

   VAR_7->is_blocking_on_processing = 0;
   VAR_7->is_blocking = 1;
   VAR_7->is_finished = 1;
   VAR_6->is_finished = 1;

   return 0;
}
