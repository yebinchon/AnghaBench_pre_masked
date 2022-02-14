
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; TYPE_1__* list; } ;
struct TYPE_4__ {int in_use; } ;
typedef TYPE_1__ MMAL_VC_PAYLOAD_ELEM_T ;


 unsigned int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static MMAL_VC_PAYLOAD_ELEM_T *FUNC_2()
{
   MMAL_VC_PAYLOAD_ELEM_T *VAR_2 = 0;
   unsigned int VAR_3;

   FUNC_0(&VAR_1.lock);
   for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   {
      if (VAR_1.list[VAR_3].in_use)
         continue;
      VAR_2 = &VAR_1.list[VAR_3];
      VAR_2->in_use = 1;
      break;
   }
   FUNC_1(&VAR_1.lock);

   return VAR_2;
}
