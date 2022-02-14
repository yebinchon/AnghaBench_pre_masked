
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct MMAL_COMPONENT_MODULE_T {int dummy; } ;
struct TYPE_19__ {int lock; } ;
struct TYPE_18__ {int refcount; int event_pool; struct MMAL_COMPONENT_MODULE_T* module; int priority; } ;
struct TYPE_17__ {char* name; unsigned int port_num; unsigned int input_num; unsigned int output_num; unsigned int clock_num; TYPE_1__** port; TYPE_1__** clock; TYPE_1__** output; TYPE_1__** input; TYPE_1__* control; scalar_t__ id; TYPE_3__* priv; } ;
struct TYPE_16__ {int buffer_size_min; scalar_t__ buffer_num_min; unsigned int index_all; unsigned int index; scalar_t__ buffer_size; scalar_t__ buffer_num; int type; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef int MMAL_EVENT_FORMAT_CHANGED_T ;
typedef int MMAL_ES_SPECIFIC_FORMAT_T ;
typedef int MMAL_ES_FORMAT_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;
typedef TYPE_3__ MMAL_COMPONENT_PRIVATE_T ;
typedef TYPE_4__ MMAL_COMPONENT_CORE_PRIVATE_T ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char const*,scalar_t__,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,char const*,unsigned int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char const*,TYPE_2__*) ;
 int FUNC_6 () ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (scalar_t__,int) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 (char const*) ;
 TYPE_2__* FUNC_10 (int,unsigned int,char*) ;
 int FUNC_11 (TYPE_2__*) ;
 TYPE_1__** FUNC_12 (int,char*) ;
 scalar_t__ FUNC_13 (int *,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_16(const char *VAR_13,
   MMAL_STATUS_T (*VAR_14)(const char *VAR_15, MMAL_COMPONENT_T *),
   struct MMAL_COMPONENT_MODULE_T *VAR_16,
   MMAL_COMPONENT_T **VAR_17)
{
   MMAL_COMPONENT_CORE_PRIVATE_T *VAR_18;
   MMAL_STATUS_T VAR_19 = VAR_2;
   unsigned int VAR_20 = sizeof(MMAL_COMPONENT_T) + sizeof(MMAL_COMPONENT_CORE_PRIVATE_T);
   unsigned int VAR_21, VAR_22 = FUNC_9(VAR_13) + 1;
   unsigned int VAR_23;
   char *VAR_24;

   if(!VAR_17)
      return VAR_1;

   FUNC_6();

   *VAR_17 = FUNC_10(1, VAR_20 + VAR_22, "mmal component");
   if(!*VAR_17)
      return VAR_2;

   VAR_18 = (MMAL_COMPONENT_CORE_PRIVATE_T *)&(*VAR_17)[1];
   (*VAR_17)->priv = (MMAL_COMPONENT_PRIVATE_T *)VAR_18;
   (*VAR_17)->name = VAR_24= (char *)&((MMAL_COMPONENT_CORE_PRIVATE_T *)(*VAR_17)->priv)[1];
   FUNC_2(VAR_24, VAR_13, VAR_22);

   (*VAR_17)->priv->refcount = 1;
   (*VAR_17)->priv->priority = VAR_10;

   if(FUNC_13(&VAR_18->lock, "mmal component lock") != VAR_9)
   {
      FUNC_11(*VAR_17);
      return VAR_2;
   }

   FUNC_14(&VAR_12);
   (*VAR_17)->id=VAR_11++;
   FUNC_15(&VAR_12);


   (*VAR_17)->control = FUNC_8(*VAR_17, VAR_5, 0);
   if(!(*VAR_17)->control)
      goto error;
   FUNC_4((*VAR_17)->control);


   (*VAR_17)->priv->module = VAR_16;
   if (!VAR_14)
      VAR_14 = FUNC_5;
   VAR_19 = VAR_14(VAR_13, *VAR_17);
   if (VAR_19 != VAR_8)
   {
      if (VAR_19 == VAR_3)
         FUNC_0("could not find component '%s'", VAR_13);
      else
         FUNC_0("could not create component '%s' (%i)", VAR_13, VAR_19);
      goto error;
   }


   if ((*VAR_17)->control->buffer_size_min <
       sizeof(MMAL_ES_FORMAT_T) + sizeof(MMAL_ES_SPECIFIC_FORMAT_T) + sizeof(MMAL_EVENT_FORMAT_CHANGED_T))
      (*VAR_17)->control->buffer_size_min = sizeof(MMAL_ES_FORMAT_T) +
         sizeof(MMAL_ES_SPECIFIC_FORMAT_T) + sizeof(MMAL_EVENT_FORMAT_CHANGED_T);

   if ((*VAR_17)->control->buffer_num_min < VAR_0)
      (*VAR_17)->control->buffer_num_min = VAR_0;


   (*VAR_17)->priv->event_pool = FUNC_7((*VAR_17)->control->buffer_num_min,
         (*VAR_17)->control->buffer_size_min);
   if (!(*VAR_17)->priv->event_pool)
   {
      VAR_19 = VAR_2;
      FUNC_0("could not create event pool (%d, %d)", (*VAR_17)->control->buffer_num_min,
            (*VAR_17)->control->buffer_size_min);
      goto error;
   }


   (*VAR_17)->port_num = (*VAR_17)->input_num + (*VAR_17)->output_num + (*VAR_17)->clock_num + 1;
   (*VAR_17)->port = FUNC_12((*VAR_17)->port_num * sizeof(MMAL_PORT_T *), "mmal ports");
   if (!(*VAR_17)->port)
   {
      VAR_19 = VAR_2;
      FUNC_0("could not create list of ports");
      goto error;
   }
   VAR_23 = 0;
   (*VAR_17)->port[VAR_23++] = (*VAR_17)->control;
   for (VAR_21 = 0; VAR_21 < (*VAR_17)->input_num; VAR_21++)
      (*VAR_17)->port[VAR_23++] = (*VAR_17)->input[VAR_21];
   for (VAR_21 = 0; VAR_21 < (*VAR_17)->output_num; VAR_21++)
      (*VAR_17)->port[VAR_23++] = (*VAR_17)->output[VAR_21];
   for (VAR_21 = 0; VAR_21 < (*VAR_17)->clock_num; VAR_21++)
      (*VAR_17)->port[VAR_23++] = (*VAR_17)->clock[VAR_21];
   for (VAR_21 = 0; VAR_21 < (*VAR_17)->port_num; VAR_21++)
      (*VAR_17)->port[VAR_21]->index_all = VAR_21;

   FUNC_1("created '%s' %d %p", VAR_13, (*VAR_17)->id, *VAR_17);


   (*VAR_17)->control->type = VAR_5;
   (*VAR_17)->control->index = 0;
   for (VAR_21 = 0; VAR_21 < (*VAR_17)->input_num; VAR_21++)
   {
      MMAL_PORT_T *VAR_25 = (*VAR_17)->input[VAR_21];
      VAR_25->type = VAR_6;
      VAR_25->index = VAR_21;
   }
   for (VAR_21 = 0; VAR_21 < (*VAR_17)->output_num; VAR_21++)
   {
      MMAL_PORT_T *VAR_26 = (*VAR_17)->output[VAR_21];
      VAR_26->type = VAR_7;
      VAR_26->index = VAR_21;
   }
   for (VAR_21 = 0; VAR_21 < (*VAR_17)->clock_num; VAR_21++)
   {
      MMAL_PORT_T *VAR_27 = (*VAR_17)->clock[VAR_21];
      VAR_27->type = VAR_4;
      VAR_27->index = VAR_21;
   }
   for (VAR_21 = 0; VAR_21 < (*VAR_17)->port_num; VAR_21++)
   {
      MMAL_PORT_T *VAR_28 = (*VAR_17)->port[VAR_21];
      if (VAR_28->buffer_size < VAR_28->buffer_size_min)
         VAR_28->buffer_size = VAR_28->buffer_size_min;
      if (VAR_28->buffer_num < VAR_28->buffer_num_min)
         VAR_28->buffer_num = VAR_28->buffer_num_min;
   }

   return VAR_8;

 error:
   FUNC_3(*VAR_17);
   *VAR_17 = 0;
   return VAR_19;
}
