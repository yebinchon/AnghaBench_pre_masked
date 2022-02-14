
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_2__ {int * client_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,void*,int ,int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int32_t FUNC_4(void *VAR_3, uint32_t VAR_4) {


   FUNC_2("[%s]", VAR_1);
   if(!FUNC_3(VAR_3)) {
      FUNC_1("TV service: NULL buffer passed to wait_for_bulk_receive");
      return -1;
   }

   return FUNC_0( VAR_2.client_handle[0],
                                   VAR_3,
                                   VAR_4,
                                   VAR_0,
                                   ((void*)0) );
}
