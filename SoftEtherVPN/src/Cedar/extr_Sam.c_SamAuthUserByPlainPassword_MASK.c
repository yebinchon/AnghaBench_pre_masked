
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef char wchar_t ;
typedef int suffix_filter_w ;
typedef int suffix_filter ;
typedef int radius_server_addr ;
typedef int radius_secret ;
typedef int nt_username ;
typedef int nt_name ;
typedef int nt_groupname ;
typedef int nt_domainname ;
typedef int name_and_realm ;
struct TYPE_21__ {scalar_t__ AuthType; char* GroupName; int lock; TYPE_1__* Policy; scalar_t__ AuthData; } ;
typedef TYPE_2__ USER ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_26__ {int * NtUsername; } ;
struct TYPE_25__ {int * RadiusUsername; } ;
struct TYPE_24__ {char* RadiusRealm; int lock; int Name; int ref; } ;
struct TYPE_23__ {int MsChapV2_ClientResponse; int MsChapV2_PPPUsername; int MsChapV2_ServerChallenge; int MsChapV2_ClientChallenge; } ;
struct TYPE_22__ {int Out_IsRadiusLogin; } ;
struct TYPE_20__ {int TimeOut; } ;
typedef TYPE_3__ RADIUS_LOGIN_OPTION ;
typedef TYPE_4__ IPC_MSCHAP_V2_AUTHINFO ;
typedef TYPE_5__ HUB ;
typedef int CONNECTION ;
typedef TYPE_6__ AUTHRADIUS ;
typedef TYPE_7__ AUTHNT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_5__*,char*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,char*) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_5__*,char*,int,int*,char*,int,int*,char*,int) ;
 int FUNC_10 (TYPE_5__*,char*,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 int VAR_3 ;
 int FUNC_13 (int *,int *,int ,int *) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,int *,int ,int *) ;
 int FUNC_17 (TYPE_4__*,char*) ;
 int FUNC_18 (char*,char*,int,char*,int,int) ;
 int FUNC_19 (int *,char*,int,char*,int ,char*,char*,int,int *,TYPE_3__*,int ) ;
 int FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (char*,char*,char*,char*,int) ;
 int FUNC_23 (char*,char*,char*,int *,int ,int *,int) ;
 int FUNC_24 (char*,int,char*) ;
 int FUNC_25 (char*,int,char*) ;
 int FUNC_26 (char*) ;
 int FUNC_27 (char*,int,char*) ;
 scalar_t__ FUNC_28 (char*,char*) ;
 scalar_t__ FUNC_29 (char*) ;
 scalar_t__ FUNC_30 (int *) ;
 int FUNC_31 (char*,int,char*) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (char*,int) ;

bool FUNC_34(CONNECTION *VAR_4, HUB *VAR_5, char *VAR_6, char *VAR_7, bool VAR_8, UCHAR *VAR_9, RADIUS_LOGIN_OPTION *VAR_10)
{
 bool VAR_11 = 0;
 wchar_t *VAR_12 = ((void*)0);
 wchar_t *VAR_13 = ((void*)0);
 UINT VAR_14 = 90;
 bool VAR_15 = 0;
 HUB *VAR_16;

 if (VAR_5 == ((void*)0) || VAR_4 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_8(VAR_2) != 0)
 {
  return 0;
 }

 VAR_16 = VAR_5;

 FUNC_3(VAR_16->ref);


 FUNC_1(VAR_5);
 {
  USER *VAR_17;
  VAR_17 = FUNC_0(VAR_5, VAR_8 == 0 ? VAR_6 : "*");
  if (VAR_17)
  {
   FUNC_12(VAR_17->lock);
   {
    if (VAR_17->AuthType == VAR_1)
    {

     AUTHRADIUS *VAR_18 = (AUTHRADIUS *)VAR_17->AuthData;
     if (VAR_8 || VAR_18->RadiusUsername == ((void*)0) || FUNC_30(VAR_18->RadiusUsername) == 0)
     {
      if( FUNC_11(VAR_16->RadiusRealm) == 0 )
      {
       char VAR_19[VAR_3];
       FUNC_25(VAR_19, sizeof(VAR_19), VAR_6);
       FUNC_24(VAR_19, sizeof(VAR_19), "@");
       FUNC_24(VAR_19, sizeof(VAR_19), VAR_16->RadiusRealm);
       VAR_12 = FUNC_4(VAR_19);
      }
      else
      {
       VAR_12 = FUNC_4(VAR_6);
      }
     }
     else
     {
      VAR_12 = FUNC_5(VAR_18->RadiusUsername);
     }
     VAR_15 = 0;
    }
    else if (VAR_17->AuthType == VAR_0)
    {

     AUTHNT *VAR_20 = (AUTHNT *)VAR_17->AuthData;
     if (VAR_8 || VAR_20->NtUsername == ((void*)0) || FUNC_30(VAR_20->NtUsername) == 0)
     {
      VAR_12 = FUNC_4(VAR_6);
     }
     else
     {
      VAR_12 = FUNC_5(VAR_20->NtUsername);
     }

     VAR_13 = FUNC_4(VAR_17->GroupName);

     if (VAR_17->Policy)
     {
      VAR_14 = VAR_17->Policy->TimeOut;
     }

     VAR_15 = 1;
    }
   }
   FUNC_32(VAR_17->lock);
   FUNC_21(VAR_17);
  }
 }
 FUNC_2(VAR_5);

 if (VAR_12 != ((void*)0))
 {
  if (VAR_15 == 0)
  {

   char VAR_21[VAR_3];
   UINT VAR_22;
   char VAR_23[VAR_3];
   char VAR_24[VAR_3];
   wchar_t VAR_25[VAR_3];
   UINT VAR_26;

   FUNC_33(VAR_24, sizeof(VAR_24));
   FUNC_33(VAR_25, sizeof(VAR_25));


   if (FUNC_9(VAR_5, VAR_21, sizeof(VAR_21), &VAR_22, VAR_23, sizeof(VAR_23), &VAR_26, VAR_24, sizeof(VAR_24)))
   {
    FUNC_32(VAR_5->lock);

    FUNC_27(VAR_25, sizeof(VAR_25), VAR_24);

    if (FUNC_29(VAR_25) || FUNC_28(VAR_12, VAR_25))
    {

     VAR_11 = FUNC_19(VAR_4, VAR_21, VAR_22,
      VAR_23, FUNC_26(VAR_23),
      VAR_12, VAR_7, VAR_26, VAR_9, VAR_10, VAR_5->Name);

     if (VAR_11)
     {
      if (VAR_10 != ((void*)0))
      {
       VAR_10->Out_IsRadiusLogin = 1;
      }
     }
    }

    FUNC_12(VAR_5->lock);
   }
   else
   {
    FUNC_10(VAR_5, "LH_NO_RADIUS_SETTING", VAR_12);
   }
  }
  else
  {
   IPC_MSCHAP_V2_AUTHINFO VAR_27;
   FUNC_32(VAR_5->lock);

   char VAR_28[VAR_3];
   char VAR_29[VAR_3];
   char VAR_30[VAR_3];
   char VAR_31[VAR_3];
   UCHAR VAR_32[8];
   UCHAR VAR_33[16];

   VAR_30[0] = 0;

   FUNC_31(VAR_28, sizeof(VAR_28), VAR_12);

   if (VAR_13 != ((void*)0))
    FUNC_31(VAR_30, sizeof(VAR_30), VAR_13);

   FUNC_18(VAR_28, VAR_29, sizeof(VAR_29), VAR_31, sizeof(VAR_31), 0);

   if (FUNC_17(&VAR_27, VAR_7) == 0)
   {

    VAR_11 = FUNC_22(VAR_29, VAR_7, VAR_31, VAR_30, VAR_14);
   }
   else
   {

    FUNC_14(VAR_32, VAR_27.MsChapV2_ClientChallenge,
     VAR_27.MsChapV2_ServerChallenge,
     VAR_27.MsChapV2_PPPUsername);

    FUNC_6("MsChapV2_PPPUsername = %s, nt_name = %s\n", VAR_27.MsChapV2_PPPUsername, VAR_28);

    VAR_11 = FUNC_23(VAR_29, VAR_31, VAR_30, VAR_32, VAR_27.MsChapV2_ClientResponse, VAR_33, VAR_14);

    if (VAR_11)
    {
     if (VAR_9 != ((void*)0))
     {
      FUNC_13(VAR_9, VAR_33,
       VAR_27.MsChapV2_ClientResponse, VAR_32);
     }
    }
   }

   FUNC_12(VAR_5->lock);

  }


  if( VAR_13 != ((void*)0) )
   FUNC_7(VAR_13);
  FUNC_7(VAR_12);
 }

 FUNC_20(VAR_16);

 return VAR_11;
}
