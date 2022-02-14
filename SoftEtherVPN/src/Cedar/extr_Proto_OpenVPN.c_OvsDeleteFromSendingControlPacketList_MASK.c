
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int * SendControlPacketList; } ;
struct TYPE_8__ {scalar_t__ PacketId; } ;
typedef TYPE_1__ OPENVPN_CONTROL_PACKET ;
typedef TYPE_2__ OPENVPN_CHANNEL ;
typedef int LIST ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

void FUNC_7(OPENVPN_CHANNEL *VAR_0, UINT VAR_1, UINT *VAR_2)
{
 LIST *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return;
 }

 VAR_3 = FUNC_4(((void*)0));
 for (VAR_4 = 0;VAR_4 < VAR_1;VAR_4++)
 {
  UINT VAR_5 = VAR_2[VAR_4];
  UINT VAR_6;

  for (VAR_6 = 0;VAR_6 < FUNC_3(VAR_0->SendControlPacketList);VAR_6++)
  {
   OPENVPN_CONTROL_PACKET *VAR_7 = FUNC_2(VAR_0->SendControlPacketList, VAR_6);

   if (VAR_7->PacketId == VAR_5)
   {
    FUNC_0(VAR_3, VAR_7);
   }
  }
 }

 for (VAR_4 = 0;VAR_4 < FUNC_3(VAR_3);VAR_4++)
 {
  OPENVPN_CONTROL_PACKET *VAR_8 = FUNC_2(VAR_3, VAR_4);

  FUNC_1(VAR_0->SendControlPacketList, VAR_8);

  FUNC_5(VAR_8);
 }

 FUNC_6(VAR_3);
}
