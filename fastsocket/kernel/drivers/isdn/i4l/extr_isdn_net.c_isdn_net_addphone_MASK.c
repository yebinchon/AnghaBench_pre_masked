
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
struct TYPE_8__ {TYPE_2__** phone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int) ;

int
FUNC_3(isdn_net_ioctl_phone * VAR_3)
{
 isdn_net_dev *VAR_4 = FUNC_0(VAR_3->name);
 isdn_net_phone *VAR_5;

 if (VAR_4) {
  if (!(VAR_5 = FUNC_1(sizeof(isdn_net_phone), VAR_2)))
   return -VAR_1;
  FUNC_2(VAR_5->num, VAR_3->phone, sizeof(VAR_5->num));
  VAR_5->next = VAR_4->local->phone[VAR_3->outgoing & 1];
  VAR_4->local->phone[VAR_3->outgoing & 1] = VAR_5;
  return 0;
 }
 return -VAR_0;
}
