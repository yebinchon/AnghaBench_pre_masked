
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_2__ {int initialised; size_t num_connections; int * client_handle; int lock; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static __inline void FUNC_3 (void) {
   VCOS_STATUS_T VAR_2;
   uint32_t VAR_3;
   FUNC_1(VAR_1.initialised);
   VAR_2 = FUNC_2( &VAR_1.lock );
   if(VAR_1.initialised)
   {
      for (VAR_3=0; VAR_3<VAR_1.num_connections; VAR_3++) {
         FUNC_0(VAR_1.client_handle[VAR_3]);
      }
   }
   FUNC_1(VAR_2 == VAR_0);
}
