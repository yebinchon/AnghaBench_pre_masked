
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ phy_spd; scalar_t__ phy_link; scalar_t__ phy_dupx; } ;
union cvmx_gmxx_rxx_int_en {int u64; TYPE_1__ s; } ;
struct octeon_ethernet {scalar_t__ imode; scalar_t__ port; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__*) ;
 struct octeon_ethernet* FUNC_7 (struct net_device*) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 () ;

void FUNC_9(struct net_device *VAR_4)
{
 struct octeon_ethernet *VAR_5 = FUNC_7(VAR_4);
 FUNC_3(VAR_4);





 if (((VAR_5->imode == VAR_0)
      && (VAR_5->port == 0))
     || (VAR_5->imode == VAR_1)) {

  if (!FUNC_8()) {

   union cvmx_gmxx_rxx_int_en VAR_6;
   int VAR_7 = FUNC_2(VAR_5->port);
   int VAR_8 = FUNC_1(VAR_5->port);





   VAR_6.u64 =
       FUNC_4(FUNC_0
       (VAR_8, VAR_7));
   VAR_6.s.phy_dupx = 0;
   VAR_6.s.phy_link = 0;
   VAR_6.s.phy_spd = 0;
   FUNC_5(FUNC_0(VAR_8, VAR_7),
           VAR_6.u64);
  }
 }


 VAR_3--;
 if (VAR_3 == 0)
  FUNC_6(VAR_2, &VAR_3);
}
