
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct netxen_adapter {void* rx_csum; } ;
struct net_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct netxen_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct netxen_adapter*,int ) ;
 int FUNC_3 (struct netxen_adapter*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, u32 VAR_4)
{
 struct netxen_adapter *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4) {
  VAR_5->rx_csum = VAR_4;
  return 0;
 }

 if (VAR_3->features & VAR_1) {
  if (FUNC_2(VAR_5, VAR_2))
   return -VAR_0;

  VAR_3->features &= ~VAR_1;
  FUNC_3(VAR_5);
  FUNC_0(VAR_3, "disabling LRO as rx_csum is off\n");
 }
 VAR_5->rx_csum = VAR_4;
 return 0;
}
