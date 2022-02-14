
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int32_t ;
struct TYPE_2__ {int * client_handle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*,scalar_t__,scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int32_t FUNC_2(void *VAR_4, uint32_t VAR_5) {
   int32_t VAR_6 = 0;
   uint32_t VAR_7 = 0;
   do {




      VAR_6 = FUNC_0( VAR_2.client_handle[0], VAR_4, VAR_5, &VAR_7, VAR_0 );
   } while( VAR_7 == 0 && FUNC_1(&VAR_3) == VAR_1 );

   return VAR_6;

}
