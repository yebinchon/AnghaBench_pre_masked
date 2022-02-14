
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {unsigned int base_addr; } ;
struct ethtool_cmd {int supported; int duplex; scalar_t__ phy_address; int speed; int transceiver; int port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_15, struct ethtool_cmd *VAR_16)
{
    u16 VAR_17;
    unsigned int VAR_18 = VAR_15->base_addr;

    VAR_16->supported = (VAR_11 | VAR_10 |
 VAR_9 | VAR_8);

    FUNC_0(1);
    VAR_17 = FUNC_1(VAR_18 + VAR_1);
    VAR_16->port = (VAR_17 & VAR_0) ? VAR_5 : VAR_6;
    VAR_16->transceiver = VAR_14;
    VAR_16->speed = VAR_7;
    VAR_16->phy_address = VAR_18 + VAR_4;

    FUNC_0(0);
    VAR_17 = FUNC_1(VAR_18 + VAR_12);
    VAR_16->duplex = (VAR_17 & VAR_13) ? VAR_2 : VAR_3;

    return 0;
}
