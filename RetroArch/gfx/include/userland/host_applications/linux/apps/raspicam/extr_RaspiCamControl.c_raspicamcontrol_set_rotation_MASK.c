
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * output; } ;
typedef TYPE_1__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int) ;

int FUNC_2(MMAL_COMPONENT_T *VAR_1, int VAR_2)
{
   int VAR_3;
   int VAR_4 = ((VAR_2 % 360 ) / 90) * 90;

   VAR_3 = FUNC_0(VAR_1->output[0], VAR_0, VAR_4);
   FUNC_0(VAR_1->output[1], VAR_0, VAR_4);
   FUNC_0(VAR_1->output[2], VAR_0, VAR_4);

   return FUNC_1(VAR_3);
}
