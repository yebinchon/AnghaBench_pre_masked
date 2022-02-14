
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; int mc_count; struct dev_mc_list* mc_list; } ;
struct ehea_port {TYPE_1__* adapter; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;
struct TYPE_2__ {int max_mc_mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ehea_port*,int ) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 () ;
 struct ehea_port* FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_2)
{
 struct ehea_port *VAR_3 = FUNC_6(VAR_2);
 struct dev_mc_list *VAR_4;
 int VAR_5, VAR_6;

 FUNC_4(VAR_2, !!(VAR_2->flags & VAR_1));

 if (VAR_2->flags & VAR_0) {
  FUNC_1(VAR_2, 1);
  goto out;
 }
 FUNC_1(VAR_2, 0);

 if (VAR_2->mc_count) {
  VAR_5 = FUNC_2(VAR_2);
  if (VAR_5) {



   FUNC_1(VAR_2, 1);
  }

  if (VAR_2->mc_count > VAR_3->adapter->max_mc_mac) {
   FUNC_3("Mcast registration limit reached (0x%llx). "
      "Use ALLMULTI!",
      VAR_3->adapter->max_mc_mac);
   goto out;
  }

  for (VAR_6 = 0, VAR_4 = VAR_2->mc_list; VAR_6 < VAR_2->mc_count; VAR_6++,
        VAR_4 = VAR_4->next)
   FUNC_0(VAR_3, VAR_4->dmi_addr);

 }
out:
 FUNC_5();
 return;
}
