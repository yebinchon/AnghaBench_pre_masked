
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_2__ {int open_handle; int filesys_lock; scalar_t__ initialised; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static __inline int32_t FUNC_2 (void) {
   int VAR_2 = -1;
   if(VAR_1.initialised && FUNC_1(&VAR_1.filesys_lock) == VAR_0) {
      FUNC_0(VAR_1.open_handle);
      VAR_2 = 0;
   }
   return VAR_2;
}
