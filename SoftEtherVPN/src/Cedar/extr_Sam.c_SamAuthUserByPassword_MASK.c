
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int mschap ;
typedef int client_response ;
typedef int challenge8 ;
struct TYPE_25__ {scalar_t__ AuthType; int lock; scalar_t__ AuthData; } ;
typedef TYPE_1__ USER ;
typedef scalar_t__ UINT ;
struct TYPE_26__ {void* MsChapV2_ClientResponse; int MsChapV2_PPPUsername; int MsChapV2_ServerChallenge; int MsChapV2_ClientChallenge; } ;
typedef TYPE_2__ UCHAR ;
struct TYPE_28__ {int NtLmSecureHash; int HashedKey; } ;
struct TYPE_27__ {int SecurePassword; } ;
typedef TYPE_2__ IPC_MSCHAP_V2_AUTHINFO ;
typedef TYPE_4__ HUB ;
typedef TYPE_5__ AUTHPASSWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,void*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_12 (TYPE_2__*,int ,void*) ;
 scalar_t__ FUNC_13 (char*,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*,int) ;

bool FUNC_16(HUB *VAR_5, char *VAR_6, void *VAR_7, void *VAR_8, char *VAR_9, UCHAR *VAR_10, UINT *VAR_11)
{
 bool VAR_12 = 0;
 UCHAR VAR_13[VAR_4];
 bool VAR_14 = 0;
 IPC_MSCHAP_V2_AUTHINFO VAR_15;
 UINT VAR_16 = 0;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_8 == ((void*)0))
 {
  return 0;
 }
 if (VAR_11 == ((void*)0))
 {
  VAR_11 = &VAR_16;
 }

 *VAR_11 = 0;

 FUNC_15(&VAR_15, sizeof(VAR_15));

 VAR_14 = FUNC_10(&VAR_15, VAR_9);

 if (FUNC_13(VAR_6, VAR_0) == 0)
 {

  FUNC_12(VAR_13, VAR_5->SecurePassword, VAR_7);
  if (FUNC_3(VAR_13, VAR_8, VAR_4) == 0)
  {
   return 1;
  }
  else
  {
   return 0;
  }
 }

 FUNC_1(VAR_5);
 {
  USER *VAR_17;
  VAR_17 = FUNC_0(VAR_5, VAR_6);
  if (VAR_17)
  {
   FUNC_6(VAR_17->lock);
   {
    if (VAR_17->AuthType == VAR_1)
    {
     AUTHPASSWORD *VAR_18 = (AUTHPASSWORD *)VAR_17->AuthData;

     if (VAR_14 == 0)
     {

      FUNC_12(VAR_13, VAR_18->HashedKey, VAR_7);
      if (FUNC_3(VAR_13, VAR_8, VAR_4) == 0)
      {
       VAR_12 = 1;
      }
     }
     else
     {

      UCHAR VAR_19[8];
      UCHAR VAR_20[24];

      if (FUNC_5(VAR_18->NtLmSecureHash, VAR_3))
      {

       *VAR_11 = VAR_2;
      }
      else
      {
       UCHAR VAR_21[16];
       FUNC_15(VAR_19, sizeof(VAR_19));
       FUNC_15(VAR_20, sizeof(VAR_20));

       FUNC_9(VAR_19, VAR_15.MsChapV2_ClientChallenge, VAR_15.MsChapV2_ServerChallenge,
        VAR_15.MsChapV2_PPPUsername);

       FUNC_7(VAR_20, VAR_19, VAR_18->NtLmSecureHash);

       if (FUNC_3(VAR_20, VAR_15.MsChapV2_ClientResponse, 24) == 0)
       {

        VAR_12 = 1;


        FUNC_4(VAR_21, VAR_18->NtLmSecureHash);
        FUNC_8(VAR_10, VAR_21,
         VAR_20, VAR_19);
       }
      }
     }
    }
   }
   FUNC_14(VAR_17->lock);
   FUNC_11(VAR_17);
  }
 }
 FUNC_2(VAR_5);

 return VAR_12;
}
