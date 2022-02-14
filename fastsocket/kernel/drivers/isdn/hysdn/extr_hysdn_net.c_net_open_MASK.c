
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int* dev_addr; struct in_device* ip_ptr; TYPE_1__* ml_priv; } ;
struct in_ifaddr {int ifa_local; } ;
struct in_device {struct in_ifaddr* ifa_list; } ;
struct TYPE_2__ {int * mac_addr; } ;
typedef TYPE_1__ hysdn_card ;


 int VAR_0 ;
 int FUNC_0 (int*,int *,int) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1)
{
 struct in_device *VAR_2;
 hysdn_card *VAR_3 = VAR_1->ml_priv;
 int VAR_4;

 FUNC_1(VAR_1);


 if (!VAR_3->mac_addr[0]) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   VAR_1->dev_addr[VAR_4] = 0xfc;
  if ((VAR_2 = VAR_1->ip_ptr) != ((void*)0)) {
   struct in_ifaddr *VAR_5 = VAR_2->ifa_list;
   if (VAR_5 != ((void*)0))
    FUNC_0(VAR_1->dev_addr + (VAR_0 - sizeof(VAR_5->ifa_local)), &VAR_5->ifa_local, sizeof(VAR_5->ifa_local));
  }
 } else
  FUNC_0(VAR_1->dev_addr, VAR_3->mac_addr, VAR_0);

 return (0);
}
