
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int mdio_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct adapter*,int,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct port_info* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct adapter*,int ,int ,int ,int ,int) ;
 int FUNC_6 (struct adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, int VAR_5, int VAR_6,
    u16 VAR_7, u16 VAR_8)
{
 struct port_info *VAR_9 = FUNC_4(VAR_4);
 struct adapter *VAR_10 = VAR_9->adapter;
 int VAR_11;

 FUNC_2(&VAR_10->mdio_lock);
 VAR_11 = FUNC_1(VAR_10, VAR_5, VAR_6, VAR_7);
 if (!VAR_11) {
  FUNC_6(VAR_10, VAR_0, VAR_8);
  FUNC_6(VAR_10, VAR_1, FUNC_0(1));
  VAR_11 = FUNC_5(VAR_10, VAR_1, VAR_2, 0,
          VAR_3, 10);
 }
 FUNC_3(&VAR_10->mdio_lock);
 return VAR_11;
}
