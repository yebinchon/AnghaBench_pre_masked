
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int lock; } ;
struct TYPE_7__ {unsigned int input_num; unsigned int output_num; scalar_t__ is_enabled; int * output; int * input; TYPE_1__* priv; int id; int name; } ;
struct TYPE_6__ {scalar_t__ (* pf_disable ) (TYPE_2__*) ;} ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;
typedef TYPE_3__ MMAL_COMPONENT_CORE_PRIVATE_T ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

MMAL_STATUS_T FUNC_5(MMAL_COMPONENT_T *VAR_4)
{
   MMAL_COMPONENT_CORE_PRIVATE_T *VAR_5;
   MMAL_STATUS_T VAR_6 = VAR_1;
   unsigned int VAR_7;

   if (!VAR_4)
      return VAR_0;

   VAR_5 = (MMAL_COMPONENT_CORE_PRIVATE_T *)VAR_4->priv;

   FUNC_0("%s %d", VAR_4->name, VAR_4->id);

   FUNC_3(&VAR_5->lock);


   if (!VAR_4->is_enabled)
   {
      FUNC_4(&VAR_5->lock);
      return VAR_2;
   }

   if (VAR_4->priv->pf_disable)
      VAR_6 = VAR_4->priv->pf_disable(VAR_4);



   if (VAR_6 == VAR_1)
   {
      VAR_6 = VAR_2;


      for (VAR_7 = 0; VAR_6 == VAR_2 && VAR_7 < VAR_4->input_num; VAR_7++)
         VAR_6 = FUNC_1(VAR_4->input[VAR_7], VAR_3);
      for (VAR_7 = 0; VAR_6 == VAR_2 && VAR_7 < VAR_4->output_num; VAR_7++)
         VAR_6 = FUNC_1(VAR_4->output[VAR_7], VAR_3);
   }

   if (VAR_6 == VAR_2)
      VAR_4->is_enabled = 0;

   FUNC_4(&VAR_5->lock);

   return VAR_6;
}
