
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ input_num; int input; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_1(MMAL_COMPONENT_T *VAR_1)
{
   if(VAR_1->input_num)
      FUNC_0(VAR_1->input, VAR_1->input_num);
   return VAR_0;
}
