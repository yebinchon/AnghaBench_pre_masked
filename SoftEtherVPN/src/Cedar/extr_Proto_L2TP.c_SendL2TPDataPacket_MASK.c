
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
typedef int UDPPACKET ;
typedef int UCHAR ;
struct TYPE_6__ {int IsV3; int SessionId1; } ;
struct TYPE_5__ {int TunnelId1; int IsYamahaV3; int ClientPort; int ClientIp; int ServerPort; int ServerIp; } ;
typedef TYPE_1__ L2TP_TUNNEL ;
typedef TYPE_2__ L2TP_SESSION ;
typedef int L2TP_SERVER ;


 int FUNC_0 (int*,void*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int* FUNC_2 (int) ;
 int * FUNC_3 (int *,int ,int *,int ,int*,int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int*,int) ;

void FUNC_6(L2TP_SERVER *VAR_1, L2TP_TUNNEL *VAR_2, L2TP_SESSION *VAR_3, void *VAR_4, UINT VAR_5)
{
 UDPPACKET *VAR_6;
 UCHAR *VAR_7;
 UINT VAR_8;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || (VAR_5 != 0 && VAR_4 == ((void*)0)))
 {
  return;
 }


 if (VAR_3->IsV3 == 0)
 {

  VAR_8 = 8 + VAR_5;
  VAR_7 = FUNC_2(VAR_8);
  VAR_7[0] = 0x40;
  VAR_7[1] = 0x02;

  FUNC_5(VAR_7 + 2, VAR_8);
  FUNC_5(VAR_7 + 4, VAR_2->TunnelId1);
  FUNC_5(VAR_7 + 6, VAR_3->SessionId1);

  FUNC_0(VAR_7 + 8, VAR_4, VAR_5);


  VAR_6 = FUNC_3(&VAR_2->ServerIp, VAR_2->ServerPort, &VAR_2->ClientIp, VAR_2->ClientPort, VAR_7, VAR_8);
 }
 else
 {

  if (VAR_2->IsYamahaV3 == 0)
  {
   VAR_8 = 4 + VAR_5;
   VAR_7 = FUNC_2(VAR_8);

   FUNC_4(VAR_7, VAR_3->SessionId1);

   FUNC_0(VAR_7 + 4, VAR_4, VAR_5);


   VAR_6 = FUNC_3(&VAR_2->ServerIp, VAR_0, &VAR_2->ClientIp, VAR_0, VAR_7, VAR_8);
  }
  else
  {
   UINT VAR_9 = 0x00030000;

   VAR_8 = 8 + VAR_5;
   VAR_7 = FUNC_2(VAR_8);

   FUNC_4(VAR_7, VAR_9);
   FUNC_4(VAR_7 + 4, VAR_3->SessionId1);

   FUNC_0(VAR_7 + 8, VAR_4, VAR_5);


   VAR_6 = FUNC_3(&VAR_2->ServerIp, VAR_2->ServerPort, &VAR_2->ClientIp, VAR_2->ClientPort, VAR_7, VAR_8);
  }
 }

 FUNC_1(VAR_1, VAR_6);
}
