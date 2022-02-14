
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ refcount; int lock; scalar_t__ service; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( void )
{
   FUNC_1(&VAR_0.lock);

   if (VAR_0.refcount > 0 && --VAR_0.refcount == 0)
   {
      FUNC_0(VAR_0.service);
      VAR_0.service = 0;
   }
   FUNC_2(&VAR_0.lock);
}
