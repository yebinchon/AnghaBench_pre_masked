
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tenxpress_phy_data {int phy_mode; int loopback_mode; } ;
struct efx_nic {int phy_mode; int loopback_mode; struct tenxpress_phy_data* phy_data; } ;


 int FUNC_0 (struct efx_nic*) ;
 scalar_t__ FUNC_1 (struct tenxpress_phy_data*,struct efx_nic*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct tenxpress_phy_data*,struct efx_nic*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (struct efx_nic*) ;
 int FUNC_9 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_10(struct efx_nic *VAR_4)
{
 struct tenxpress_phy_data *VAR_5 = VAR_4->phy_data;
 bool VAR_6, VAR_7;

 if (VAR_4->phy_mode & (VAR_2 | VAR_3)) {
  VAR_5->phy_mode = VAR_4->phy_mode;
  return 0;
 }

 VAR_6 = (VAR_4->phy_mode == VAR_1 &&
      VAR_5->phy_mode != VAR_1);
 VAR_7 = (FUNC_2(VAR_5, VAR_4, FUNC_0(VAR_4)) ||
        FUNC_1(VAR_5, VAR_4, 1 << VAR_0));

 if (VAR_7 || VAR_6) {
  FUNC_9(VAR_4);
  FUNC_6(VAR_4);
 }

 FUNC_8(VAR_4);
 FUNC_5(VAR_4);
 FUNC_4(VAR_4);
 FUNC_7(VAR_4);
 FUNC_3(VAR_4);

 VAR_5->loopback_mode = VAR_4->loopback_mode;
 VAR_5->phy_mode = VAR_4->phy_mode;

 return 0;
}
