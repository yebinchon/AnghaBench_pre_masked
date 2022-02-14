
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int * client_handle; scalar_t__ initialised; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __inline int FUNC_3 (void) {
   if(VAR_1.initialised && FUNC_1(&VAR_1.lock) == VAR_0) {

      if (VAR_1.initialised) {
         FUNC_0(VAR_1.client_handle[0]);
         return 0;
      }
      else
         FUNC_2(&VAR_1.lock);
   }

   return -1;
}
