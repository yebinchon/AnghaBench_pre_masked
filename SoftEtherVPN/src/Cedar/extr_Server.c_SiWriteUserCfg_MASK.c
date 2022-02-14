
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int NumLogin; int AuthType; int lock; int * AuthData; int Traffic; int * Policy; int LastLoginTime; int ExpireTime; int UpdatedTime; int CreatedTime; int GroupName; int * Group; int * Note; int * RealName; } ;
typedef TYPE_2__ USER ;
struct TYPE_15__ {int * NtUsername; } ;
struct TYPE_14__ {int NtLmSecureHash; int HashedKey; } ;
struct TYPE_13__ {int * RadiusUsername; } ;
struct TYPE_12__ {int * CommonName; TYPE_1__* Serial; } ;
struct TYPE_11__ {int UserX; } ;
struct TYPE_9__ {int size; int data; } ;
typedef int FOLDER ;
typedef int BUF ;
typedef TYPE_3__ AUTHUSERCERT ;
typedef TYPE_4__ AUTHROOTCERT ;
typedef TYPE_5__ AUTHRADIUS ;
typedef TYPE_6__ AUTHPASSWORD ;
typedef TYPE_7__ AUTHNT ;
 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (int *,char*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int ,int) ;

void FUNC_15(FOLDER *VAR_0, USER *VAR_1)
{
 BUF *VAR_2;
 AUTHPASSWORD *VAR_3;
 AUTHRADIUS *VAR_4;
 AUTHNT *VAR_5;
 AUTHUSERCERT *VAR_6;
 AUTHROOTCERT *VAR_7;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_9(VAR_1->lock);
 {
  FUNC_5(VAR_0, "RealName", VAR_1->RealName);
  FUNC_5(VAR_0, "Note", VAR_1->Note);
  if (VAR_1->Group != ((void*)0))
  {
   FUNC_4(VAR_0, "GroupName", VAR_1->GroupName);
  }
  FUNC_3(VAR_0, "CreatedTime", VAR_1->CreatedTime);
  FUNC_3(VAR_0, "UpdatedTime", VAR_1->UpdatedTime);
  FUNC_3(VAR_0, "ExpireTime", VAR_1->ExpireTime);
  FUNC_3(VAR_0, "LastLoginTime", VAR_1->LastLoginTime);
  FUNC_2(VAR_0, "NumLogin", VAR_1->NumLogin);
  if (VAR_1->Policy != ((void*)0))
  {
   FUNC_10(FUNC_6(VAR_0, "Policy"), VAR_1->Policy, 0);
  }
  FUNC_11(VAR_0, "Traffic", VAR_1->Traffic);

  FUNC_2(VAR_0, "AuthType", VAR_1->AuthType);
  if (VAR_1->AuthData != ((void*)0))
  {
   switch (VAR_1->AuthType)
   {
   case 133:
    break;

   case 131:
    VAR_3 = (AUTHPASSWORD *)VAR_1->AuthData;
    FUNC_1(VAR_0, "AuthPassword", VAR_3->HashedKey, sizeof(VAR_3->HashedKey));

    if (FUNC_8(VAR_3->NtLmSecureHash, sizeof(VAR_3->NtLmSecureHash)) == 0)
    {
     FUNC_1(VAR_0, "AuthNtLmSecureHash", VAR_3->NtLmSecureHash, sizeof(VAR_3->NtLmSecureHash));
    }
    break;

   case 132:
    VAR_5 = (AUTHNT *)VAR_1->AuthData;
    FUNC_5(VAR_0, "AuthNtUserName", VAR_5->NtUsername);
    break;

   case 130:
    VAR_4 = (AUTHRADIUS *)VAR_1->AuthData;
    FUNC_5(VAR_0, "AuthRadiusUsername", VAR_4->RadiusUsername);
    break;

   case 128:
    VAR_6 = (AUTHUSERCERT *)VAR_1->AuthData;
    VAR_2 = FUNC_14(VAR_6->UserX, 0);
    if (VAR_2 != ((void*)0))
    {
     FUNC_0(VAR_0, "AuthUserCert", VAR_2);
     FUNC_7(VAR_2);
    }
    break;

   case 129:
    VAR_7 = (AUTHROOTCERT *)VAR_1->AuthData;
    if (VAR_7->Serial != ((void*)0) && VAR_7->Serial->size >= 1)
    {
     FUNC_1(VAR_0, "AuthSerial", VAR_7->Serial->data, VAR_7->Serial->size);
    }
    if (VAR_7->CommonName != ((void*)0) && FUNC_12(VAR_7->CommonName) == 0)
    {
     FUNC_5(VAR_0, "AuthCommonName", VAR_7->CommonName);
    }
    break;
   }
  }
 }
 FUNC_13(VAR_1->lock);
}
