
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int quit; } ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int type; } ;
struct TYPE_7__ {TYPE_4__* module; } ;
typedef TYPE_2__ SDL_Event ;
typedef TYPE_3__ MMAL_COMPONENT_T ;
typedef TYPE_4__ MMAL_COMPONENT_MODULE_T ;


 int VAR_0 ;

 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
   MMAL_COMPONENT_T *VAR_2 = (MMAL_COMPONENT_T *)VAR_1;
   MMAL_COMPONENT_MODULE_T *VAR_3 = VAR_2->priv->module;
   SDL_Event VAR_4;

   while (FUNC_0(&VAR_4))
   {
      switch (VAR_4.type)
      {
      case 128:
         if (!VAR_3->quit)
            FUNC_1(VAR_2, VAR_0);
         return 0;
      default:
         break;
      }
   }

   return 0;
}
