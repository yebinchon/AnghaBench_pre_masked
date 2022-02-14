
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnet_mcast_entry {int hit; struct vnet_mcast_entry* next; int addr; } ;
struct vnet {struct vnet_mcast_entry* mcast_list; } ;
struct net_device {struct dev_addr_list* mc_list; } ;
struct dev_addr_list {int dmi_addr; struct dev_addr_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vnet_mcast_entry* FUNC_0 (struct vnet*,int ) ;
 struct vnet_mcast_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct vnet *VAR_2, struct net_device *VAR_3)
{
 struct dev_addr_list *VAR_4;

 for (VAR_4 = VAR_3->mc_list; VAR_4; VAR_4 = VAR_4->next) {
  struct vnet_mcast_entry *VAR_5;

  VAR_5 = FUNC_0(VAR_2, VAR_4->dmi_addr);
  if (VAR_5) {
   VAR_5->hit = 1;
   continue;
  }

  if (!VAR_5) {
   VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
   if (!VAR_5)
    continue;
   FUNC_2(VAR_5->addr, VAR_4->dmi_addr, VAR_0);
   VAR_5->hit = 1;

   VAR_5->next = VAR_2->mcast_list;
   VAR_2->mcast_list = VAR_5;
  }
 }
}
