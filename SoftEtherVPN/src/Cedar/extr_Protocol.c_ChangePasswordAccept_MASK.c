
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int username ;
typedef int tmp ;
typedef int secure_old_password ;
typedef int new_password_ntlm ;
typedef int new_password ;
typedef int hubname ;
struct TYPE_15__ {scalar_t__ AuthType; int lock; scalar_t__ AuthData; TYPE_4__* Group; TYPE_2__* Policy; } ;
typedef TYPE_5__ USER ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_17__ {int * NtLmSecureHash; int * HashedKey; } ;
struct TYPE_16__ {int Name; TYPE_1__* FirstSock; int * Cedar; int * Random; } ;
struct TYPE_14__ {TYPE_3__* Policy; } ;
struct TYPE_13__ {int FixPassword; } ;
struct TYPE_12__ {int FixPassword; } ;
struct TYPE_11__ {int RemoteIP; } ;
typedef int PACK ;
typedef int HUB ;
typedef TYPE_6__ CONNECTION ;
typedef int CEDAR ;
typedef TYPE_7__ AUTHPASSWORD ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,int ,char*) ;
 int FUNC_8 (char*,int,int *) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (int *,char*,int *,int) ;
 int FUNC_13 (int *,char*,char*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_5__*) ;
 int VAR_12 ;
 int FUNC_16 (int *,int *,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int) ;

UINT FUNC_20(CONNECTION *VAR_13, PACK *VAR_14)
{
 CEDAR *VAR_15;
 UCHAR VAR_16[VAR_12];
 char VAR_17[VAR_8 + 1];
 char VAR_18[VAR_10 + 1];
 UCHAR VAR_19[VAR_12];
 UCHAR VAR_20[VAR_12];
 UCHAR VAR_21[VAR_12];
 UCHAR VAR_22[VAR_12];
 UINT VAR_23 = VAR_4;
 HUB *VAR_24;

 if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_4(VAR_16, VAR_13->Random, VAR_12);
 if (FUNC_13(VAR_14, "hubname", VAR_17, sizeof(VAR_17)) == 0 ||
  FUNC_13(VAR_14, "username", VAR_18, sizeof(VAR_18)) == 0 ||
  FUNC_12(VAR_14, "secure_old_password", VAR_19, sizeof(VAR_19)) == 0 ||
  FUNC_12(VAR_14, "new_password", VAR_20, sizeof(VAR_20)) == 0)
 {
  return VAR_6;
 }

 if (FUNC_12(VAR_14, "new_password_ntlm", VAR_21, VAR_11) == 0)
 {
  FUNC_19(VAR_21, sizeof(VAR_21));
 }

 VAR_15 = VAR_13->Cedar;

 FUNC_11(VAR_15);
 {
  VAR_24 = FUNC_5(VAR_15, VAR_17);
 }
 FUNC_18(VAR_15);

 if (VAR_24 == ((void*)0))
 {
  VAR_23 = VAR_1;
 }
 else
 {
  char VAR_25[VAR_9];

  if (FUNC_6(VAR_24, "deny_change_user_password") != 0)
  {
   FUNC_14(VAR_24);
   return VAR_3;
  }

  FUNC_8(VAR_25, sizeof(VAR_25), &VAR_13->FirstSock->RemoteIP);
  FUNC_7(VAR_24, "LH_CHANGE_PASSWORD_1", VAR_13->Name, VAR_25);

  FUNC_1(VAR_24);
  {
   USER *VAR_26 = FUNC_0(VAR_24, VAR_18);
   if (VAR_26 == ((void*)0))
   {
    FUNC_7(VAR_24, "LH_CHANGE_PASSWORD_2", VAR_13->Name, VAR_18);
    VAR_23 = VAR_5;
   }
   else
   {
    FUNC_10(VAR_26->lock);
    {
     if (VAR_26->AuthType != VAR_0)
     {

      FUNC_7(VAR_24, "LH_CHANGE_PASSWORD_3", VAR_13->Name, VAR_18);
      VAR_23 = VAR_7;
     }
     else
     {
      bool VAR_27 = 0;
      if (VAR_26->Policy != ((void*)0))
      {
       VAR_27 = VAR_26->Policy->FixPassword;
      }
      else
      {
       if (VAR_26->Group != ((void*)0))
       {
        if (VAR_26->Group->Policy != ((void*)0))
        {
         VAR_27 = VAR_26->Group->Policy->FixPassword;
        }
       }
      }
      if (VAR_27 == 0)
      {

       AUTHPASSWORD *VAR_28 = (AUTHPASSWORD *)VAR_26->AuthData;

       FUNC_16(VAR_22, VAR_28->HashedKey, VAR_16);
       if (FUNC_3(VAR_22, VAR_19, VAR_12) != 0)
       {

        VAR_23 = VAR_5;
        FUNC_7(VAR_24, "LH_CHANGE_PASSWORD_4", VAR_13->Name, VAR_18);
       }
       else
       {

        if (FUNC_3(VAR_28->HashedKey, VAR_20, VAR_12) != 0 || FUNC_9(VAR_28->NtLmSecureHash, VAR_11))
        {
         FUNC_4(VAR_28->HashedKey, VAR_20, VAR_12);
         FUNC_4(VAR_28->NtLmSecureHash, VAR_21, VAR_11);
        }
        FUNC_7(VAR_24, "LH_CHANGE_PASSWORD_5", VAR_13->Name, VAR_18);
       }
      }
      else
      {

       VAR_23 = VAR_3;
      }
     }
    }
    FUNC_17(VAR_26->lock);

    FUNC_15(VAR_26);
   }
  }
  FUNC_2(VAR_24);
  FUNC_14(VAR_24);
 }

 return VAR_23;
}
