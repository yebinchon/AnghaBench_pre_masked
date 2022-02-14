
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct net_local {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int debug_flags; struct net_device* netif; } ;
typedef TYPE_1__ hysdn_card ;


 int VAR_0 ;
 int FUNC_0 (struct net_local*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

int
FUNC_5(hysdn_card * VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netif;

 if (!VAR_2)
  return (0);

 VAR_1->netif = ((void*)0);
 FUNC_3(VAR_2);

 FUNC_0((struct net_local *) VAR_2);

 FUNC_4(VAR_2);
 FUNC_1(VAR_2);
 if (VAR_1->debug_flags & VAR_0)
  FUNC_2(VAR_1, "network device deleted");

 return (0);
}
