
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* UCHAR ;
struct TYPE_7__ {int IvRecv; int IvSend; void* KeyId; int SendControlPacketList; int AckReplyList; int Status; int Server; TYPE_1__* Session; } ;
struct TYPE_6__ {void* LastCreatedChannelIndex; int Server; } ;
typedef TYPE_1__ OPENVPN_SESSION ;
typedef TYPE_2__ OPENVPN_CHANNEL ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 TYPE_2__* FUNC_3 (int) ;

OPENVPN_CHANNEL *FUNC_4(OPENVPN_SESSION *VAR_1, UCHAR VAR_2)
{
 OPENVPN_CHANNEL *VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_3(sizeof(OPENVPN_CHANNEL));

 VAR_3->Session = VAR_1;
 VAR_3->Server = VAR_1->Server;

 VAR_3->Status = VAR_0;

 VAR_3->AckReplyList = FUNC_0(1);

 VAR_3->SendControlPacketList = FUNC_1(((void*)0));

 VAR_3->KeyId = VAR_2;

 FUNC_2(VAR_3->IvSend, sizeof(VAR_3->IvSend));
 FUNC_2(VAR_3->IvRecv, sizeof(VAR_3->IvRecv));



 VAR_1->LastCreatedChannelIndex = VAR_2;

 return VAR_3;
}
