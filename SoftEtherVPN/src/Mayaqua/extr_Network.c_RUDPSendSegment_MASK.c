
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {scalar_t__ SeqNo; int Size; int Data; } ;
struct TYPE_6__ {int SendSegmentList; int NextSendSeqNo; } ;
typedef int RUDP_STACK ;
typedef TYPE_1__ RUDP_SESSION ;
typedef TYPE_2__ RUDP_SEGMENT ;


 int FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (int) ;

void FUNC_3(RUDP_STACK *VAR_1, RUDP_SESSION *VAR_2, void *VAR_3, UINT VAR_4)
{
 RUDP_SEGMENT *VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || (VAR_4 != 0 && VAR_3 == ((void*)0)) || (VAR_4 > VAR_0))
 {
  return;
 }

 VAR_5 = FUNC_2(sizeof(RUDP_SEGMENT));

 FUNC_0(VAR_5->Data, VAR_3, VAR_4);
 VAR_5->Size = VAR_4;

 VAR_5->SeqNo = VAR_2->NextSendSeqNo++;

 FUNC_1(VAR_2->SendSegmentList, VAR_5);
}
