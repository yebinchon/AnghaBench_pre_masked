
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ keep_alive_count; int lock; int service; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_1__ VAR_0 ;

void FUNC_4(void)
{
   FUNC_1(&VAR_0.lock);

   if (FUNC_3(VAR_0.keep_alive_count > 0))
   {
      if (!--VAR_0.keep_alive_count)
         FUNC_0(VAR_0.service);
   }

   FUNC_2(&VAR_0.lock);
}
