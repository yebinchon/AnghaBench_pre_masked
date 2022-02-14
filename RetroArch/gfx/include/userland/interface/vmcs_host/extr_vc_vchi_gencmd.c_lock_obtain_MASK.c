
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; scalar_t__ initialised; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static __inline int FUNC_1 (void) {
   int VAR_2 = -1;
   if(VAR_1.initialised && FUNC_0(&VAR_1.lock) == VAR_0)
   {
      VAR_2 = 0;
   }

   return VAR_2;
}
