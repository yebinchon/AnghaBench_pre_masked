
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
struct TYPE_12__ {int Size; int Buf; } ;
struct TYPE_11__ {void* Local; void* State; void* Country; void* Unit; void* Organization; void* CommonName; } ;
struct TYPE_10__ {TYPE_1__* Crl; int Key; int HubName; } ;
struct TYPE_9__ {int DigestSHA1; int DigestMD5; TYPE_3__* Name; int Serial; } ;
typedef TYPE_2__ RPC_CRL ;
typedef int PACK ;
typedef TYPE_3__ NAME ;
typedef int CRL ;
typedef TYPE_4__ BUF ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;
 TYPE_4__* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,int ,int) ;
 scalar_t__ FUNC_8 (int *,char*,int *,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (TYPE_2__*,int) ;
 void* FUNC_10 (int) ;

void FUNC_11(RPC_CRL *VAR_3, PACK *VAR_4)
{
 BUF *VAR_5;
 NAME *VAR_6;
 wchar_t VAR_7[VAR_0];

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 FUNC_9(VAR_3, sizeof(RPC_CRL));
 FUNC_7(VAR_4, "HubName", VAR_3->HubName, sizeof(VAR_3->HubName));
 VAR_3->Key = FUNC_6(VAR_4, "Key");
 VAR_5 = FUNC_3(VAR_4, "Serial");
 VAR_3->Crl = FUNC_10(sizeof(CRL));
 if (VAR_5 != ((void*)0))
 {
  VAR_3->Crl->Serial = FUNC_2(VAR_5->Buf, VAR_5->Size);
  FUNC_1(VAR_5);
 }
 VAR_3->Crl->Name = FUNC_10(sizeof(NAME));
 VAR_6 = VAR_3->Crl->Name;
 if (FUNC_8(VAR_4, "CommonName", VAR_7, sizeof(VAR_7)))
 {
  VAR_6->CommonName = FUNC_0(VAR_7);
 }
 if (FUNC_8(VAR_4, "Organization", VAR_7, sizeof(VAR_7)))
 {
  VAR_6->Organization = FUNC_0(VAR_7);
 }
 if (FUNC_8(VAR_4, "Unit", VAR_7, sizeof(VAR_7)))
 {
  VAR_6->Unit = FUNC_0(VAR_7);
 }
 if (FUNC_8(VAR_4, "Country", VAR_7, sizeof(VAR_7)))
 {
  VAR_6->Country = FUNC_0(VAR_7);
 }
 if (FUNC_8(VAR_4, "State", VAR_7, sizeof(VAR_7)))
 {
  VAR_6->State = FUNC_0(VAR_7);
 }
 if (FUNC_8(VAR_4, "Local", VAR_7, sizeof(VAR_7)))
 {
  VAR_6->Local = FUNC_0(VAR_7);
 }
 if (FUNC_5(VAR_4, "DigestMD5") == VAR_1)
 {
  FUNC_4(VAR_4, "DigestMD5", VAR_3->Crl->DigestMD5);
 }
 if (FUNC_5(VAR_4, "DigestSHA1") == VAR_2)
 {
  FUNC_4(VAR_4, "DigestSHA1", VAR_3->Crl->DigestSHA1);
 }
}
