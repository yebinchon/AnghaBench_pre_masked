
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp2 ;
typedef int tmp ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_28__ {char* RadiusUsername; } ;
struct TYPE_27__ {char* CommonName; TYPE_1__* Serial; } ;
struct TYPE_26__ {int * UserX; } ;
struct TYPE_25__ {int (* Write ) (TYPE_5__*,char*) ;} ;
struct TYPE_24__ {char* member_0; char* member_2; int * member_4; int member_3; int member_1; } ;
struct TYPE_23__ {int Rpc; int * HubName; } ;
struct TYPE_22__ {char* HubName; char* Name; char* Realname; char* Note; char* GroupName; int AuthType; int * Policy; int NumLogin; int Traffic; int UpdatedTime; int CreatedTime; int * AuthData; int ExpireTime; } ;
struct TYPE_21__ {int size; int data; } ;
typedef TYPE_2__ RPC_SET_USER ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_5__ CONSOLE ;
typedef TYPE_6__ AUTHUSERCERT ;
typedef TYPE_7__ AUTHROOTCERT ;
typedef TYPE_8__ AUTHRADIUS ;






 int FUNC_0 (char*,int,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_5__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (int *,TYPE_5__*) ;
 int FUNC_4 (int *,char*,char*) ;
 int * FUNC_5 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*,int,int *) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*,int,int ,int *) ;
 int * FUNC_11 (int *,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int VAR_4 ;
 int * FUNC_14 (TYPE_5__*,char*,char*,TYPE_4__*,int) ;
 int FUNC_15 (TYPE_5__*,int *,int) ;
 scalar_t__ FUNC_16 (int ,TYPE_2__*) ;
 int FUNC_17 (char*,int,int *) ;
 int FUNC_18 (char*,int,char*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 (TYPE_2__*,int) ;
 char* FUNC_22 (char*) ;
 int FUNC_23 (TYPE_5__*,char*) ;
 int FUNC_24 (TYPE_5__*,char*) ;
 int FUNC_25 (TYPE_5__*,char*) ;

UINT FUNC_26(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_SET_USER VAR_12;

 PARAM VAR_13[] =
 {

  {"[name]", VAR_1, FUNC_22("CMD_UserCreate_Prompt_NAME"), VAR_0, ((void*)0)},
 };


 if (VAR_10->HubName == ((void*)0))
 {
  VAR_5->Write(VAR_5, FUNC_22("CMD_Hub_Not_Selected"));
  return VAR_2;
 }

 VAR_9 = FUNC_14(VAR_5, VAR_6, VAR_7, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_21(&VAR_12, sizeof(VAR_12));

 FUNC_17(VAR_12.HubName, sizeof(VAR_12.HubName), VAR_10->HubName);
 FUNC_17(VAR_12.Name, sizeof(VAR_12.Name), FUNC_11(VAR_9, "[name]"));

 VAR_11 = FUNC_16(VAR_10->Rpc, &VAR_12);
 if (VAR_11 != VAR_3)
 {

  FUNC_2(VAR_5, VAR_11);
  FUNC_6(VAR_9);
  return VAR_11;
 }
 else
 {
  wchar_t VAR_14[VAR_4];
  CT *VAR_15;


  VAR_15 = FUNC_5();


  FUNC_18(VAR_14, sizeof(VAR_14), VAR_12.Name);
  FUNC_4(VAR_15, FUNC_22("CMD_UserGet_Column_Name"), VAR_14);


  FUNC_4(VAR_15, FUNC_22("CMD_UserGet_Column_RealName"), VAR_12.Realname);


  FUNC_4(VAR_15, FUNC_22("CMD_UserGet_Column_Note"), VAR_12.Note);


  if (FUNC_12(VAR_12.GroupName) == 0)
  {
   FUNC_18(VAR_14, sizeof(VAR_14), VAR_12.GroupName);
   FUNC_4(VAR_15, FUNC_22("CMD_UserGet_Column_Group"), VAR_14);
  }


  FUNC_10(VAR_14, sizeof(VAR_14), FUNC_19(VAR_12.ExpireTime), ((void*)0));
  FUNC_4(VAR_15, FUNC_22("CMD_UserGet_Column_Expires"), VAR_14);


  FUNC_4(VAR_15, FUNC_22("CMD_UserGet_Column_AuthType"), FUNC_9(VAR_12.AuthType));

  switch (VAR_12.AuthType)
  {
  case 128:
   if (VAR_12.AuthData != ((void*)0))
   {
    AUTHUSERCERT *VAR_16 = (AUTHUSERCERT *)VAR_12.AuthData;

    if (VAR_16 != ((void*)0) && VAR_16->UserX != ((void*)0))
    {

     FUNC_8(VAR_14, sizeof(VAR_14), VAR_16->UserX);
     FUNC_4(VAR_15, FUNC_22("CMD_UserGet_Column_UserCert"), VAR_14);
    }
   }
   break;

  case 129:
   if (VAR_12.AuthData != ((void*)0))
   {
    AUTHROOTCERT *VAR_17 = (AUTHROOTCERT *)VAR_12.AuthData;

    if (FUNC_13(VAR_17->CommonName) == 0)
    {

     FUNC_4(VAR_15, FUNC_22("CMD_UserGet_Column_RootCert_CN"), VAR_17->CommonName);
    }

    if (VAR_17->Serial != ((void*)0) && VAR_17->Serial->size >= 1)
    {
     char VAR_18[VAR_4];


     FUNC_0(VAR_18, sizeof(VAR_18), VAR_17->Serial->data, VAR_17->Serial->size);
     FUNC_18(VAR_14, sizeof(VAR_14), VAR_18);
     FUNC_4(VAR_15, FUNC_22("CMD_UserGet_Column_RootCert_SERIAL"), VAR_14);
    }
   }
   break;

  case 130:
  case 131:
   if (VAR_12.AuthData != ((void*)0))
   {
    AUTHRADIUS *VAR_19 = (AUTHRADIUS *)VAR_12.AuthData;


    if (FUNC_13(VAR_19->RadiusUsername) == 0)
    {
     FUNC_4(VAR_15, FUNC_22("CMD_UserGet_Column_RadiusAlias"), VAR_19->RadiusUsername);
    }
   }
   break;
  }

  FUNC_4(VAR_15, L"---", L"---");

  FUNC_10(VAR_14, sizeof(VAR_14), FUNC_19(VAR_12.CreatedTime), ((void*)0));
  FUNC_4(VAR_15, FUNC_22("SM_USERINFO_CREATE"), VAR_14);

  FUNC_10(VAR_14, sizeof(VAR_14), FUNC_19(VAR_12.UpdatedTime), ((void*)0));
  FUNC_4(VAR_15, FUNC_22("SM_USERINFO_UPDATE"), VAR_14);

  FUNC_1(VAR_15, &VAR_12.Traffic);

  FUNC_20(VAR_14, VAR_12.NumLogin);
  FUNC_4(VAR_15, FUNC_22("SM_USERINFO_NUMLOGIN"), VAR_14);


  FUNC_3(VAR_15, VAR_5);

  if (VAR_12.Policy != ((void*)0))
  {
   VAR_5->Write(VAR_5, L"");
   VAR_5->Write(VAR_5, FUNC_22("CMD_UserGet_Policy"));
   FUNC_15(VAR_5, VAR_12.Policy, 0);
  }
 }

 FUNC_7(&VAR_12);

 FUNC_6(VAR_9);

 return 0;
}
