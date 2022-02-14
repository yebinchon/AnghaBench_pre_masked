
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int control; } ;
struct TYPE_5__ {int member_0; int member_1; } ;
typedef TYPE_1__ MMAL_RATIONAL_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_1__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

int FUNC_3(MMAL_COMPONENT_T *VAR_1, int VAR_2)
{
   int VAR_3 = 0;

   if (!VAR_1)
      return 1;

   if (VAR_2 >= -100 && VAR_2 <= 100)
   {
      MMAL_RATIONAL_T VAR_4 = {VAR_2, 100};
      VAR_3 = FUNC_1(FUNC_0(VAR_1->control, VAR_0, VAR_4));
   }
   else
   {
      FUNC_2("Invalid contrast value");
      VAR_3 = 1;
   }

   return VAR_3;
}
