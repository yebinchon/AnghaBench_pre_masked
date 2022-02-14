
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct eth_dev {int lock; scalar_t__ port_usb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct eth_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, int VAR_5)
{
 struct eth_dev *VAR_6 = FUNC_0(VAR_4);
 unsigned long VAR_7;
 int VAR_8 = 0;


 FUNC_1(&VAR_6->lock, VAR_7);
 if (VAR_6->port_usb)
  VAR_8 = -VAR_0;
 else if (VAR_5 <= VAR_3 || VAR_5 > VAR_2)
  VAR_8 = -VAR_1;
 else
  VAR_4->mtu = VAR_5;
 FUNC_2(&VAR_6->lock, VAR_7);

 return VAR_8;
}
