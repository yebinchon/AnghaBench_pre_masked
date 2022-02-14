
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int IgnoreSendErr; } ;
struct TYPE_8__ {int Size; int Buf; } ;
struct TYPE_7__ {TYPE_3__* UdpSock; int ServerPort; int ServerIp; int SharedSecret; } ;
typedef int RADIUS_PACKET ;
typedef TYPE_1__ EAP_CLIENT ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,int ,int ,int ) ;

bool FUNC_3(EAP_CLIENT *VAR_0, RADIUS_PACKET *VAR_1)
{
 BUF *VAR_2;
 bool VAR_3 = 0;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_1(VAR_1, VAR_0->SharedSecret);
 if (VAR_2 != ((void*)0))
 {
  UINT VAR_4 = FUNC_2(VAR_0->UdpSock, &VAR_0->ServerIp, VAR_0->ServerPort, VAR_2->Buf, VAR_2->Size);
  if (!(VAR_4 == 0 && VAR_0->UdpSock->IgnoreSendErr == 0))
  {
   VAR_3 = 1;
  }


  FUNC_0(VAR_2);
 }

 return VAR_3;
}
