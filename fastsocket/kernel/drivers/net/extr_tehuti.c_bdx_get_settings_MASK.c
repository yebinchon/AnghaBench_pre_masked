
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rxf_desc {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int advertising; int maxtxpkt; int maxrxpkt; int autoneg; int transceiver; int port; int duplex; int speed; } ;
struct bdx_priv {int tdintcm; int rdintcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct bdx_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_11, struct ethtool_cmd *VAR_12)
{
 u32 VAR_13;
 u32 VAR_14;
 struct bdx_priv *VAR_15 = FUNC_1(VAR_11);

 VAR_13 = VAR_15->rdintcm;
 VAR_14 = VAR_15->tdintcm;

 VAR_12->supported = (VAR_8 | VAR_9);
 VAR_12->advertising = (VAR_0 | VAR_1);
 VAR_12->speed = VAR_7;
 VAR_12->duplex = VAR_4;
 VAR_12->port = VAR_6;
 VAR_12->transceiver = VAR_10;
 VAR_12->autoneg = VAR_2;



 VAR_12->maxtxpkt =
     ((FUNC_0(VAR_14) * VAR_5) / VAR_3);
 VAR_12->maxrxpkt =
     ((FUNC_0(VAR_13) * VAR_5) / sizeof(struct rxf_desc));

 return 0;
}
