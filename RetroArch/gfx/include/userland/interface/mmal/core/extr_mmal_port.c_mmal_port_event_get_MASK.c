
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_16__ {scalar_t__ alloc_size; scalar_t__ length; int data; scalar_t__ cmd; } ;
struct TYPE_15__ {scalar_t__ index; scalar_t__ type; TYPE_3__* component; int priv; } ;
struct TYPE_14__ {int name; TYPE_2__* priv; } ;
struct TYPE_13__ {TYPE_1__* event_pool; } ;
struct TYPE_12__ {int queue; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef int MMAL_EVENT_FORMAT_CHANGED_T ;
typedef int MMAL_ES_SPECIFIC_FORMAT_T ;
typedef int MMAL_ES_FORMAT_T ;
typedef TYPE_5__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ,int,int,TYPE_4__*,char*,...) ;
 int FUNC_1 (char*,int ,int,int,TYPE_4__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_5__* FUNC_4 (int ) ;

MMAL_STATUS_T FUNC_5(MMAL_PORT_T *VAR_4, MMAL_BUFFER_HEADER_T **VAR_5, uint32_t VAR_6)
{
   if (!VAR_4 || !VAR_4->priv || !VAR_5)
      return VAR_0;

   FUNC_1("%s(%i:%i) port %p, event %4.4s", VAR_4->component->name,
             (int)VAR_4->type, (int)VAR_4->index, VAR_4, (char *)&VAR_6);


   *VAR_5 = FUNC_4(VAR_4->component->priv->event_pool->queue);
   if (!*VAR_5)
   {
      FUNC_0("%s(%i:%i) port %p, no event buffer left for %4.4s", VAR_4->component->name,
                (int)VAR_4->type, (int)VAR_4->index, VAR_4, (char *)&VAR_6);
      return VAR_1;
   }

   (*VAR_5)->cmd = VAR_6;
   (*VAR_5)->length = 0;



   if (VAR_6 == VAR_2)
   {
      uint32_t VAR_7 = sizeof(MMAL_EVENT_FORMAT_CHANGED_T);
      VAR_7 += sizeof(MMAL_ES_FORMAT_T) + sizeof(MMAL_ES_SPECIFIC_FORMAT_T);

      if ((*VAR_5)->alloc_size < VAR_7)
      {
         FUNC_0("%s(%i:%i) port %p, event buffer for %4.4s is too small (%i/%i)",
                   VAR_4->component->name, (int)VAR_4->type, (int)VAR_4->index, VAR_4,
                   (char *)&VAR_6, (int)(*VAR_5)->alloc_size, (int)VAR_7);
         goto error;
      }

      FUNC_2((*VAR_5)->data, 0, VAR_7);
      (*VAR_5)->length = VAR_7;
   }

   return VAR_3;

error:
   if (*VAR_5)
      FUNC_3(*VAR_5);
   *VAR_5 = ((void*)0);
   return VAR_1;
}
