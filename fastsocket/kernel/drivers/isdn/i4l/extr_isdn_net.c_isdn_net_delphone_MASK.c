
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* next; int num; } ;
typedef TYPE_2__ isdn_net_phone ;
struct TYPE_10__ {int outgoing; int phone; int name; } ;
typedef TYPE_3__ isdn_net_ioctl_phone ;
struct TYPE_11__ {TYPE_1__* local; } ;
typedef TYPE_4__ isdn_net_dev ;
struct TYPE_8__ {TYPE_2__** phone; TYPE_2__* dial; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(isdn_net_ioctl_phone * VAR_2)
{
 isdn_net_dev *VAR_3 = FUNC_0(VAR_2->name);
 int VAR_4 = VAR_2->outgoing & 1;
 isdn_net_phone *VAR_5;
 isdn_net_phone *VAR_6;

 if (VAR_3) {
  VAR_5 = VAR_3->local->phone[VAR_4];
  VAR_6 = ((void*)0);
  while (VAR_5) {
   if (!FUNC_2(VAR_5->num, VAR_2->phone)) {
    if (VAR_3->local->dial == VAR_5)
     VAR_3->local->dial = VAR_5->next;
    if (VAR_6)
     VAR_6->next = VAR_5->next;
    else
     VAR_3->local->phone[VAR_4] = VAR_5->next;
    FUNC_1(VAR_5);
    return 0;
   }
   VAR_6 = VAR_5;
   VAR_5 = (isdn_net_phone *) VAR_5->next;
  }
  return -VAR_0;
 }
 return -VAR_1;
}
