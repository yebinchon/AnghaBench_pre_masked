
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {unsigned int base_addr; } ;
struct ethtool_cmd {scalar_t__ speed; scalar_t__ duplex; scalar_t__ port; scalar_t__ transceiver; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_9, struct ethtool_cmd *VAR_10)
{
    u16 VAR_11;
    unsigned int VAR_12 = VAR_9->base_addr;

    if (VAR_10->speed != VAR_5)
     return -VAR_2;
    if (VAR_10->duplex != VAR_1 && VAR_10->duplex != VAR_0)
     return -VAR_2;
    if (VAR_10->port != VAR_4 && VAR_10->port != VAR_3)
 return -VAR_2;
    if (VAR_10->transceiver != VAR_8)
     return -VAR_2;

    if (VAR_10->port == VAR_3)
 FUNC_3(VAR_9, 1);
    else
 FUNC_3(VAR_9, 0);

    FUNC_0(0);
    VAR_11 = FUNC_1(VAR_12 + VAR_6);
    if (VAR_10->duplex == VAR_0)
 VAR_11 |= VAR_7;
    else
 VAR_11 &= ~VAR_7;
    FUNC_2(VAR_11, VAR_12 + VAR_6);

    return 0;
}
