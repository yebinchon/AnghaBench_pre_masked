
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int phy_dupx; int phy_link; int phy_spd; } ;
union cvmx_gmxx_rxx_int_en {int u64; TYPE_2__ s; } ;
struct octeon_ethernet {scalar_t__ imode; scalar_t__ port; int poll; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct TYPE_3__ {int (* ndo_stop ) (struct net_device*) ;} ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct net_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 struct octeon_ethernet* FUNC_6 (struct net_device*) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int ,char*,scalar_t__*) ;
 int FUNC_9 (struct net_device*) ;

int FUNC_10(struct net_device *VAR_7)
{
 struct octeon_ethernet *VAR_8 = FUNC_6(VAR_7);
 int VAR_9;

 FUNC_3(VAR_7);
 VAR_7->netdev_ops->ndo_stop(VAR_7);
 if (VAR_6 == 0) {
  VAR_9 = FUNC_8(VAR_3, VAR_5,
    VAR_2, "RGMII", &VAR_6);
 }
 VAR_6++;





 if (((VAR_8->imode == VAR_0)
      && (VAR_8->port == 0))
     || (VAR_8->imode == VAR_1)) {

  if (!FUNC_7()) {

   union cvmx_gmxx_rxx_int_en VAR_10;
   int VAR_11 = FUNC_2(VAR_8->port);
   int VAR_12 = FUNC_1(VAR_8->port);





   VAR_10.u64 =
       FUNC_4(FUNC_0
       (VAR_12, VAR_11));
   VAR_10.s.phy_dupx = 1;
   VAR_10.s.phy_link = 1;
   VAR_10.s.phy_spd = 1;
   FUNC_5(FUNC_0(VAR_12, VAR_11),
           VAR_10.u64);
   VAR_8->poll = VAR_4;
  }
 }

 return 0;
}
