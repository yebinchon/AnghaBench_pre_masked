
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {size_t output_num; TYPE_2__** output; int name; int control; } ;
struct TYPE_7__ {TYPE_1__* format; } ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;


 int FUNC_0 (char*,char const*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,char const*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_COMPONENT_T *VAR_3, const char *VAR_4,
                                      MMAL_PORT_T **VAR_5)
{
   MMAL_STATUS_T VAR_6;
   uint32_t VAR_7;

   VAR_6 = FUNC_1(VAR_3->control, VAR_4);
   if (VAR_6 != VAR_2)
   {
      FUNC_0("%s: couldn't open uri %s", VAR_3->name, VAR_4);
      return VAR_6;
   }


   for (VAR_7 = 0; VAR_7 < VAR_3->output_num; VAR_7++)
   {
      if (VAR_3->output[VAR_7]->format->type == VAR_1)
      {
         break;
      }
   }

   if (VAR_7 == VAR_3->output_num)
   {
      FUNC_0("%s: no video track", VAR_4);
      return VAR_0;
   }

   *VAR_5 = VAR_3->output[VAR_7];
   return VAR_2;
}
