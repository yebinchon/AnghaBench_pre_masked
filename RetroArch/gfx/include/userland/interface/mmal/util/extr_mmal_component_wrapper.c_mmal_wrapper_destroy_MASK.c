
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int name; } ;
struct TYPE_8__ {int sema; } ;
struct TYPE_7__ {unsigned int input_num; unsigned int output_num; scalar_t__* output_queue; scalar_t__* output_pool; scalar_t__* input_pool; TYPE_5__* component; } ;
typedef TYPE_1__ MMAL_WRAPPER_T ;
typedef TYPE_2__ MMAL_WRAPPER_PRIVATE_T ;
typedef int MMAL_STATUS_T ;


 int FUNC_0 (char*,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;

MMAL_STATUS_T FUNC_6(MMAL_WRAPPER_T *VAR_1)
{
   MMAL_WRAPPER_PRIVATE_T *VAR_2 = (MMAL_WRAPPER_PRIVATE_T *)VAR_1;
   unsigned int VAR_3;

   FUNC_0("%p, %s", VAR_1, VAR_1->component->name);


   FUNC_1(VAR_1->component);

   for (VAR_3 = 0; VAR_3 < VAR_1->input_num; VAR_3++)
   {
      if (VAR_1->input_pool[VAR_3])
         FUNC_2(VAR_1->input_pool[VAR_3]);
   }

   for (VAR_3 = 0; VAR_3 < VAR_1->output_num; VAR_3++)
   {
      if (VAR_1->output_pool[VAR_3])
         FUNC_2(VAR_1->output_pool[VAR_3]);
      if (VAR_1->output_queue[VAR_3])
         FUNC_3(VAR_1->output_queue[VAR_3]);
   }

   FUNC_5(&VAR_2->sema);
   FUNC_4(VAR_2);
   return VAR_0;
}
