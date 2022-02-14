
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int Lock; int * Sock; scalar_t__ IsVpnServer; } ;
typedef TYPE_1__ RPC ;
typedef int PACK ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*,char*) ;
 int * FUNC_6 (int) ;
 int * FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int ) ;

PACK *FUNC_9(RPC *VAR_2, char *VAR_3, PACK *VAR_4)
{
 PACK *VAR_5;
 UINT VAR_6 = 0;
 UINT VAR_7 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }



 FUNC_2(VAR_2->Lock);
 {
  if (VAR_4 == ((void*)0))
  {
   VAR_4 = FUNC_3();
  }

  FUNC_5(VAR_4, "function_name", VAR_3);

RETRY:
  VAR_7 = 0;
  VAR_5 = FUNC_7(VAR_2, VAR_4);

  if (VAR_5 == ((void*)0))
  {
   if (VAR_2->IsVpnServer && VAR_2->Sock != ((void*)0))
   {
    if (VAR_6 < 1)
    {
     VAR_6++;


     VAR_7 = FUNC_0(VAR_2);

     if (VAR_7 == VAR_1)
     {
      goto RETRY;
     }
    }
   }
  }

  FUNC_1(VAR_4);

  if (VAR_5 == ((void*)0))
  {
   if (VAR_7 == 0)
   {
    VAR_7 = VAR_0;
   }

   VAR_5 = FUNC_6(VAR_7);
   FUNC_4(VAR_5, "error_code", VAR_7);
  }
 }
 FUNC_8(VAR_2->Lock);

 return VAR_5;
}
