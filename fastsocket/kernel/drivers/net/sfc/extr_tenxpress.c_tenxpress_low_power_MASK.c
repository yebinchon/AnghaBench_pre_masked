
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int phy_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct efx_nic *VAR_2)
{
 FUNC_0(
  VAR_2, !!(VAR_2->phy_mode & VAR_0),
  VAR_1);
}
