
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* component; int name; } ;
struct TYPE_14__ {TYPE_1__* priv; } ;
struct TYPE_13__ {int module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;


 int FUNC_0 (char*,int ,TYPE_3__*,int ,TYPE_3__*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_PORT_T *VAR_1, MMAL_PORT_T *VAR_2)
{
   MMAL_PORT_T *VAR_3;

   FUNC_0("%s(%p) %s(%p)", VAR_1->name, VAR_1, VAR_2->name, VAR_2);

   VAR_3 = FUNC_1(VAR_1->component->priv->module, VAR_1);
   if (!VAR_3)
      return VAR_0;


   return VAR_2 ? FUNC_2(VAR_3, VAR_2) : FUNC_3(VAR_3);
}
