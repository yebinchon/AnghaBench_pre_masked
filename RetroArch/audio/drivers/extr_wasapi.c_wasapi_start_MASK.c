
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int running; int client; } ;
typedef TYPE_1__ wasapi_t ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(void *VAR_1, bool VAR_2)
{
   wasapi_t *VAR_3 = (wasapi_t*)VAR_1;
   HRESULT VAR_4 = FUNC_1(VAR_3->client);

   if (VAR_4 == VAR_0)
      return 1;

   if (FUNC_0(VAR_4))
      return VAR_3->running;

   VAR_3->running = 1;

   return 1;
}
