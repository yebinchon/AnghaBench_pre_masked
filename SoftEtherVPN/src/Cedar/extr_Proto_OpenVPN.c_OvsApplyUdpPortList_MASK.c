
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {int ListenIP; } ;
struct TYPE_5__ {TYPE_3__* UdpListener; } ;
typedef TYPE_1__ OPENVPN_SERVER_UDP ;
typedef int LIST ;
typedef int IP ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int) ;

void FUNC_7(OPENVPN_SERVER_UDP *VAR_0, char *VAR_1, IP *VAR_2)
{
 LIST *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0->UdpListener);

 if (VAR_0->UdpListener != ((void*)0) && VAR_2 != ((void*)0))
 {
  FUNC_1(&VAR_0->UdpListener->ListenIP, VAR_2, sizeof(IP));
 }

 VAR_3 = FUNC_6(VAR_1, 1);

 for (VAR_4 = 0;VAR_4 < FUNC_4(VAR_3);VAR_4++)
 {
  UINT VAR_5 = *((UINT *)FUNC_3(VAR_3, VAR_4));

  if (VAR_5 >= 1 && VAR_5 <= 65535)
  {
   FUNC_0(VAR_0->UdpListener, VAR_5);
  }
 }

 FUNC_5(VAR_3);
}
