
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int phy_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct efx_nic*,int,int ) ;
 int FUNC_1 (struct efx_nic*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct efx_nic *VAR_4, int VAR_5)
{
 int VAR_6 = (1 << VAR_1) | (1 << VAR_2);
 int VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_3);

 if (!(VAR_4->phy_mode & VAR_0))
  VAR_7 &= ~VAR_6;
 else
  VAR_7 |= VAR_6;

 FUNC_1(VAR_4, VAR_5, VAR_3, VAR_7);
}
