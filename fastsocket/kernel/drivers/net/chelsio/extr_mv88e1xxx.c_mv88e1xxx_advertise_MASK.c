
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cphy {int dummy; } ;


 unsigned int ADVERTISED_1000baseT_Full ;
 unsigned int ADVERTISED_1000baseT_Half ;
 unsigned int ADVERTISED_100baseT_Full ;
 unsigned int ADVERTISED_100baseT_Half ;
 unsigned int ADVERTISED_10baseT_Full ;
 unsigned int ADVERTISED_10baseT_Half ;
 unsigned int ADVERTISED_ASYM_PAUSE ;
 unsigned int ADVERTISED_PAUSE ;
 int ADVERTISE_100FULL ;
 int ADVERTISE_100HALF ;
 int ADVERTISE_10FULL ;
 int ADVERTISE_10HALF ;
 int ADVERTISE_PAUSE ;
 int ADVERTISE_PAUSE_ASYM ;
 int GBCR_ADV_1000FULL ;
 int GBCR_ADV_1000HALF ;
 int MII_ADVERTISE ;
 int MII_GBCR ;
 int simple_mdio_read (struct cphy*,int ,int*) ;
 int simple_mdio_write (struct cphy*,int ,int) ;

__attribute__((used)) static int mv88e1xxx_advertise(struct cphy *phy, unsigned int advertise_map)
{
 u32 val = 0;

 if (advertise_map &
     (ADVERTISED_1000baseT_Half | ADVERTISED_1000baseT_Full)) {
  (void) simple_mdio_read(phy, MII_GBCR, &val);
  val &= ~(GBCR_ADV_1000HALF | GBCR_ADV_1000FULL);
  if (advertise_map & ADVERTISED_1000baseT_Half)
   val |= GBCR_ADV_1000HALF;
  if (advertise_map & ADVERTISED_1000baseT_Full)
   val |= GBCR_ADV_1000FULL;
 }
 (void) simple_mdio_write(phy, MII_GBCR, val);

 val = 1;
 if (advertise_map & ADVERTISED_10baseT_Half)
  val |= ADVERTISE_10HALF;
 if (advertise_map & ADVERTISED_10baseT_Full)
  val |= ADVERTISE_10FULL;
 if (advertise_map & ADVERTISED_100baseT_Half)
  val |= ADVERTISE_100HALF;
 if (advertise_map & ADVERTISED_100baseT_Full)
  val |= ADVERTISE_100FULL;
 if (advertise_map & ADVERTISED_PAUSE)
  val |= ADVERTISE_PAUSE;
 if (advertise_map & ADVERTISED_ASYM_PAUSE)
  val |= ADVERTISE_PAUSE_ASYM;
 (void) simple_mdio_write(phy, MII_ADVERTISE, val);
 return 0;
}
