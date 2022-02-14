
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int tx_chan; int adapter; } ;
struct net_device {int * dev_addr; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int,unsigned long long,unsigned long long,int ,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5, struct ethtool_wolinfo *VAR_6)
{
 int VAR_7 = 0;
 struct port_info *VAR_8 = FUNC_0(VAR_5);

 if (VAR_6->wolopts & ~VAR_4)
  return -VAR_1;
 FUNC_1(VAR_8->adapter, VAR_8->tx_chan,
       (VAR_6->wolopts & VAR_3) ? VAR_5->dev_addr : ((void*)0));
 if (VAR_6->wolopts & VAR_2) {
  VAR_7 = FUNC_2(VAR_8->adapter, VAR_8->tx_chan, 0xfe, ~0ULL,
     ~0ULL, 0, 0);
  if (!VAR_7)
   VAR_7 = FUNC_2(VAR_8->adapter, VAR_8->tx_chan, 1,
      ~6ULL, ~0ULL, VAR_0, 1);
 } else
  FUNC_2(VAR_8->adapter, VAR_8->tx_chan, 0, 0, 0, 0, 0);
 return VAR_7;
}
