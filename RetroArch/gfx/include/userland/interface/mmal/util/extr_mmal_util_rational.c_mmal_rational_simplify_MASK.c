
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; int den; } ;
typedef TYPE_1__ MMAL_RATIONAL_T ;


 int FUNC_0 (int,int) ;

void FUNC_1(MMAL_RATIONAL_T *VAR_0)
{
   int VAR_1 = FUNC_0(VAR_0->num, VAR_0->den);
   VAR_0->num /= VAR_1;
   VAR_0->den /= VAR_1;
}
