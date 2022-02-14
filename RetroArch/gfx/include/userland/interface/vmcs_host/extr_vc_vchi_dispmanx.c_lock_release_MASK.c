
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {size_t num_connections; int lock; int * client_handle; scalar_t__ initialised; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __inline void FUNC_3 (void) {
   uint32_t VAR_1;
   FUNC_1(VAR_0.initialised);
   if(VAR_0.initialised)
   {
      for (VAR_1=0; VAR_1<VAR_0.num_connections; VAR_1++) {
         FUNC_0(VAR_0.client_handle[VAR_1]);
      }
   }
   FUNC_2( &VAR_0.lock );
}
