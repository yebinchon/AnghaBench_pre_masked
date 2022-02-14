
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct list_head {struct list_head* next; struct list_head* prev; } ;
struct TYPE_6__ {struct list_head List; int SeqNum; } ;
struct TYPE_5__ {struct list_head RxPendingPktList; } ;
typedef TYPE_1__* PRX_TS_RECORD ;
typedef TYPE_2__* PRX_REORDER_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct list_head*,int ,int ) ;

bool
FUNC_3(
 PRX_TS_RECORD VAR_2,
 PRX_REORDER_ENTRY VAR_3
 )
{
 struct list_head *VAR_4 = &VAR_2->RxPendingPktList;

 while(VAR_4->next != &VAR_2->RxPendingPktList)
 {
  if( FUNC_1(VAR_3->SeqNum, ((PRX_REORDER_ENTRY)FUNC_2(VAR_4->next,VAR_1,VAR_0))->SeqNum) )
  {
   VAR_4 = VAR_4->next;
  }
  else if( FUNC_0(VAR_3->SeqNum, ((PRX_REORDER_ENTRY)FUNC_2(VAR_4->next,VAR_1,VAR_0))->SeqNum) )
  {
   return 0;
  }
  else
  {
   break;
  }
 }

 VAR_3->List.next = VAR_4->next;
 VAR_3->List.next->prev = &VAR_3->List;
 VAR_3->List.prev = VAR_4;
 VAR_4->next = &VAR_3->List;

 return 1;
}
