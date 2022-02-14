
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int pass ;
typedef int UINT ;
struct TYPE_14__ {char* (* ReadPassword ) (TYPE_2__*,char*) ;int (* Write ) (TYPE_2__*,char*) ;} ;
struct TYPE_13__ {int LastError; } ;
typedef int REMOTE_CLIENT ;
typedef TYPE_1__ PC ;
typedef TYPE_2__ CONSOLE ;
typedef int CEDAR ;


 int * FUNC_0 (char*,char*,int*,int*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_3 ;
 int * FUNC_5 (int *,int *) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int *,char*,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int,char*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 (TYPE_2__*,char*) ;
 char* FUNC_13 (TYPE_2__*,char*) ;
 int FUNC_14 (TYPE_2__*,char*) ;

UINT FUNC_15(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, char *VAR_7)
{
 CEDAR *VAR_8;
 REMOTE_CLIENT *VAR_9;
 bool VAR_10;
 bool VAR_11;
 char VAR_12[VAR_3];
 UINT VAR_13 = 0;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_9(VAR_12, sizeof(VAR_12), VAR_7);

 VAR_8 = FUNC_5(((void*)0), ((void*)0));

RETRY:
 VAR_9 = FUNC_0(VAR_5, VAR_12, &VAR_10, &VAR_11, 0);

 if (VAR_9 == ((void*)0))
 {
  if (VAR_11)
  {

   VAR_4->Write(VAR_4, FUNC_10("CMD_VPNCMD_CLIENT_NO_REMODE"));
   FUNC_8(VAR_8);
   return VAR_2;
  }
  else if (VAR_10)
  {
   char *VAR_14;

   VAR_4->Write(VAR_4, FUNC_10("CMD_VPNCMD_PASSWORD_1"));
   VAR_14 = VAR_4->ReadPassword(VAR_4, FUNC_10("CMD_VPNCMD_PASSWORD_2"));
   VAR_4->Write(VAR_4, L"");

   if (VAR_14 == ((void*)0))
   {

    FUNC_8(VAR_8);
    return VAR_0;
   }
   else
   {
    FUNC_9(VAR_12, sizeof(VAR_12), VAR_14);
    FUNC_3(VAR_14);
   }

   goto RETRY;
  }
  else
  {

   FUNC_2(VAR_4, VAR_1);
   FUNC_8(VAR_8);
   return VAR_1;
  }
 }
 else
 {

  PC *VAR_15 = FUNC_6(VAR_4, VAR_9, VAR_5, VAR_6);
  FUNC_7(VAR_15);
  VAR_13 = VAR_15->LastError;
  FUNC_4(VAR_15);
 }

 FUNC_1(VAR_9);

 FUNC_8(VAR_8);

 return VAR_13;
}
