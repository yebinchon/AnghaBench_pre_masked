
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_24__ {int Size; int Buf; } ;
struct TYPE_23__ {int (* Write ) (TYPE_6__*,int ) ;} ;
struct TYPE_22__ {int DigestSHA1; int DigestMD5; int Serial; TYPE_4__* Name; } ;
struct TYPE_21__ {void* CommonName; } ;
struct TYPE_20__ {char* member_0; int * member_4; int * member_3; int * member_2; int * member_1; } ;
struct TYPE_19__ {int Rpc; int * HubName; } ;
struct TYPE_18__ {TYPE_5__* Crl; int HubName; } ;
typedef TYPE_1__ RPC_CRL ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef TYPE_4__ NAME ;
typedef int LIST ;
typedef TYPE_5__ CRL ;
typedef TYPE_6__ CONSOLE ;
typedef TYPE_7__ BUF ;


 int FUNC_0 (TYPE_6__*,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 void* FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (int ,int) ;
 int * FUNC_10 (TYPE_6__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int ,int,int *) ;
 TYPE_7__* FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*,int) ;
 void* FUNC_15 (int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (TYPE_6__*,int ) ;

UINT FUNC_18(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 RPC_CRL VAR_11;

 PARAM VAR_12[] =
 {
  {"SERIAL", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"MD5", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"SHA1", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"CN", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"O", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"OU", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"C", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"ST", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"L", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
 };


 if (VAR_9->HubName == ((void*)0))
 {
  VAR_4->Write(VAR_4, FUNC_16("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_8 = FUNC_10(VAR_4, VAR_5, VAR_6, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_14(&VAR_11, sizeof(VAR_11));
 FUNC_12(VAR_11.HubName, sizeof(VAR_11.HubName), VAR_9->HubName);

 {
  bool VAR_13 = 0;
  CRL *VAR_14 = FUNC_15(sizeof(CRL));
  NAME *VAR_15;
  VAR_15 = VAR_14->Name = FUNC_15(sizeof(NAME));

  if (FUNC_8(FUNC_6(VAR_8, "CN")) == 0)
  {
   VAR_15->CommonName = FUNC_2(FUNC_7(VAR_8, "CN"));
   VAR_13 = 1;
  }

  if (FUNC_8(FUNC_6(VAR_8, "O")) == 0)
  {
   VAR_15->CommonName = FUNC_2(FUNC_7(VAR_8, "O"));
   VAR_13 = 1;
  }

  if (FUNC_8(FUNC_6(VAR_8, "OU")) == 0)
  {
   VAR_15->CommonName = FUNC_2(FUNC_7(VAR_8, "OU"));
   VAR_13 = 1;
  }

  if (FUNC_8(FUNC_6(VAR_8, "C")) == 0)
  {
   VAR_15->CommonName = FUNC_2(FUNC_7(VAR_8, "C"));
   VAR_13 = 1;
  }

  if (FUNC_8(FUNC_6(VAR_8, "ST")) == 0)
  {
   VAR_15->CommonName = FUNC_2(FUNC_7(VAR_8, "ST"));
   VAR_13 = 1;
  }

  if (FUNC_8(FUNC_6(VAR_8, "L")) == 0)
  {
   VAR_15->CommonName = FUNC_2(FUNC_7(VAR_8, "L"));
   VAR_13 = 1;
  }

  if (FUNC_8(FUNC_6(VAR_8, "SERIAL")) == 0)
  {
   BUF *VAR_16;

   VAR_16 = FUNC_13(FUNC_6(VAR_8, "SERIAL"));

   if (VAR_16 != ((void*)0) && VAR_16->Size >= 1)
   {
    VAR_14->Serial = FUNC_9(VAR_16->Buf, VAR_16->Size);
    VAR_13 = 1;
   }

   FUNC_3(VAR_16);
  }

  if (FUNC_8(FUNC_6(VAR_8, "MD5")) == 0)
  {
   BUF *VAR_17;

   VAR_17 = FUNC_13(FUNC_6(VAR_8, "MD5"));

   if (VAR_17 != ((void*)0) && VAR_17->Size == VAR_2)
   {
    FUNC_1(VAR_14->DigestMD5, VAR_17->Buf, VAR_2);
    VAR_13 = 1;
   }

   FUNC_3(VAR_17);
  }

  if (FUNC_8(FUNC_6(VAR_8, "SHA1")) == 0)
  {
   BUF *VAR_18;

   VAR_18 = FUNC_13(FUNC_6(VAR_8, "SHA1"));

   if (VAR_18 != ((void*)0) && VAR_18->Size == VAR_3)
   {
    FUNC_1(VAR_14->DigestSHA1, VAR_18->Buf, VAR_3);
    VAR_13 = 1;
   }

   FUNC_3(VAR_18);
  }

  VAR_11.Crl = VAR_14;

  if (VAR_13 == 0)
  {
   FUNC_5(&VAR_11);
   VAR_10 = VAR_0;
   FUNC_0(VAR_4, VAR_10);
   FUNC_4(VAR_8);
   return VAR_10;
  }
 }


 VAR_10 = FUNC_11(VAR_9->Rpc, &VAR_11);

 if (VAR_10 != VAR_1)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_4(VAR_8);
  return VAR_10;
 }

 FUNC_5(&VAR_11);

 FUNC_4(VAR_8);

 return 0;
}
