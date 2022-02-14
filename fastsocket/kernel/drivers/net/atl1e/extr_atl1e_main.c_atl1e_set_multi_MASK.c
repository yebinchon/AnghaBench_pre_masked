
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;
struct atl1e_hw {int dummy; } ;
struct atl1e_adapter {struct atl1e_hw hw; } ;


 int FUNC_0 (struct atl1e_hw*,int ) ;
 int FUNC_1 (struct atl1e_hw*,int ,int) ;
 int FUNC_2 (struct atl1e_hw*,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct atl1e_hw*,int ) ;
 int FUNC_4 (struct atl1e_hw*,int) ;
 struct atl1e_adapter* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_6)
{
 struct atl1e_adapter *VAR_7 = FUNC_5(VAR_6);
 struct atl1e_hw *VAR_8 = &VAR_7->hw;
 struct dev_mc_list *VAR_9;
 u32 VAR_10 = 0;
 u32 VAR_11;


 VAR_10 = FUNC_0(VAR_8, VAR_4);

 if (VAR_6->flags & VAR_1) {
  VAR_10 |= VAR_3;
 } else if (VAR_6->flags & VAR_0) {
  VAR_10 |= VAR_2;
  VAR_10 &= ~VAR_3;
 } else {
  VAR_10 &= ~(VAR_3 | VAR_2);
 }

 FUNC_1(VAR_8, VAR_4, VAR_10);


 FUNC_1(VAR_8, VAR_5, 0);
 FUNC_2(VAR_8, VAR_5, 1, 0);


 for (VAR_9 = VAR_6->mc_list; VAR_9; VAR_9 = VAR_9->next) {
  VAR_11 = FUNC_3(VAR_8, VAR_9->dmi_addr);
  FUNC_4(VAR_8, VAR_11);
 }
}
