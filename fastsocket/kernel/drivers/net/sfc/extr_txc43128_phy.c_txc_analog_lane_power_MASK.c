
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int phy_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct efx_nic*,int,int ) ;
 int FUNC_1 (struct efx_nic*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct efx_nic *VAR_11, int VAR_12)
{
 int VAR_13 = (1 << VAR_10) | (1 << VAR_9)
  | (1 << VAR_8) | (1 << VAR_7);
 int VAR_14 = (1 << VAR_6) | (1 << VAR_5)
  | (1 << VAR_4) | (1 << VAR_3);
 int VAR_15 = FUNC_0(VAR_11, VAR_12, VAR_2);
 int VAR_16 = FUNC_0(VAR_11, VAR_12, VAR_1);

 if (!(VAR_11->phy_mode & VAR_0)) {
  VAR_15 &= ~VAR_13;
  VAR_16 &= ~VAR_14;
 } else {
  VAR_15 |= VAR_13;
  VAR_16 |= VAR_14;
 }

 FUNC_1(VAR_11, VAR_12, VAR_2, VAR_15);
 FUNC_1(VAR_11, VAR_12, VAR_1, VAR_16);
}
