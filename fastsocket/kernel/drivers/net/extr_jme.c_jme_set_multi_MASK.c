
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; int mc_count; struct dev_mc_list* mc_list; } ;
struct jme_adapter {int reg_rxmcs; int rxmcs_lock; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct jme_adapter*,int ,int) ;
 struct jme_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_13)
{
 struct jme_adapter *VAR_14 = FUNC_2(VAR_13);
 u32 VAR_15[2] = {};
 int VAR_16;

 FUNC_3(&VAR_14->rxmcs_lock);

 VAR_14->reg_rxmcs |= VAR_9 | VAR_12;

 if (VAR_13->flags & VAR_3) {
  VAR_14->reg_rxmcs |= VAR_7;
 } else if (VAR_13->flags & VAR_1) {
  VAR_14->reg_rxmcs |= VAR_8;
 } else if (VAR_13->flags & VAR_2) {
  struct dev_mc_list *VAR_17;
  int VAR_18;

  VAR_14->reg_rxmcs |= VAR_11 | VAR_10;
  for (VAR_16 = 0, VAR_17 = VAR_13->mc_list;
   VAR_17 && VAR_16 < VAR_13->mc_count;
   ++VAR_16, VAR_17 = VAR_17->next) {

   VAR_18 = FUNC_0(VAR_0, VAR_17->dmi_addr) & 0x3F;
   VAR_15[VAR_18 >> 5] |= 1 << (VAR_18 & 0x1F);
  }

  FUNC_1(VAR_14, VAR_5, VAR_15[0]);
  FUNC_1(VAR_14, VAR_4, VAR_15[1]);
 }

 FUNC_5();
 FUNC_1(VAR_14, VAR_6, VAR_14->reg_rxmcs);

 FUNC_4(&VAR_14->rxmcs_lock);
}
