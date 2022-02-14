
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_2__ {int * client_handle; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*,int ,int ,int *) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int32_t FUNC_4(void *VAR_2, uint32_t VAR_3) {
   if(!FUNC_3(VAR_2)) {
      FUNC_0("CEC: NULL buffer passed to wait_for_bulk_receive");
      return -1;
   }
   return (int32_t) FUNC_1(FUNC_2( VAR_1.client_handle[0],
                                                                 VAR_2,
                                                                 VAR_3,
                                                                 VAR_0,
                                                                 ((void*)0) ));
}
