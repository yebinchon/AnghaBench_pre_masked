
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
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,void*,scalar_t__,scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int32_t FUNC_4(void *VAR_5, uint32_t VAR_6) {
   int32_t VAR_7 = 0;
   uint32_t VAR_8 = 0;
   FUNC_2("[%s]", VAR_1);
   do {




      VAR_7 = FUNC_0( VAR_3.client_handle[0], VAR_5, VAR_6, &VAR_8, VAR_0 );
   } while( VAR_8 == 0 && FUNC_1(&VAR_4) == VAR_2);
   if(VAR_8) {
      FUNC_2("TV service got reply %d bytes", VAR_8);
   } else {
      FUNC_3("TV service wait for reply failed");
   }
   return VAR_7;
}
