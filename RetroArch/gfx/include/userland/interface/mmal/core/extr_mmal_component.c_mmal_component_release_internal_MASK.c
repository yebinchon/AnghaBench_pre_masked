
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ is_enabled; } ;
struct TYPE_10__ {int destruction_pending; int lock; } ;
struct TYPE_9__ {unsigned int input_num; unsigned int output_num; unsigned int clock_num; int id; int name; TYPE_1__* priv; TYPE_4__** clock; TYPE_4__** output; TYPE_4__** input; TYPE_4__* control; } ;
struct TYPE_8__ {scalar_t__ refcount; scalar_t__ refcount_ports; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;
typedef TYPE_3__ MMAL_COMPONENT_CORE_PRIVATE_T ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_7(MMAL_COMPONENT_T *VAR_2)
{
   MMAL_COMPONENT_CORE_PRIVATE_T *VAR_3 = (MMAL_COMPONENT_CORE_PRIVATE_T *)VAR_2->priv;
   unsigned int VAR_4;

   if (!FUNC_6(VAR_2->priv->refcount > 0))
      return VAR_0;

   FUNC_4(&VAR_3->lock);
   if (--VAR_2->priv->refcount)
   {
      FUNC_5(&VAR_3->lock);
      return VAR_1;
   }
   VAR_3->destruction_pending = 1;
   FUNC_5(&VAR_3->lock);

   FUNC_0("%s %d preparing for destruction", VAR_2->name, VAR_2->id);


   for(VAR_4 = 0; VAR_4 < VAR_2->input_num; VAR_4++)
      if(VAR_2->input[VAR_4]->is_enabled)
         FUNC_2(VAR_2->input[VAR_4]);
   for(VAR_4 = 0; VAR_4 < VAR_2->output_num; VAR_4++)
      if(VAR_2->output[VAR_4]->is_enabled)
         FUNC_2(VAR_2->output[VAR_4]);
   for(VAR_4 = 0; VAR_4 < VAR_2->clock_num; VAR_4++)
      if(VAR_2->clock[VAR_4]->is_enabled)
         FUNC_2(VAR_2->clock[VAR_4]);
   if(VAR_2->control->is_enabled)
      FUNC_2(VAR_2->control);



   for(VAR_4 = 0; VAR_4 < VAR_2->input_num; VAR_4++)
      FUNC_3(VAR_2->input[VAR_4]);
   for(VAR_4 = 0; VAR_4 < VAR_2->output_num; VAR_4++)
      FUNC_3(VAR_2->output[VAR_4]);
   for(VAR_4 = 0; VAR_4 < VAR_2->clock_num; VAR_4++)
      FUNC_3(VAR_2->clock[VAR_4]);


   FUNC_4(&VAR_3->lock);
   if (VAR_2->priv->refcount_ports)
   {
      VAR_3->destruction_pending = 0;
      FUNC_5(&VAR_3->lock);
      FUNC_0("%s %d delaying destruction", VAR_2->name, VAR_2->id);
      return VAR_1;
   }
   FUNC_5(&VAR_3->lock);

   return FUNC_1(VAR_2);
}
