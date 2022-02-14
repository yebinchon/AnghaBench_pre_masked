
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nbio_image_handle {int is_blocking_on_processing; int is_finished; int * cb; } ;
struct TYPE_2__ {scalar_t__ data; } ;
typedef TYPE_1__ nbio_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nbio_image_handle*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(void *VAR_4, size_t VAR_5)
{
   unsigned VAR_6 = 0;
   unsigned VAR_7 = 0;
   nbio_handle_t *VAR_8 = (nbio_handle_t*)VAR_4;
   struct nbio_image_handle *VAR_9 = (struct nbio_image_handle*)VAR_8->data;
   int VAR_10 = VAR_9 ? FUNC_0(VAR_9, &VAR_6, &VAR_7) : VAR_1;

   if ((VAR_10 == VAR_1) ||
       (VAR_10 == VAR_2)
      )
      return -1;

   VAR_9->is_blocking_on_processing = (VAR_10 != VAR_0);
   VAR_9->is_finished = (VAR_10 == VAR_0);
   VAR_9->cb = &VAR_3;

   return 0;
}
