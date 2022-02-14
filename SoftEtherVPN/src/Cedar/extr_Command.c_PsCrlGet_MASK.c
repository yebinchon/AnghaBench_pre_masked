
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef int str ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_23__ {int (* Write ) (TYPE_7__*,int ) ;} ;
struct TYPE_22__ {int DigestSHA1; int DigestMD5; TYPE_1__* Serial; TYPE_5__* Name; } ;
struct TYPE_21__ {int * Local; int * State; int * Country; int * Unit; int * Organization; int * CommonName; } ;
struct TYPE_20__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_19__ {int Rpc; int * HubName; } ;
struct TYPE_18__ {TYPE_6__* Crl; int Key; int HubName; } ;
struct TYPE_17__ {int size; int data; } ;
typedef TYPE_2__ RPC_CRL ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef TYPE_5__ NAME ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_6__ CRL ;
typedef TYPE_7__ CONSOLE ;


 int FUNC_0 (char*,int,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_7__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int *,TYPE_7__*) ;
 int FUNC_3 (int *,int ,int *) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_9 (TYPE_7__*,char*,int *,TYPE_4__*,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (int ,int,int *) ;
 int FUNC_12 (int *,int,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (TYPE_7__*,int ) ;

UINT FUNC_17(CONSOLE *VAR_7, char *VAR_8, wchar_t *VAR_9, void *VAR_10)
{
 LIST *VAR_11;
 PS *VAR_12 = (PS *)VAR_10;
 UINT VAR_13 = 0;
 RPC_CRL VAR_14;

 PARAM VAR_15[] =
 {

  {"[id]", &VAR_1, FUNC_15("CMD_CrlGet_Prompt_ID"), VAR_0, ((void*)0)},
 };


 if (VAR_12->HubName == ((void*)0))
 {
  VAR_7->Write(VAR_7, FUNC_15("CMD_Hub_Not_Selected"));
  return VAR_2;
 }

 VAR_11 = FUNC_9(VAR_7, VAR_8, VAR_9, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_11 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_14(&VAR_14, sizeof(VAR_14));
 FUNC_11(VAR_14.HubName, sizeof(VAR_14.HubName), VAR_12->HubName);
 VAR_14.Key = FUNC_7(VAR_11, "[id]");


 VAR_13 = FUNC_10(VAR_12->Rpc, &VAR_14);

 if (VAR_13 != VAR_3)
 {

  FUNC_1(VAR_7, VAR_13);
  FUNC_5(VAR_11);
  return VAR_13;
 }
 else
 {

  CT *VAR_16 = FUNC_4();
  CRL *VAR_17 = VAR_14.Crl;
  NAME *VAR_18;

  if (VAR_17 != ((void*)0))
  {
   VAR_18 = VAR_17->Name;

   if (VAR_18 != ((void*)0))
   {
    if (FUNC_13(VAR_18->CommonName) == 0)
    {
     FUNC_3(VAR_16, FUNC_15("CMD_CrlGet_CN"), VAR_18->CommonName);
    }
    if (FUNC_13(VAR_18->Organization) == 0)
    {
     FUNC_3(VAR_16, FUNC_15("CMD_CrlGet_O"), VAR_18->Organization);
    }
    if (FUNC_13(VAR_18->Unit) == 0)
    {
     FUNC_3(VAR_16, FUNC_15("CMD_CrlGet_OU"), VAR_18->Unit);
    }
    if (FUNC_13(VAR_18->Country) == 0)
    {
     FUNC_3(VAR_16, FUNC_15("CMD_CrlGet_C"), VAR_18->Country);
    }
    if (FUNC_13(VAR_18->State) == 0)
    {
     FUNC_3(VAR_16, FUNC_15("CMD_CrlGet_ST"), VAR_18->State);
    }
    if (FUNC_13(VAR_18->Local) == 0)
    {
     FUNC_3(VAR_16, FUNC_15("CMD_CrlGet_L"), VAR_18->Local);
    }
   }

   if (VAR_17->Serial != ((void*)0) && VAR_17->Serial->size >= 1)
   {
    wchar_t VAR_19[VAR_4];
    char VAR_20[VAR_4];

    FUNC_0(VAR_20, sizeof(VAR_20), VAR_17->Serial->data, VAR_17->Serial->size);
    FUNC_12(VAR_19, sizeof(VAR_19), VAR_20);

    FUNC_3(VAR_16, FUNC_15("CMD_CrlGet_SERI"), VAR_19);
   }

   if (FUNC_8(VAR_17->DigestMD5, VAR_5) == 0)
   {
    wchar_t VAR_21[VAR_4];
    char VAR_22[VAR_4];

    FUNC_0(VAR_22, sizeof(VAR_22), VAR_17->DigestMD5, VAR_5);
    FUNC_12(VAR_21, sizeof(VAR_21), VAR_22);

    FUNC_3(VAR_16, FUNC_15("CMD_CrlGet_MD5_HASH"), VAR_21);
   }

   if (FUNC_8(VAR_17->DigestSHA1, VAR_6) == 0)
   {
    wchar_t VAR_23[VAR_4];
    char VAR_24[VAR_4];

    FUNC_0(VAR_24, sizeof(VAR_24), VAR_17->DigestSHA1, VAR_6);
    FUNC_12(VAR_23, sizeof(VAR_23), VAR_24);

    FUNC_3(VAR_16, FUNC_15("CMD_CrlGet_SHA1_HASH"), VAR_23);
   }
  }
  FUNC_2(VAR_16, VAR_7);
 }

 FUNC_6(&VAR_14);

 FUNC_5(VAR_11);

 return 0;
}
