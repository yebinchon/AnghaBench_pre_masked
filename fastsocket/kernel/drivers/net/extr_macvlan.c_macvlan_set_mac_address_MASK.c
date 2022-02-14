
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int flags; int dev_addr; } ;
struct macvlan_dev {int port; struct net_device* lowerdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct macvlan_dev*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 struct macvlan_dev* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, void *VAR_5)
{
 struct macvlan_dev *VAR_6 = FUNC_6(VAR_4);
 struct net_device *VAR_7 = VAR_6->lowerdev;
 struct sockaddr *VAR_8 = VAR_5;
 int VAR_9;

 if (!FUNC_2(VAR_8->sa_data))
  return -VAR_0;

 if (!(VAR_4->flags & VAR_3)) {

  FUNC_5(VAR_4->dev_addr, VAR_8->sa_data, VAR_2);
 } else {

  if (FUNC_3(VAR_6->port, VAR_8->sa_data))
   return -VAR_1;

  VAR_9 = FUNC_0(VAR_7, VAR_8->sa_data);
  if (VAR_9)
   return VAR_9;

  FUNC_1(VAR_7, VAR_4->dev_addr);

  FUNC_4(VAR_6, VAR_8->sa_data);
 }
 return 0;
}
