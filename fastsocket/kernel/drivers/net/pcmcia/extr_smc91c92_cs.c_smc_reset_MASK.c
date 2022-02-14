
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_id; } ;
struct smc_private {scalar_t__ manfid; scalar_t__ cardid; int cfg; int duplex; TYPE_1__ mii_if; } ;
struct net_device {unsigned int base_addr; int if_port; int* dev_addr; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct net_device*,int ,int,int) ;
 struct smc_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_24)
{
    unsigned int VAR_25 = VAR_24->base_addr;
    struct smc_private *VAR_26 = FUNC_4(VAR_24);
    int VAR_27;

    FUNC_0(0, "%s: smc91c92 reset called.\n", VAR_24->name);



    FUNC_1(0);

    FUNC_5(VAR_18, VAR_25 + VAR_16);
    FUNC_8(10);


    FUNC_5(VAR_17, VAR_25 + VAR_16);
    FUNC_5(VAR_20, VAR_25 + VAR_19);



    FUNC_1(1);


    FUNC_5(VAR_3 | VAR_5 | VAR_4,
  VAR_25 + VAR_2);
    FUNC_7(VAR_24, VAR_24->if_port);
    if ((VAR_26->manfid == VAR_10) &&
 (VAR_26->cardid != VAR_15))
 FUNC_5((VAR_24->if_port == 2 ? VAR_14 : 0) |
      (FUNC_2(VAR_25-0x10+VAR_13) & 0xff00),
      VAR_25 - 0x10 + VAR_13);


    for (VAR_27 = 0; VAR_27 < 6; VAR_27 += 2)
 FUNC_5((VAR_24->dev_addr[VAR_27+1]<<8)+VAR_24->dev_addr[VAR_27],
      VAR_25 + VAR_0 + VAR_27);


    FUNC_1(2);
    FUNC_5(VAR_11, VAR_25 + VAR_12);
    FUNC_5(0, VAR_25 + VAR_9);


    FUNC_1(0);
    FUNC_5(((VAR_26->cfg & VAR_1) ? 0 : VAR_22) |
  VAR_21 | VAR_23 | VAR_26->duplex, VAR_25 + VAR_19);
    FUNC_6(VAR_24);

    if (VAR_26->cfg & VAR_1) {
 FUNC_1(3);


 FUNC_3(VAR_24, VAR_26->mii_if.phy_id, 0, 0x8000);


 FUNC_3(VAR_24, VAR_26->mii_if.phy_id, 4, 0x01e1);


 FUNC_3(VAR_24, VAR_26->mii_if.phy_id, 0, 0x0000);
 FUNC_3(VAR_24, VAR_26->mii_if.phy_id, 0, 0x1200);
    }


    FUNC_1(2);
    FUNC_5((VAR_6 | VAR_8 | VAR_7) << 8,
  VAR_25 + VAR_9);
}
