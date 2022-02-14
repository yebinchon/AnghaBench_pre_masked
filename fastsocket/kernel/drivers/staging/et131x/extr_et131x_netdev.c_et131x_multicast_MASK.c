
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct net_device {int flags; int mc_count; struct dev_mc_list* mc_list; } ;
struct et131x_adapter {size_t PacketFilter; int MCAddressCount; int Lock; int * MCList; } ;
struct dev_mc_list {int dmi_addr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct et131x_adapter*) ;
 int FUNC_1 (int ,int ,int ) ;
 struct et131x_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct net_device *VAR_7)
{
 struct et131x_adapter *VAR_8 = FUNC_2(VAR_7);
 uint32_t VAR_9 = 0;
 uint32_t VAR_10;
 unsigned long VAR_11;
 struct dev_mc_list *VAR_12 = VAR_7->mc_list;

 FUNC_3(&VAR_8->Lock, VAR_11);





 VAR_9 = VAR_8->PacketFilter;






 VAR_9 &= ~VAR_1;





 if (VAR_7->flags & VAR_5) {
  VAR_8->PacketFilter |= VAR_2;
 } else {
  VAR_8->PacketFilter &= ~VAR_2;
 }

 if (VAR_7->flags & VAR_4) {
  VAR_8->PacketFilter |= VAR_0;
 }

 if (VAR_7->mc_count > VAR_6) {
  VAR_8->PacketFilter |= VAR_0;
 }

 if (VAR_7->mc_count < 1) {
  VAR_8->PacketFilter &= ~VAR_0;
  VAR_8->PacketFilter &= ~VAR_1;
 } else {
  VAR_8->PacketFilter |= VAR_1;
 }


 VAR_8->MCAddressCount = VAR_7->mc_count;

 if (VAR_7->mc_count) {
  VAR_10 = VAR_7->mc_count - 1;
  FUNC_1(VAR_8->MCList[VAR_10], VAR_12->dmi_addr, VAR_3);
 }







 if (VAR_9 != VAR_8->PacketFilter) {

  FUNC_0(VAR_8);
 }
 FUNC_4(&VAR_8->Lock, VAR_11);
}
