
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nic {int (* mdio_ctrl ) (struct nic*,int,int ,int,int ) ;} ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nic*,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, int VAR_2, int VAR_3)
{
 struct nic *VAR_4 = FUNC_0(VAR_1);
 return VAR_4->mdio_ctrl(VAR_4, VAR_2, VAR_0, VAR_3, 0);
}
