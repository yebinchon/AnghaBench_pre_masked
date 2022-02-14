
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {size_t size; int completed_sem; scalar_t__ request; int * buffer; } ;
struct TYPE_6__ {scalar_t__ (* capture ) (TYPE_3__*,int **,size_t*) ;} ;
struct TYPE_8__ {TYPE_2__ capture; TYPE_1__ ops; } ;
typedef TYPE_3__ RASPITEX_STATE ;


 scalar_t__ FUNC_0 (TYPE_3__*,int **,size_t*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(RASPITEX_STATE *VAR_0)
{
   uint8_t *VAR_1 = ((void*)0);
   size_t VAR_2 = 0;

   if (VAR_0->capture.request)
   {
      if (VAR_0->ops.capture(VAR_0, &VAR_1, &VAR_2) == 0)
      {

         VAR_0->capture.buffer = VAR_1;
         VAR_0->capture.size = VAR_2;
      }
      else
      {
         VAR_0->capture.buffer = ((void*)0);
         VAR_0->capture.size = 0;
      }

      VAR_0->capture.request = 0;
      FUNC_1(&VAR_0->capture.completed_sem);
   }
}
