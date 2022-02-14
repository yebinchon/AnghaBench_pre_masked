
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int t ;
typedef scalar_t__ UINT64 ;
struct TYPE_10__ {scalar_t__ SeqNo; } ;
struct TYPE_9__ {int SendSegmentList; } ;
typedef int RUDP_STACK ;
typedef TYPE_1__ RUDP_SESSION ;
typedef TYPE_2__ RUDP_SEGMENT ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;

void FUNC_4(RUDP_STACK *VAR_0, RUDP_SESSION *VAR_1, UINT64 VAR_2)
{
 RUDP_SEGMENT VAR_3;
 RUDP_SEGMENT *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return;
 }

 FUNC_3(&VAR_3, sizeof(VAR_3));
 VAR_3.SeqNo = VAR_2;

 VAR_4 = FUNC_2(VAR_1->SendSegmentList, &VAR_3);
 if (VAR_4 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_1->SendSegmentList, VAR_4);
 FUNC_1(VAR_4);
}
