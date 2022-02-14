
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ queue; scalar_t__ audio_opened; } ;
struct TYPE_7__ {int input; scalar_t__ input_num; TYPE_1__* priv; } ;
struct TYPE_6__ {TYPE_3__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;
typedef TYPE_3__ MMAL_COMPONENT_MODULE_T ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_COMPONENT_T *VAR_2)
{
   MMAL_COMPONENT_MODULE_T *VAR_3 = VAR_2->priv->module;

   if (VAR_3->audio_opened)
      FUNC_0();
   FUNC_1(VAR_1);

   if(VAR_2->input_num) FUNC_2(VAR_2->input, 1);
   if(VAR_3->queue) FUNC_3(VAR_3->queue);
   FUNC_4(VAR_3);
   return VAR_0;
}
