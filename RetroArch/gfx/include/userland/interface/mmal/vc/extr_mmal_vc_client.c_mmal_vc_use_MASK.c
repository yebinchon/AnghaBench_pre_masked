
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ inited; } ;
typedef int MMAL_STATUS_T ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

MMAL_STATUS_T FUNC_1(void)
{
   MMAL_STATUS_T VAR_2 = VAR_0;
   if(VAR_1.inited)
      VAR_2 = FUNC_0(&VAR_1);
   return VAR_2;
}
