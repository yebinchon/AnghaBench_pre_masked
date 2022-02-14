
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int * Local; int * State; int * Country; int * Unit; int * Organization; int * CommonName; } ;
struct TYPE_8__ {TYPE_2__* Crl; int Key; int HubName; } ;
struct TYPE_7__ {int DigestSHA1; int DigestMD5; TYPE_4__* Name; TYPE_1__* Serial; } ;
struct TYPE_6__ {int size; int data; } ;
typedef TYPE_3__ RPC_CRL ;
typedef int PACK ;
typedef TYPE_4__ NAME ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int *) ;
 int VAR_1 ;

void FUNC_5(PACK *VAR_2, RPC_CRL *VAR_3)
{
 NAME *VAR_4;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_2, "HubName", VAR_3->HubName);
 FUNC_2(VAR_2, "Key", VAR_3->Key);

 if (VAR_3->Crl == ((void*)0))
 {
  return;
 }

 if (VAR_3->Crl->Serial != ((void*)0))
 {
  FUNC_1(VAR_2, "Serial", VAR_3->Crl->Serial->data, VAR_3->Crl->Serial->size);
 }
 VAR_4 = VAR_3->Crl->Name;
 if (VAR_4->CommonName != ((void*)0))
 {
  FUNC_4(VAR_2, "CommonName", VAR_4->CommonName);
 }
 if (VAR_4->Organization != ((void*)0))
 {
  FUNC_4(VAR_2, "Organization", VAR_4->Organization);
 }
 if (VAR_4->Unit != ((void*)0))
 {
  FUNC_4(VAR_2, "Unit", VAR_4->Unit);
 }
 if (VAR_4->Country != ((void*)0))
 {
  FUNC_4(VAR_2, "Country", VAR_4->Country);
 }
 if (VAR_4->State != ((void*)0))
 {
  FUNC_4(VAR_2, "State", VAR_4->State);
 }
 if (VAR_4->Local != ((void*)0))
 {
  FUNC_4(VAR_2, "Local", VAR_4->Local);
 }
 if (FUNC_0(VAR_3->Crl->DigestMD5, VAR_0) == 0)
 {
  FUNC_1(VAR_2, "DigestMD5", VAR_3->Crl->DigestMD5, VAR_0);
 }
 if (FUNC_0(VAR_3->Crl->DigestSHA1, VAR_1) == 0)
 {
  FUNC_1(VAR_2, "DigestSHA1", VAR_3->Crl->DigestSHA1, VAR_1);
 }
}
