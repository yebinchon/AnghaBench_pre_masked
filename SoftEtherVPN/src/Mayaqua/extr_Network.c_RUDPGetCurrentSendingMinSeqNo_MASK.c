
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT64 ;
struct TYPE_6__ {int SeqNo; } ;
struct TYPE_5__ {int SendSegmentList; } ;
typedef TYPE_1__ RUDP_SESSION ;
typedef TYPE_2__ RUDP_SEGMENT ;


 TYPE_2__* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

UINT64 FUNC_2(RUDP_SESSION *VAR_0)
{
 RUDP_SEGMENT *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_1(VAR_0->SendSegmentList) == 0)
 {
  return 0;
 }

 VAR_1 = FUNC_0(VAR_0->SendSegmentList, 0);

 return VAR_1->SeqNo;
}
