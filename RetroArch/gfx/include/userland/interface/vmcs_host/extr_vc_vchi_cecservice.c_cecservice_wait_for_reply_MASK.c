
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {int * client_handle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,void*,scalar_t__,scalar_t__*,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int32_t FUNC_6(void *VAR_4, uint32_t VAR_5) {
   int32_t VAR_6 = 0;
   uint32_t VAR_7 = 0;
   do {




      VAR_6 = (int32_t) FUNC_2(FUNC_4( VAR_2.client_handle[0], VAR_4, VAR_5, &VAR_7, VAR_0 ));
   } while( VAR_7 == 0 && FUNC_5(&VAR_3) == VAR_1);
   if(VAR_7) {
      FUNC_0("CEC service got reply %d bytes", VAR_7);
   } else {
      FUNC_1("CEC service wait for reply failed, error: %s",
                      FUNC_3(VAR_6));
   }

   return VAR_6;
}
