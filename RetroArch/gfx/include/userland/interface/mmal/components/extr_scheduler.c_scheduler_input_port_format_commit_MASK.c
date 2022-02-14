
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__** output; } ;
struct TYPE_9__ {int buffer_size_recommended; int buffer_num_recommended; int buffer_size_min; int buffer_num_min; int format; } ;
struct TYPE_8__ {size_t index; int buffer_size_recommended; int buffer_num_recommended; int buffer_size_min; int buffer_num_min; int format; int is_enabled; TYPE_3__* component; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int **,int ) ;
 int FUNC_6 (TYPE_1__*,int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_7(MMAL_PORT_T *VAR_3)
{
   MMAL_COMPONENT_T *VAR_4 = VAR_3->component;
   MMAL_EVENT_FORMAT_CHANGED_T *VAR_5;
   MMAL_PORT_T *VAR_6 = VAR_4->output[0];
   MMAL_BUFFER_HEADER_T *VAR_7;
   MMAL_STATUS_T VAR_8;



   if (!VAR_6->is_enabled)
   {
      VAR_8 = FUNC_4(VAR_6->format, VAR_3->format);
      return VAR_8;
   }


   VAR_8 = FUNC_5(VAR_6, &VAR_7, VAR_1);
   if (VAR_8 != VAR_2)
   {
      FUNC_0("unable to get an event buffer");
      return VAR_8;
   }
   VAR_5 = FUNC_2(VAR_7);
   if (!VAR_5)
   {
      FUNC_1(VAR_7);
      FUNC_0("failed to set format");
      return VAR_0;
   }
   FUNC_3(VAR_5->format, VAR_3->format);


   VAR_5->buffer_num_min = VAR_3->buffer_num_min;
   VAR_5->buffer_size_min = VAR_3->buffer_size_min;
   VAR_5->buffer_num_recommended = VAR_3->buffer_num_recommended;
   VAR_5->buffer_size_recommended = VAR_3->buffer_size_recommended;

   FUNC_6(VAR_4->output[VAR_3->index], VAR_7);
   return VAR_8;
}
