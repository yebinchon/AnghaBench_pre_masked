
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* destroy ) (scalar_t__) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(void)
{
   if (VAR_3 != VAR_2)
      FUNC_1(VAR_3);

   if (VAR_0 && VAR_0->destroy)
      if (VAR_1)
         VAR_0->destroy(VAR_1);
}
