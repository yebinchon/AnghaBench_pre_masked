
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_9__ {TYPE_2__* last; TYPE_2__* first; } ;
struct TYPE_10__ {TYPE_2__* first; } ;
struct TYPE_7__ {scalar_t__ num_pendingmsgs; TYPE_4__ pending_msgs; TYPE_6__ inactive_msgs; } ;
typedef TYPE_1__ mq_cntrl ;
struct TYPE_8__ {struct TYPE_8__* prev; struct TYPE_8__* next; } ;
typedef TYPE_2__ lwp_node ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__* FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_4__*) ;

u32 FUNC_4(mq_cntrl *VAR_0)
{
 u32 VAR_1;
 lwp_node *VAR_2;
 lwp_node *VAR_3;
 lwp_node *VAR_4;
 u32 VAR_5;

 FUNC_0(VAR_1);

 VAR_2 = VAR_0->inactive_msgs.first;
 VAR_3 = VAR_0->pending_msgs.first;
 VAR_4 = VAR_0->pending_msgs.last;

 VAR_0->inactive_msgs.first = VAR_3;
 VAR_4->next = VAR_2;
 VAR_2->prev = VAR_4;
 VAR_3->prev = FUNC_2(&VAR_0->inactive_msgs);

 FUNC_3(&VAR_0->pending_msgs);

 VAR_5 = VAR_0->num_pendingmsgs;
 VAR_0->num_pendingmsgs = 0;

 FUNC_1(VAR_1);
 return VAR_5;
}
