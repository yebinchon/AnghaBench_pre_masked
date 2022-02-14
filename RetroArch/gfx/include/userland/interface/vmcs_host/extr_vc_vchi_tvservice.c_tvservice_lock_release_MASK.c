
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int * client_handle; scalar_t__ initialised; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __inline void FUNC_2 (void) {
   if (VAR_0.initialised) {
      FUNC_0(VAR_0.client_handle[0]);
   }
   FUNC_1(&VAR_0.lock);
}
