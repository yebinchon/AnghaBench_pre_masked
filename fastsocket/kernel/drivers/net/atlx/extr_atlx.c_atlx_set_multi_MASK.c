
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;
struct atlx_hw {scalar_t__ hw_addr; } ;
struct atlx_adapter {struct atlx_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct atlx_hw*,int ) ;
 int FUNC_1 (struct atlx_hw*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 struct atlx_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_6)
{
 struct atlx_adapter *VAR_7 = FUNC_4(VAR_6);
 struct atlx_hw *VAR_8 = &VAR_7->hw;
 struct dev_mc_list *VAR_9;
 u32 VAR_10;
 u32 VAR_11;


 VAR_10 = FUNC_2(VAR_8->hw_addr + VAR_4);
 if (VAR_6->flags & VAR_1)
  VAR_10 |= VAR_3;
 else if (VAR_6->flags & VAR_0) {
  VAR_10 |= VAR_2;
  VAR_10 &= ~VAR_3;
 } else
  VAR_10 &= ~(VAR_3 | VAR_2);

 FUNC_3(VAR_10, VAR_8->hw_addr + VAR_4);


 FUNC_3(0, VAR_8->hw_addr + VAR_5);
 FUNC_3(0, (VAR_8->hw_addr + VAR_5) + (1 << 2));


 for (VAR_9 = VAR_6->mc_list; VAR_9; VAR_9 = VAR_9->next) {
  VAR_11 = FUNC_0(VAR_8, VAR_9->dmi_addr);
  FUNC_1(VAR_8, VAR_11);
 }
}
