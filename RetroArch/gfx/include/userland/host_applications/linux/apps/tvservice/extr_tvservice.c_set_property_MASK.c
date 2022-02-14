
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {void* param2; void* param1; int property; } ;
typedef int HDMI_PROPERTY_T ;
typedef TYPE_1__ HDMI_PROPERTY_PARAM_T ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(HDMI_PROPERTY_T VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
   int VAR_3;
   HDMI_PROPERTY_PARAM_T VAR_4;
   VAR_4.property = VAR_0;
   VAR_4.param1 = VAR_1;
   VAR_4.param2 = VAR_2;

   VAR_3 = FUNC_1(&VAR_4);
   if(VAR_3 != 0)
   {
      FUNC_0( "Failed to set property %d", VAR_0);
   }
   return VAR_3;
}
