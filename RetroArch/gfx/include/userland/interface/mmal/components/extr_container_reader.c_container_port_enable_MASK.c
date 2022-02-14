
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_19__ {size_t tracks_num; TYPE_4__** tracks; } ;
struct TYPE_18__ {TYPE_9__* container; scalar_t__ writer; } ;
struct TYPE_17__ {TYPE_1__* priv; } ;
struct TYPE_16__ {size_t track; int format; } ;
struct TYPE_15__ {TYPE_3__* format; TYPE_2__* priv; TYPE_7__* component; } ;
struct TYPE_14__ {int is_enabled; } ;
struct TYPE_13__ {int encoding; } ;
struct TYPE_12__ {TYPE_6__* module; } ;
struct TYPE_11__ {TYPE_8__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_5__ MMAL_PORT_T ;
typedef TYPE_6__ MMAL_PORT_MODULE_T ;
typedef int MMAL_PORT_BH_CB_T ;
typedef TYPE_7__ MMAL_COMPONENT_T ;
typedef TYPE_8__ MMAL_COMPONENT_MODULE_T ;


 int FUNC_0 (char*,char*,size_t,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_9__*,int ,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_PORT_T *VAR_4, MMAL_PORT_BH_CB_T VAR_5)
{
   MMAL_COMPONENT_T *VAR_6 = VAR_4->component;
   MMAL_COMPONENT_MODULE_T *VAR_7 = VAR_6->priv->module;
   MMAL_PORT_MODULE_T *VAR_8 = VAR_4->priv->module;
   FUNC_1(VAR_5);

   if(!VAR_7->container)
      return VAR_0;

   if(VAR_7->writer)
   {
      VC_CONTAINER_STATUS_T VAR_9;
      VAR_8->track = VAR_7->container->tracks_num;
      VAR_9 = FUNC_3(VAR_7->container, VAR_2,
                                     VAR_8->format);
      if(VAR_9 != VAR_3)
      {
         FUNC_0("error adding track %4.4s (%i)", (char *)&VAR_4->format->encoding, (int)VAR_9);
         return FUNC_2(VAR_9);
      }
   }

   if(VAR_8->track >= VAR_7->container->tracks_num)
      {
      FUNC_0("error 1 adding track %4.4s (%i/%i)", (char *)&VAR_4->format->encoding, VAR_8->track, VAR_7->container->tracks_num);
      return VAR_0;
      }
   VAR_7->container->tracks[VAR_8->track]->is_enabled = 1;
   return VAR_1;
}
