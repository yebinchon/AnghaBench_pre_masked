
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {scalar_t__ opaque_allocs; } ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {TYPE_3__* module; } ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_PORT_MODULE_T ;
typedef int MMAL_OPAQUE_IMAGE_HANDLE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(MMAL_PORT_T *VAR_1, uint8_t *VAR_2)
{
   MMAL_PORT_MODULE_T *VAR_3 = VAR_1->priv->module;

   if (VAR_3->opaque_allocs)
   {
      VAR_3->opaque_allocs--;
      FUNC_0((MMAL_OPAQUE_IMAGE_HANDLE_T)VAR_2);
      return;
   }

   else if (FUNC_1(VAR_2) == VAR_0)
      return;


   FUNC_2(VAR_2);
}
