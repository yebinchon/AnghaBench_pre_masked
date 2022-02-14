
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hostap_interface {TYPE_1__* local; int list; } ;
struct TYPE_2__ {struct net_device* stadev; struct net_device* apdev; struct net_device* ddev; } ;


 int FUNC_0 (int *) ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device *VAR_0, int VAR_1,
        int VAR_2)
{
 struct hostap_interface *VAR_3;

 if (!VAR_0)
  return;

 VAR_3 = FUNC_1(VAR_0);

 if (VAR_2) {
  FUNC_0(&VAR_3->list);
 }

 if (VAR_0 == VAR_3->local->ddev)
  VAR_3->local->ddev = ((void*)0);
 else if (VAR_0 == VAR_3->local->apdev)
  VAR_3->local->apdev = ((void*)0);
 else if (VAR_0 == VAR_3->local->stadev)
  VAR_3->local->stadev = ((void*)0);

 if (VAR_1)
  FUNC_3(VAR_0);
 else
  FUNC_2(VAR_0);



}
