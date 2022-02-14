
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_connections; int * open_handle; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(void) {
   int VAR_1 = 0;
   int VAR_2=0;
   for(VAR_2 = 0; VAR_2 < VAR_0.num_connections; VAR_2++) {
      VAR_1 = (VAR_1 == 0) ? FUNC_0(VAR_0.open_handle[VAR_2]) : VAR_1;
   }
   return VAR_1;
}
