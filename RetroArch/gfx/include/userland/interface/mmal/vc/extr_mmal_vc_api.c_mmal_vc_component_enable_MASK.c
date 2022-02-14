
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int reply ;
typedef int msg ;
struct TYPE_10__ {scalar_t__ status; } ;
typedef TYPE_3__ mmal_worker_reply ;
struct TYPE_11__ {int header; int component_handle; } ;
typedef TYPE_4__ mmal_worker_component_enable ;
struct TYPE_12__ {TYPE_2__* priv; } ;
struct TYPE_9__ {TYPE_1__* module; } ;
struct TYPE_8__ {int component_handle; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_5__ MMAL_COMPONENT_T ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *,int,int ,TYPE_3__*,size_t*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_COMPONENT_T *VAR_4)
{
   MMAL_STATUS_T VAR_5;
   mmal_worker_reply VAR_6;
   mmal_worker_component_enable VAR_7;
   size_t VAR_8 = sizeof(VAR_6);

   FUNC_4(VAR_4 && VAR_4->priv && VAR_4->priv->module);

   VAR_7.component_handle = VAR_4->priv->module->component_handle;

   VAR_5 = FUNC_3(FUNC_2(), &VAR_7.header, sizeof(VAR_7),
                                     VAR_3, &VAR_6, &VAR_8, VAR_1);

   if (VAR_5 == VAR_2)
   {
      FUNC_4(VAR_8 == sizeof(VAR_6));
      VAR_5 = VAR_6.status;
   }

   if (VAR_5 != VAR_2 && VAR_5 != VAR_0)
   {
      FUNC_0("failed to enable component: %s", FUNC_1(VAR_5));
      return VAR_5;
   }

   return VAR_2;
}
