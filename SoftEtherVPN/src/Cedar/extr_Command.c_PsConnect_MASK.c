
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int wchar_t ;
typedef int o ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_17__ {int ProxyType; scalar_t__ Port; int Hostname; int AccountName; } ;
struct TYPE_16__ {int ProgrammingMode; char* (* ReadPassword ) (TYPE_2__*,char*) ;int (* Write ) (TYPE_2__*,char*) ;} ;
struct TYPE_15__ {scalar_t__ LastError; } ;
typedef int RPC ;
typedef TYPE_1__ PS ;
typedef TYPE_2__ CONSOLE ;
typedef TYPE_3__ CLIENT_OPTION ;
typedef int CEDAR ;


 int * FUNC_0 (int *,TYPE_3__*,char*,int *,scalar_t__*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (int *,int *) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,int *,char*,scalar_t__,char*,char*,int *) ;
 int VAR_3 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (int ,int,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int,char*) ;
 int FUNC_14 (TYPE_3__*,int) ;
 char* FUNC_15 (char*) ;
 int FUNC_16 (TYPE_2__*,char*) ;
 char* FUNC_17 (TYPE_2__*,char*) ;
 int FUNC_18 (TYPE_2__*,char*) ;

UINT FUNC_19(CONSOLE *VAR_5, char *VAR_6, UINT VAR_7, char *VAR_8, char *VAR_9, wchar_t *VAR_10, char *VAR_11)
{
 UINT VAR_12 = 0;
 RPC *VAR_13 = ((void*)0);
 CEDAR *VAR_14;
 CLIENT_OPTION VAR_15;
 UCHAR VAR_16[VAR_4];
 bool VAR_17 = 0;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return VAR_2;
 }
 if (VAR_7 == 0)
 {
  VAR_7 = 443;
 }
 if (VAR_8 != ((void*)0))
 {
  VAR_9 = ((void*)0);
 }

 VAR_14 = FUNC_6(((void*)0), ((void*)0));

 FUNC_14(&VAR_15, sizeof(VAR_15));
 FUNC_13(VAR_15.AccountName, sizeof(VAR_15.AccountName), L"VPNCMD");
 FUNC_11(VAR_15.Hostname, sizeof(VAR_15.Hostname), VAR_6);
 VAR_15.Port = VAR_7;
 VAR_15.ProxyType = VAR_3;

 FUNC_10(VAR_16, VAR_11, FUNC_12(VAR_11));

 if (FUNC_5(VAR_11) == 0)
 {
  VAR_17 = 1;
 }


 while (1)
 {
  UINT VAR_18;

  VAR_13 = FUNC_0(VAR_14, &VAR_15, VAR_8, VAR_16, &VAR_18, VAR_0);
  if (VAR_13 == ((void*)0))
  {

   VAR_12 = VAR_18;

   if (VAR_18 == VAR_1 && VAR_5->ProgrammingMode == 0)
   {
    char *VAR_19;

    if (VAR_17)
    {

     VAR_5->Write(VAR_5, FUNC_15("CMD_VPNCMD_PASSWORD_1"));
    }

    VAR_17 = 1;

    VAR_19 = VAR_5->ReadPassword(VAR_5, FUNC_15("CMD_VPNCMD_PASSWORD_2"));
    VAR_5->Write(VAR_5, L"");

    if (VAR_19 != ((void*)0))
    {
     FUNC_10(VAR_16, VAR_19, FUNC_12(VAR_19));
     FUNC_3(VAR_19);
    }
    else
    {
     break;
    }
   }
   else
   {

    FUNC_2(VAR_5, VAR_18);
    break;
   }
  }
  else
  {
   PS *VAR_20;


   VAR_20 = FUNC_7(VAR_5, VAR_13, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
   FUNC_8(VAR_20);
   VAR_12 = VAR_20->LastError;
   FUNC_4(VAR_20);
   FUNC_1(VAR_13);
   break;
  }
 }

 FUNC_9(VAR_14);

 return VAR_12;
}
