
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct temac_local {int indirect_mutex; } ;
struct net_device {int flags; int mc_count; int dev; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int* dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct temac_local* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct temac_local*,int ) ;
 int FUNC_5 (struct temac_local*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_7)
{
 struct temac_local *VAR_8 = FUNC_3(VAR_7);
 u32 VAR_9, VAR_10, VAR_11;
 int VAR_12;

 FUNC_1(&VAR_8->indirect_mutex);
 if (VAR_7->flags & (VAR_0 | VAR_1)
   || VAR_7->mc_count > VAR_2) {






  VAR_7->flags |= VAR_1;
  FUNC_5(VAR_8, VAR_4, VAR_3);
  FUNC_0(&VAR_7->dev, "Promiscuous mode enabled.\n");
 } else if (VAR_7->mc_count) {
  struct dev_mc_list *VAR_13 = VAR_7->mc_list;
  for (VAR_12 = 0; VAR_13 && VAR_12 < VAR_7->mc_count; VAR_12++) {

   if (VAR_12 >= VAR_2)
    break;
   VAR_9 = ((VAR_13->dmi_addr[3] << 24) |
       (VAR_13->dmi_addr[2] << 16) |
       (VAR_13->dmi_addr[1] << 8) |
       (VAR_13->dmi_addr[0]));
   FUNC_5(VAR_8, VAR_5,
          VAR_9);
   VAR_10 = ((VAR_13->dmi_addr[5] << 8) |
       (VAR_13->dmi_addr[4]) | (VAR_12 << 16));
   FUNC_5(VAR_8, VAR_6,
          VAR_10);
   VAR_13 = VAR_13->next;
  }
 } else {
  VAR_11 = FUNC_4(VAR_8, VAR_4);
  FUNC_5(VAR_8, VAR_4,
         VAR_11 & ~VAR_3);
  FUNC_5(VAR_8, VAR_5, 0);
  FUNC_5(VAR_8, VAR_6, 0);
  FUNC_0(&VAR_7->dev, "Promiscuous mode disabled.\n");
 }
 FUNC_2(&VAR_8->indirect_mutex);
}
