
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int * state; TYPE_1__* proto; } ;
typedef TYPE_2__ hdlc_device ;
struct TYPE_4__ {int module; int (* detach ) (struct net_device*) ;} ;


 TYPE_2__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;

void FUNC_5(struct net_device *VAR_0)
{
 hdlc_device *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->proto) {
  if (VAR_1->proto->detach)
   VAR_1->proto->detach(VAR_0);
  FUNC_3(VAR_1->proto->module);
  VAR_1->proto = ((void*)0);
 }
 FUNC_2(VAR_1->state);
 VAR_1->state = ((void*)0);
 FUNC_1(VAR_0);
}
