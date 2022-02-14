
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ ether; scalar_t__ main; struct TYPE_4__* next; } ;
typedef TYPE_1__ pvc_device ;
typedef int hdlc_device ;
struct TYPE_5__ {int dce_changed; scalar_t__ dce_pvc_count; TYPE_1__* first_pvc; } ;


 int * FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 hdlc_device *VAR_1 = FUNC_0(VAR_0);
 pvc_device *VAR_2 = FUNC_2(VAR_1)->first_pvc;
 FUNC_2(VAR_1)->first_pvc = ((void*)0);
 FUNC_2(VAR_1)->dce_pvc_count = 0;
 FUNC_2(VAR_1)->dce_changed = 1;

 while (VAR_2) {
  pvc_device *VAR_3 = VAR_2->next;

  if (VAR_2->main)
   FUNC_3(VAR_2->main);

  if (VAR_2->ether)
   FUNC_3(VAR_2->ether);

  FUNC_1(VAR_2);
  VAR_2 = VAR_3;
 }
}
