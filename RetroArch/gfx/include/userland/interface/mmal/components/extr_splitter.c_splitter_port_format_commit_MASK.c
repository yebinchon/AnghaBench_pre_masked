
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int output_num; TYPE_1__** output; } ;
struct TYPE_6__ {scalar_t__ type; int format; TYPE_3__* component; } ;
struct TYPE_5__ {int format; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_3)
{
   MMAL_COMPONENT_T *VAR_4 = VAR_3->component;
   MMAL_STATUS_T VAR_5;
   unsigned int VAR_6;


   if (VAR_3->type == VAR_1)
   {
      FUNC_0("output port is read-only");
      return VAR_0;
   }


   for (VAR_6 = 0; VAR_6 < VAR_4->output_num; VAR_6++)
   {
      VAR_5 = FUNC_1(VAR_4->output[VAR_6]->format, VAR_3->format);
      if (VAR_5 != VAR_2)
         return VAR_5;
   }

   return VAR_2;
}
