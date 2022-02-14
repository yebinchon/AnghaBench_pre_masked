
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int running; int client; } ;
typedef TYPE_1__ wasapi_t ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0)
{
   wasapi_t *VAR_1 = (wasapi_t*)VAR_0;
   HRESULT VAR_2 = FUNC_1(VAR_1->client);
   if (FUNC_0(VAR_2))
      return !VAR_1->running;

   VAR_1->running = 0;

   return 1;
}
