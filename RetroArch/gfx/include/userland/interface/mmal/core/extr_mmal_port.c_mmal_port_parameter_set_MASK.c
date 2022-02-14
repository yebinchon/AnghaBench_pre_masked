
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ size; int id; } ;
struct TYPE_17__ {TYPE_2__* priv; scalar_t__ index; scalar_t__ type; TYPE_1__* component; } ;
struct TYPE_16__ {scalar_t__ (* pf_parameter_set ) (TYPE_3__*,TYPE_4__ const*) ;} ;
struct TYPE_15__ {int name; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_PARAMETER_HEADER_T ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int,int,TYPE_3__*,TYPE_4__ const*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_4__ const*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_4__ const*) ;

MMAL_STATUS_T FUNC_6(MMAL_PORT_T *VAR_2,
   const MMAL_PARAMETER_HEADER_T *VAR_3)
{
   MMAL_STATUS_T VAR_4 = VAR_1;

   if (!VAR_2)
   {
      FUNC_1("no port");
      return VAR_0;
   }
   if (!VAR_3)
   {
      FUNC_1("param not supplied");
      return VAR_0;
   }
   if (!VAR_2->priv)
   {
      FUNC_1("port not configured");
      return VAR_0;
   }

   FUNC_2("%s(%i:%i) port %p, param %p (%x,%i)", VAR_2->component->name,
             (int)VAR_2->type, (int)VAR_2->index, VAR_2,
             VAR_3, VAR_3 ? VAR_3->id : 0, VAR_3 ? (int)VAR_3->size : 0);

   FUNC_0(VAR_2);
   if (VAR_2->priv->pf_parameter_set)
      VAR_4 = VAR_2->priv->pf_parameter_set(VAR_2, VAR_3);
   if (VAR_4 == VAR_1)
   {

      VAR_4 = FUNC_4(VAR_2, VAR_3);
   }
   FUNC_3(VAR_2);
   return VAR_4;
}
