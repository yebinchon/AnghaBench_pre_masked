
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {scalar_t__ loopback_mode; int mdio; int phy_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned int) ;

bool FUNC_4(struct efx_nic *VAR_8, unsigned int VAR_9)
{


 if (FUNC_0(VAR_8))
  return 1;
 else if (FUNC_1(VAR_8) & VAR_0)
  return 0;
 else if (FUNC_2(VAR_8->phy_mode))
  return 0;
 else if (VAR_8->loopback_mode == VAR_2)
  VAR_9 &= ~(VAR_6 |
         VAR_5 |
         VAR_7 |
         VAR_4);
 else if (VAR_8->loopback_mode == VAR_1)
  VAR_9 &= ~(VAR_5 |
         VAR_7 |
         VAR_4);
 else if (VAR_8->loopback_mode == VAR_3)
  VAR_9 &= ~(VAR_7 |
         VAR_4);

 return FUNC_3(&VAR_8->mdio, VAR_9);
}
