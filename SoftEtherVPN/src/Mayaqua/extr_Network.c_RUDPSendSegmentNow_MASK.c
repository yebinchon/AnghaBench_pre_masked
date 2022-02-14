
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int keygen ;
typedef int key ;
typedef int dst ;
typedef int UINT64 ;
typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_8__ {scalar_t__* Key_Send; scalar_t__* NextIv; scalar_t__ Icmp_Type; scalar_t__ Dns_TranId; int LastSentTick; int YourPort; int YourIp; int * ReplyAckList; int LastRecvCompleteSeqNo; int YourTick; } ;
struct TYPE_7__ {scalar_t__ Protocol; int Now; int SvcNameHash; } ;
typedef TYPE_1__ RUDP_STACK ;
typedef TYPE_2__ RUDP_SESSION ;
typedef int LIST ;
typedef int CRYPT ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (char*,TYPE_2__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 int * FUNC_11 (scalar_t__*,int) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*,int *,int ,scalar_t__*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (int *) ;
 int VAR_5 ;
 int FUNC_17 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_18 (scalar_t__*,scalar_t__) ;
 int FUNC_19 (scalar_t__*,int ) ;
 int FUNC_20 (scalar_t__*,scalar_t__*,int ,int) ;
 int FUNC_21 (scalar_t__*,int) ;

void FUNC_22(RUDP_STACK *VAR_6, RUDP_SESSION *VAR_7, UINT64 VAR_8, void *VAR_9, UINT VAR_10)
{
 UCHAR VAR_11[VAR_1];
 UCHAR *VAR_12;
 UCHAR *VAR_13;
 LIST *VAR_14 = ((void*)0);
 UINT VAR_15;
 UCHAR VAR_16;
 UINT VAR_17;
 UCHAR VAR_18[VAR_5];
 UCHAR VAR_19[VAR_5];
 UCHAR VAR_20[VAR_5 * 2];
 CRYPT *VAR_21;
 UINT VAR_22;
 UINT VAR_23;
 UINT VAR_24 = 0;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || (VAR_10 != 0 && VAR_9 == ((void*)0)) || (VAR_10 > VAR_2))
 {
  return;
 }

 FUNC_21(VAR_11, sizeof(VAR_11));
 VAR_12 = VAR_11;


 FUNC_1(VAR_12, VAR_7->Key_Send, VAR_5);
 VAR_12 += VAR_5;


 VAR_13 = VAR_12;
 FUNC_1(VAR_13, VAR_7->NextIv, VAR_5);
 VAR_12 += VAR_5;

 for (VAR_15 = 0;VAR_15 < FUNC_10(FUNC_8(VAR_7->ReplyAckList), VAR_0);VAR_15++)
 {
  UINT64 *VAR_25 = FUNC_7(VAR_7->ReplyAckList, VAR_15);

  if (VAR_14 == ((void*)0))
  {
   VAR_14 = FUNC_12(((void*)0));
  }

  FUNC_0(VAR_14, VAR_25);
 }


 FUNC_19(VAR_12, VAR_6->Now);
 VAR_12 += sizeof(UINT64);


 FUNC_19(VAR_12, VAR_7->YourTick);
 VAR_12 += sizeof(UINT64);


 FUNC_19(VAR_12, VAR_7->LastRecvCompleteSeqNo);
 VAR_12 += sizeof(UINT64);


 VAR_23 = FUNC_8(VAR_14);
 FUNC_18(VAR_12, VAR_23);
 VAR_12 += sizeof(UINT);

 if (VAR_14 != ((void*)0))
 {

  for (VAR_15 = 0;VAR_15 < FUNC_8(VAR_14);VAR_15++)
  {
   UINT64 *VAR_26 = FUNC_7(VAR_14, VAR_15);

   FUNC_19(VAR_12, *VAR_26);
   VAR_12 += sizeof(UINT64);

   FUNC_3(VAR_7->ReplyAckList, VAR_26);

   FUNC_5(VAR_26);
  }
  FUNC_16(VAR_14);
 }


 FUNC_19(VAR_12, VAR_8);
 VAR_12 += sizeof(UINT64);


 FUNC_1(VAR_12, VAR_9, VAR_10);
 VAR_12 += VAR_10;


 VAR_16 = FUNC_15();
 VAR_16 = FUNC_9(VAR_16, 1);

 for (VAR_15 = 0;VAR_15 < VAR_16;VAR_15++)
 {
  *VAR_12 = VAR_16;
  VAR_12++;
 }

 VAR_17 = (UINT)(VAR_12 - VAR_11);


 FUNC_1(VAR_20 + 0, VAR_13, VAR_5);
 FUNC_1(VAR_20 + VAR_5, VAR_7->Key_Send, VAR_5);
 FUNC_17(VAR_19, VAR_20, sizeof(VAR_20));
 VAR_21 = FUNC_11(VAR_19, sizeof(VAR_19));
 FUNC_4(VAR_21, VAR_11 + VAR_5 * 2, VAR_11 + VAR_5 * 2, VAR_17 - (VAR_5 * 2));
 FUNC_6(VAR_21);


 FUNC_17(VAR_18, VAR_11, VAR_17);
 if (VAR_6->Protocol == VAR_3 || VAR_6->Protocol == VAR_4)
 {
  FUNC_20(VAR_18, VAR_18, VAR_6->SvcNameHash, VAR_5);
 }
 FUNC_1(VAR_11, VAR_18, VAR_5);

 if (VAR_6->Protocol == VAR_4)
 {
  VAR_24 = VAR_7->Icmp_Type;
 }
 else if (VAR_6->Protocol == VAR_3)
 {
  VAR_24 = VAR_7->Dns_TranId;
 }
 FUNC_13(VAR_6, &VAR_7->YourIp, VAR_7->YourPort, VAR_11, VAR_17, VAR_24);

 if (VAR_10 >= 1)
 {
  VAR_7->LastSentTick = VAR_6->Now;
 }


 VAR_22 = FUNC_14() % (VAR_17 - VAR_5);
 FUNC_1(VAR_7->NextIv, VAR_11 + VAR_22, VAR_5);





 if (VAR_10 >= 1)
 {



 }
}
