
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int coalesce_usecs; int max_coalesced_frames; } ;
struct ipoib_dev_priv {TYPE_1__ ethtool; int recv_cq; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; int rx_max_coalesced_frames; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct ipoib_dev_priv*,char*,int) ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
         struct ethtool_coalesce *VAR_3)
{
 struct ipoib_dev_priv *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;





 if (VAR_3->rx_coalesce_usecs > 0xffff ||
     VAR_3->rx_max_coalesced_frames > 0xffff)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4->recv_cq, VAR_3->rx_max_coalesced_frames,
      VAR_3->rx_coalesce_usecs);
 if (VAR_5 && VAR_5 != -VAR_1) {
  FUNC_1(VAR_4, "failed modifying CQ (%d)\n", VAR_5);
  return VAR_5;
 }

 VAR_4->ethtool.coalesce_usecs = VAR_3->rx_coalesce_usecs;
 VAR_4->ethtool.max_coalesced_frames = VAR_3->rx_max_coalesced_frames;

 return 0;
}
