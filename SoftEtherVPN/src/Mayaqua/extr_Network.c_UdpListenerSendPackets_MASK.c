
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UDPPACKET ;
struct TYPE_3__ {int Event; int SendPacketList; } ;
typedef TYPE_1__ UDPLISTENER ;
typedef int LIST ;


 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(UDPLISTENER *VAR_0, LIST *VAR_1)
{
 UINT VAR_2 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0->SendPacketList);
 {
  UINT VAR_3;

  VAR_2 = FUNC_2(VAR_1);

  for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_1);VAR_3++)
  {
   UDPPACKET *VAR_4 = FUNC_1(VAR_1, VAR_3);

   FUNC_0(VAR_0->SendPacketList, VAR_4);
  }
 }
 FUNC_5(VAR_0->SendPacketList);

 if (VAR_2 >= 1)
 {
  FUNC_4(VAR_0->Event);
 }
}
