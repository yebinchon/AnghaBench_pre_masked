
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int name; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;
struct cmd_ds_mac_multicast_adr {int * maclist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct cmd_ds_mac_multicast_adr *VAR_5,
          struct net_device *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_7;
 struct dev_mc_list *VAR_9;

 if ((VAR_6->flags & (VAR_3|VAR_2)) != (VAR_3|VAR_2))
  return VAR_7;

 FUNC_3(VAR_6);
 for (VAR_9 = VAR_6->mc_list; VAR_9; VAR_9 = VAR_9->next) {
  if (FUNC_1(VAR_5->maclist, VAR_7, VAR_9->dmi_addr)) {
   FUNC_0("mcast address %s:%pM skipped\n", VAR_6->name,
        VAR_9->dmi_addr);
   continue;
  }

  if (VAR_8 == VAR_4)
   break;
  FUNC_2(&VAR_5->maclist[6*VAR_8], VAR_9->dmi_addr, VAR_1);
  FUNC_0("mcast address %s:%pM added to filter\n", VAR_6->name,
       VAR_9->dmi_addr);
  VAR_8++;
 }
 FUNC_4(VAR_6);
 if (VAR_9)
  return -VAR_0;

 return VAR_8;
}
