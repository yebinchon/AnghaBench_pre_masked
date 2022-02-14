
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* netdev; } ;
struct net_device {int mtu; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;

int FUNC_3(struct net_device *VAR_3, int VAR_4)
{
 struct qlcnic_adapter *VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = 0;

 if (VAR_4 < VAR_2 || VAR_4 > VAR_1) {
  FUNC_0(&VAR_5->netdev->dev, "%d bytes < mtu < %d bytes"
   " not supported\n", VAR_1, VAR_2);
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_5, VAR_4);

 if (!VAR_6)
  VAR_3->mtu = VAR_4;

 return VAR_6;
}
