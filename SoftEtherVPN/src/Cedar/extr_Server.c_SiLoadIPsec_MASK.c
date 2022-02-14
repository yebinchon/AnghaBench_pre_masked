
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sl ;
typedef int d ;
typedef size_t UINT ;
struct TYPE_13__ {int Password; int UserName; int HubName; int Id; void* EtherIP_IPsec; void* L2TP_IPsec; void* L2TP_Raw; int L2TP_DefaultHub; int IPsec_Secret; } ;
struct TYPE_12__ {scalar_t__ ServerType; int IPsecServer; } ;
struct TYPE_11__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ IPSEC_SERVICES ;
typedef int FOLDER ;
typedef TYPE_3__ ETHERIP_ID ;
typedef int BUF ;


 int FUNC_0 (int ,TYPE_3__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 void* FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ,int) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_11 (int ,int,char*) ;
 int FUNC_12 (TYPE_3__*,int) ;

void FUNC_13(SERVER *VAR_1, FOLDER *VAR_2)
{
 IPSEC_SERVICES VAR_3;
 FOLDER *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_12(&VAR_3, sizeof(VAR_3));

 FUNC_5(VAR_2, "IPsec_Secret", VAR_3.IPsec_Secret, sizeof(VAR_3.IPsec_Secret));
 FUNC_5(VAR_2, "L2TP_DefaultHub", VAR_3.L2TP_DefaultHub, sizeof(VAR_3.L2TP_DefaultHub));

 if (VAR_1->ServerType == VAR_0)
 {

  VAR_3.L2TP_Raw = FUNC_2(VAR_2, "L2TP_Raw");
  VAR_3.L2TP_IPsec = FUNC_2(VAR_2, "L2TP_IPsec");
  VAR_3.EtherIP_IPsec = FUNC_2(VAR_2, "EtherIP_IPsec");
 }

 FUNC_10(VAR_1->IPsecServer, &VAR_3);

 VAR_4 = FUNC_4(VAR_2, "EtherIP_IDSettingsList");

 if (VAR_4 != ((void*)0))
 {
  TOKEN_LIST *VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 != ((void*)0))
  {
   UINT VAR_6;

   for (VAR_6 = 0;VAR_6 < VAR_5->NumTokens;VAR_6++)
   {
    char *VAR_7 = VAR_5->Token[VAR_6];
    FOLDER *VAR_8 = FUNC_4(VAR_4, VAR_7);

    if (VAR_8 != ((void*)0))
    {
     ETHERIP_ID VAR_9;
     BUF *VAR_10;

     FUNC_12(&VAR_9, sizeof(VAR_9));

     FUNC_11(VAR_9.Id, sizeof(VAR_9.Id), VAR_7);
     FUNC_5(VAR_8, "HubName", VAR_9.HubName, sizeof(VAR_9.HubName));
     FUNC_5(VAR_8, "UserName", VAR_9.UserName, sizeof(VAR_9.UserName));

     VAR_10 = FUNC_3(VAR_8, "EncryptedPassword");
     if (VAR_10 != ((void*)0))
     {
      char *VAR_11 = FUNC_6(VAR_10);

      FUNC_11(VAR_9.Password, sizeof(VAR_9.Password), VAR_11);

      FUNC_7(VAR_11);

      FUNC_0(VAR_1->IPsecServer, &VAR_9);

      FUNC_8(VAR_10);
     }
    }
   }

   FUNC_9(VAR_5);
  }
 }
}
