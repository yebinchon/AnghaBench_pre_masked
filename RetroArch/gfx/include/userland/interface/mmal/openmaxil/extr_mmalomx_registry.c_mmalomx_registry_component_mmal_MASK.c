
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* mmal; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

const char *FUNC_1(int VAR_1)
{
   if (VAR_1 >= (int)FUNC_0(VAR_0) || VAR_1 < 0)
      VAR_1 = FUNC_0(VAR_0) - 1;

   return VAR_0[VAR_1].mmal;
}
