
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_7__ {char* (* ReadPassword ) (TYPE_1__*,int ) ;int (* Write ) (TYPE_1__*,int ) ;} ;
typedef int K ;
typedef TYPE_1__ CONSOLE ;
typedef int BUF ;


 int * FUNC_0 (int *,int,int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 char* FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;

K *FUNC_11(CONSOLE *VAR_0, wchar_t *VAR_1)
{
 BUF *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2 == ((void*)0))
 {
  VAR_0->Write(VAR_0, FUNC_6("CMD_LOADCERT_FAILED"));
  return ((void*)0);
 }
 else
 {
  K *VAR_3;
  if (FUNC_4(VAR_2, 1) == 0)
  {
   VAR_3 = FUNC_0(VAR_2, 1, FUNC_3(VAR_2), ((void*)0));
  }
  else
  {
   VAR_0->Write(VAR_0, FUNC_6("CMD_LOADKEY_ENCRYPTED_1"));

   while (1)
   {
    char *VAR_4 = VAR_0->ReadPassword(VAR_0, FUNC_6("CMD_LOADKEY_ENCRYPTED_2"));

    if (VAR_4 == ((void*)0))
    {
     FUNC_2(VAR_2);
     return ((void*)0);
    }

    VAR_3 = FUNC_0(VAR_2, 1, FUNC_3(VAR_2), VAR_4);
    FUNC_1(VAR_4);

    if (VAR_3 != ((void*)0))
    {
     break;
    }

    VAR_0->Write(VAR_0, FUNC_6("CMD_LOADKEY_ENCRYPTED_3"));
   }
  }

  FUNC_2(VAR_2);

  return VAR_3;
 }
}
