
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ isdn_net_phone ;
struct TYPE_8__ {TYPE_1__* local; } ;
typedef TYPE_3__ isdn_net_dev ;
struct TYPE_6__ {int * dial; TYPE_2__** phone; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(isdn_net_dev * VAR_0)
{
 isdn_net_phone *VAR_1;
 isdn_net_phone *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  VAR_1 = VAR_0->local->phone[VAR_3];
  while (VAR_1) {
   VAR_2 = VAR_1->next;
   FUNC_0(VAR_1);
   VAR_1 = VAR_2;
  }
  VAR_0->local->phone[VAR_3] = ((void*)0);
 }
 VAR_0->local->dial = ((void*)0);
 return 0;
}
