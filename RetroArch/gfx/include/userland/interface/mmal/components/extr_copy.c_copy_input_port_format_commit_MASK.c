
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__** output; } ;
struct TYPE_13__ {scalar_t__ buffer_size_recommended; scalar_t__ buffer_size_min; int buffer_num_recommended; int buffer_num_min; int format; } ;
struct TYPE_12__ {scalar_t__ buffer_size_min; scalar_t__ buffer_size_recommended; scalar_t__ buffer_size; TYPE_2__* priv; int buffer_num_recommended; int buffer_num_min; int format; int is_enabled; TYPE_5__* component; } ;
struct TYPE_11__ {TYPE_1__* module; } ;
struct TYPE_10__ {int needs_configuring; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef TYPE_5__ MMAL_COMPONENT_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int **,int ) ;
 int FUNC_7 (TYPE_3__*,int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_8(MMAL_PORT_T *VAR_2)
{
   MMAL_COMPONENT_T *VAR_3 = VAR_2->component;
   MMAL_PORT_T *VAR_4 = VAR_3->output[0];
   MMAL_EVENT_FORMAT_CHANGED_T *VAR_5;
   MMAL_BUFFER_HEADER_T *VAR_6;
   MMAL_STATUS_T VAR_7;



   if (!FUNC_3(VAR_2->format, VAR_4->format) &&
       VAR_4->buffer_size_min == VAR_4->buffer_size_recommended &&
       VAR_4->buffer_size_min == FUNC_1(VAR_2->buffer_size_min, VAR_2->buffer_size))
      return VAR_1;



   if (!VAR_4->is_enabled)
   {
      VAR_4->buffer_size_min = VAR_4->buffer_size_recommended =
         FUNC_1(VAR_2->buffer_size, VAR_2->buffer_size_min);
      return FUNC_5(VAR_4->format, VAR_2->format);
   }


   VAR_7 = FUNC_6(VAR_4, &VAR_6, VAR_0);
   if (VAR_7 != VAR_1)
   {
      FUNC_0("unable to get an event buffer");
      return VAR_7;
   }

   VAR_5 = FUNC_2(VAR_6);
   FUNC_4(VAR_5->format, VAR_2->format);


   VAR_5->buffer_num_min = VAR_4->buffer_num_min;
   VAR_5->buffer_num_recommended = VAR_4->buffer_num_recommended;
   VAR_5->buffer_size_min = VAR_5->buffer_size_recommended =
      FUNC_1(VAR_2->buffer_size_min, VAR_2->buffer_size);

   VAR_4->priv->module->needs_configuring = 1;
   FUNC_7(VAR_4, VAR_6);
   return VAR_7;
}
