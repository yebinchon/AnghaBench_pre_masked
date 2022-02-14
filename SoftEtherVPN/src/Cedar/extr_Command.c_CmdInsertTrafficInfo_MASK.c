
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int vv ;
typedef int tmp ;
struct TYPE_6__ {int BroadcastBytes; int BroadcastCount; int UnicastBytes; int UnicastCount; } ;
struct TYPE_5__ {int BroadcastBytes; int BroadcastCount; int UnicastBytes; int UnicastCount; } ;
struct TYPE_7__ {TYPE_2__ Recv; TYPE_1__ Send; } ;
typedef TYPE_3__ TRAFFIC ;
typedef int CT ;


 int FUNC_0 (int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int *,int,int ,char*) ;
 int FUNC_3 (char*) ;

void FUNC_4(CT *VAR_1, TRAFFIC *VAR_2)
{
 wchar_t VAR_3[VAR_0];
 char VAR_4[128];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 FUNC_1(VAR_4, sizeof(VAR_4), VAR_2->Send.UnicastCount);
 FUNC_2(VAR_3, sizeof(VAR_3), FUNC_3("SM_ST_NUM_PACKET_STR"), VAR_4);
 FUNC_0(VAR_1, FUNC_3("SM_ST_SEND_UCAST_NUM"), VAR_3);

 FUNC_1(VAR_4, sizeof(VAR_4), VAR_2->Send.UnicastBytes);
 FUNC_2(VAR_3, sizeof(VAR_3), FUNC_3("SM_ST_SIZE_BYTE_STR"), VAR_4);
 FUNC_0(VAR_1, FUNC_3("SM_ST_SEND_UCAST_SIZE"), VAR_3);

 FUNC_1(VAR_4, sizeof(VAR_4), VAR_2->Send.BroadcastCount);
 FUNC_2(VAR_3, sizeof(VAR_3), FUNC_3("SM_ST_NUM_PACKET_STR"), VAR_4);
 FUNC_0(VAR_1, FUNC_3("SM_ST_SEND_BCAST_NUM"), VAR_3);

 FUNC_1(VAR_4, sizeof(VAR_4), VAR_2->Send.BroadcastBytes);
 FUNC_2(VAR_3, sizeof(VAR_3), FUNC_3("SM_ST_SIZE_BYTE_STR"), VAR_4);
 FUNC_0(VAR_1, FUNC_3("SM_ST_SEND_BCAST_SIZE"), VAR_3);


 FUNC_1(VAR_4, sizeof(VAR_4), VAR_2->Recv.UnicastCount);
 FUNC_2(VAR_3, sizeof(VAR_3), FUNC_3("SM_ST_NUM_PACKET_STR"), VAR_4);
 FUNC_0(VAR_1, FUNC_3("SM_ST_RECV_UCAST_NUM"), VAR_3);

 FUNC_1(VAR_4, sizeof(VAR_4), VAR_2->Recv.UnicastBytes);
 FUNC_2(VAR_3, sizeof(VAR_3), FUNC_3("SM_ST_SIZE_BYTE_STR"), VAR_4);
 FUNC_0(VAR_1, FUNC_3("SM_ST_RECV_UCAST_SIZE"), VAR_3);

 FUNC_1(VAR_4, sizeof(VAR_4), VAR_2->Recv.BroadcastCount);
 FUNC_2(VAR_3, sizeof(VAR_3), FUNC_3("SM_ST_NUM_PACKET_STR"), VAR_4);
 FUNC_0(VAR_1, FUNC_3("SM_ST_RECV_BCAST_NUM"), VAR_3);

 FUNC_1(VAR_4, sizeof(VAR_4), VAR_2->Recv.BroadcastBytes);
 FUNC_2(VAR_3, sizeof(VAR_3), FUNC_3("SM_ST_SIZE_BYTE_STR"), VAR_4);
 FUNC_0(VAR_1, FUNC_3("SM_ST_RECV_BCAST_SIZE"), VAR_3);
}
