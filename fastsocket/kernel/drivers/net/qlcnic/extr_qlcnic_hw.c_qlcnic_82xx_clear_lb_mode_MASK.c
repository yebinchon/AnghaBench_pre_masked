
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qlcnic_adapter {struct net_device* netdev; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_adapter*,int ) ;

int FUNC_3(struct qlcnic_adapter *VAR_5, u8 VAR_6)
{
 struct net_device *VAR_7 = VAR_5->netdev;

 VAR_6 = VAR_4;
 FUNC_2(VAR_5, 0);

 if (VAR_7->flags & VAR_1)
  VAR_6 = VAR_2;
 else if (VAR_7->flags & VAR_0)
  VAR_6 = VAR_3;

 FUNC_1(VAR_5, VAR_6);
 FUNC_0(1000);
 return 0;
}
