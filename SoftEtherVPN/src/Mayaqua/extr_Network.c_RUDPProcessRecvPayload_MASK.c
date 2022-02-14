
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int t ;
typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_10__ {int Size; int Data; scalar_t__ SeqNo; } ;
struct TYPE_9__ {scalar_t__ LastRecvCompleteSeqNo; int ReplyAckList; int RecvSegmentList; } ;
typedef int RUDP_STACK ;
typedef TYPE_1__ RUDP_SESSION ;
typedef TYPE_2__ RUDP_SEGMENT ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_5 (int) ;

void FUNC_6(RUDP_STACK *VAR_2, RUDP_SESSION *VAR_3, UINT64 VAR_4, void *VAR_5, UINT VAR_6)
{
 RUDP_SEGMENT VAR_7;
 RUDP_SEGMENT *VAR_8;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == 0 || VAR_5 == ((void*)0) || VAR_6 == 0 || VAR_6 > VAR_1)
 {
  return;
 }

 if (VAR_4 > (VAR_3->LastRecvCompleteSeqNo + VAR_0))
 {

  return;
 }

 if (VAR_4 <= VAR_3->LastRecvCompleteSeqNo)
 {

  FUNC_0(VAR_3->ReplyAckList, VAR_4);
  return;
 }

 FUNC_4(&VAR_7, sizeof(VAR_7));
 VAR_7.SeqNo = VAR_4;

 VAR_8 = FUNC_3(VAR_3->RecvSegmentList, &VAR_7);
 if (VAR_8 != ((void*)0))
 {

  FUNC_0(VAR_3->ReplyAckList, VAR_4);
  return;
 }


 VAR_8 = FUNC_5(sizeof(RUDP_SEGMENT));
 VAR_8->SeqNo = VAR_4;
 FUNC_1(VAR_8->Data, VAR_5, VAR_6);
 VAR_8->Size = VAR_6;
 FUNC_2(VAR_3->RecvSegmentList, VAR_8);


 FUNC_0(VAR_3->ReplyAckList, VAR_4);



}
