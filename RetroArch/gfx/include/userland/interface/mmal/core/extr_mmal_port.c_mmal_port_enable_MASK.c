
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_28__ {scalar_t__ core_owns_connection; TYPE_2__* connected_port; } ;
struct TYPE_27__ {scalar_t__ type; scalar_t__ is_enabled; struct TYPE_27__* name; TYPE_1__* priv; scalar_t__ buffer_size_min; scalar_t__ buffer_size_recommended; scalar_t__ buffer_size; scalar_t__ buffer_num_min; scalar_t__ buffer_num_recommended; scalar_t__ buffer_num; } ;
struct TYPE_26__ {TYPE_3__* core; int pf_enable; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_PORT_PRIVATE_CORE_T ;
typedef TYPE_2__* MMAL_PORT_BH_CB_T ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,TYPE_2__*,TYPE_2__*,...) ;
 int FUNC_2 (char*,TYPE_2__*,TYPE_2__*,TYPE_2__*,int,int,int,int,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_9 (scalar_t__) ;

MMAL_STATUS_T FUNC_10(MMAL_PORT_T *VAR_6, MMAL_PORT_BH_CB_T VAR_7)
{
   MMAL_STATUS_T VAR_8;
   MMAL_PORT_T *VAR_9;
   MMAL_PORT_PRIVATE_CORE_T *VAR_10;

   if (!VAR_6 || !VAR_6->priv)
      return VAR_0;

   FUNC_2("%s port %p, cb %p, buffers (%i/%i/%i,%i/%i/%i)",
             VAR_6->name, VAR_6, VAR_7,
             (int)VAR_6->buffer_num, (int)VAR_6->buffer_num_recommended, (int)VAR_6->buffer_num_min,
             (int)VAR_6->buffer_size, (int)VAR_6->buffer_size_recommended, (int)VAR_6->buffer_size_min);

   if (!VAR_6->priv->pf_enable)
      return VAR_1;

   VAR_10 = VAR_6->priv->core;
   FUNC_0(VAR_6);
   VAR_9 = VAR_10->connected_port;


   if (VAR_6->is_enabled)
   {
      FUNC_3(VAR_6);
      FUNC_1("%s(%p) already enabled", VAR_6->name, VAR_6);
      return VAR_0;
   }
   if (VAR_9 && VAR_7)
   {
      FUNC_3(VAR_6);
      FUNC_1("callback (%p) not allowed for connected port (%s)%p",
         VAR_7, VAR_6->name, VAR_9);
      return VAR_0;
   }



   if (VAR_9)
   {
      FUNC_0(VAR_9);
      VAR_8 = FUNC_5(VAR_6, VAR_9);
      if (VAR_8 != VAR_3)
      {
         FUNC_3(VAR_9);
         FUNC_3(VAR_6);
         return VAR_8;
      }

      VAR_7 = VAR_9->type == VAR_2 ?
         VAR_5 : VAR_4;
   }


   if (VAR_9 && VAR_9->type == VAR_2)
   {
      VAR_8 = FUNC_8(VAR_9, VAR_4);
      if (VAR_8 != VAR_3)
      {
         FUNC_1("failed to enable connected port (%s)%p (%s)", VAR_9->name,
            VAR_9, FUNC_9(VAR_8));
         goto error;
      }
   }

   VAR_8 = FUNC_8(VAR_6, VAR_7);
   if (VAR_8 != VAR_3)
   {
      FUNC_1("failed to enable port %s(%p) (%s)", VAR_6->name, VAR_6,
         FUNC_9(VAR_8));
      goto error;
   }


   if (VAR_9 && VAR_9->type != VAR_2)
   {
      VAR_8 = FUNC_8(VAR_9, VAR_5);
      if (VAR_8 != VAR_3)
      {
         FUNC_1("failed to enable connected port (%s)%p (%s)", VAR_9->name,
            VAR_9, FUNC_9(VAR_8));
         goto error;
      }
   }


   if (VAR_9 && VAR_10->core_owns_connection)
   {
      VAR_8 = FUNC_6(VAR_6, VAR_9);
      if (VAR_8 != VAR_3)
      {
         FUNC_1("failed to start connection (%s)%p (%s)", VAR_6->name,
            VAR_6, FUNC_9(VAR_8));
         goto error;
      }
   }

   if (VAR_9)
      FUNC_3(VAR_9);
   FUNC_3(VAR_6);
   return VAR_3;

error:
   if (VAR_9 && VAR_9->is_enabled)
      FUNC_7(VAR_9);
   if (VAR_6->is_enabled)
      FUNC_7(VAR_6);
   if (VAR_9)
      FUNC_4(VAR_6, VAR_9);

   if (VAR_9)
      FUNC_3(VAR_9);
   FUNC_3(VAR_6);
   return VAR_8;
}
