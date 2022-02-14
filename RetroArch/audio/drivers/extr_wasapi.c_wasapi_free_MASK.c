
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buffer; scalar_t__ device; scalar_t__ client; scalar_t__ renderer; int write_event; } ;
typedef TYPE_1__ wasapi_t ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(void *VAR_2)
{
   DWORD VAR_3;
   wasapi_t *VAR_4 = (wasapi_t*)VAR_2;
   HANDLE VAR_5 = VAR_4->write_event;

   FUNC_2(VAR_4->renderer);
   if (VAR_4->client)
      FUNC_5(VAR_4->client);
   FUNC_2(VAR_4->client);
   FUNC_2(VAR_4->device);
   if (VAR_4->buffer)
      FUNC_6(VAR_4->buffer);
   FUNC_7(VAR_4);

   VAR_3 = FUNC_4(VAR_5, 20);
   if (VAR_3 == VAR_0)
   {
      FUNC_3("[WASAPI]: WaitForSingleObject failed with error %d.\n", FUNC_1());
   }


   if (!(VAR_3 == VAR_1))
      return;

   FUNC_0(VAR_5);
}
