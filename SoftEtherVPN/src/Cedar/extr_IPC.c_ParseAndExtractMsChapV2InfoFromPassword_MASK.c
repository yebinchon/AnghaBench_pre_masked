
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_12__ {int Size; int Buf; } ;
struct TYPE_11__ {int * MsChapV2_EapClient; scalar_t__* MsChapV2_ClientResponse; scalar_t__* MsChapV2_ClientChallenge; scalar_t__* MsChapV2_ServerChallenge; int MsChapV2_PPPUsername; } ;
struct TYPE_10__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ IPC_MSCHAP_V2_AUTHINFO ;
typedef int EAP_CLIENT ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (scalar_t__*,int ,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int,int ) ;
 TYPE_3__* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int) ;

bool FUNC_9(IPC_MSCHAP_V2_AUTHINFO *VAR_1, char *VAR_2)
{
 TOKEN_LIST *VAR_3;
 bool VAR_4 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_8(VAR_1, sizeof(IPC_MSCHAP_V2_AUTHINFO));

 if (FUNC_5(VAR_2, VAR_0) == 0)
 {
  return 0;
 }

 VAR_3 = FUNC_4(VAR_2, ":");

 if (VAR_3->NumTokens == 6)
 {
  BUF *VAR_5, *VAR_6, *VAR_7, *VAR_8;

  VAR_5 = FUNC_7(VAR_3->Token[2]);
  VAR_6 = FUNC_7(VAR_3->Token[3]);
  VAR_7 = FUNC_7(VAR_3->Token[4]);
  VAR_8 = FUNC_7(VAR_3->Token[5]);

  if (FUNC_3(VAR_3->Token[1]) == 0 && VAR_5->Size == 16 && VAR_6->Size == 16 && VAR_7->Size == 24
    && VAR_8->Size == 8)
  {
   UINT64 VAR_9 = 0;

   FUNC_6(VAR_1->MsChapV2_PPPUsername, sizeof(VAR_1->MsChapV2_PPPUsername), VAR_3->Token[1]);
   FUNC_0(VAR_1->MsChapV2_ServerChallenge, VAR_5->Buf, 16);
   FUNC_0(VAR_1->MsChapV2_ClientChallenge, VAR_6->Buf, 16);
   FUNC_0(VAR_1->MsChapV2_ClientResponse, VAR_7->Buf, 24);
   FUNC_0(&VAR_9, VAR_8->Buf, 8);

   VAR_1->MsChapV2_EapClient = (EAP_CLIENT *)VAR_9;

   VAR_4 = 1;
  }

  FUNC_1(VAR_5);
  FUNC_1(VAR_6);
  FUNC_1(VAR_7);
  FUNC_1(VAR_8);
 }

 FUNC_2(VAR_3);

 return VAR_4;
}
