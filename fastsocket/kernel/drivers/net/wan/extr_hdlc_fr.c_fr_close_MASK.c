
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {struct TYPE_3__* next; scalar_t__ ether; scalar_t__ main; } ;
typedef TYPE_1__ pvc_device ;
typedef int hdlc_device ;
struct TYPE_4__ {TYPE_1__* first_pvc; } ;


 int FUNC_0 (scalar_t__) ;
 int * FUNC_1 (struct net_device*) ;
 TYPE_2__* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 hdlc_device *VAR_1 = FUNC_1(VAR_0);
 pvc_device *VAR_2 = FUNC_2(VAR_1)->first_pvc;

 while (VAR_2) {
  if (VAR_2->main)
   FUNC_0(VAR_2->main);
  if (VAR_2->ether)
   FUNC_0(VAR_2->ether);
  VAR_2 = VAR_2->next;
 }
}
