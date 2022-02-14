
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int phy_mode; scalar_t__ state; int net_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum efx_phy_mode { ____Placeholder_efx_phy_mode } efx_phy_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct efx_nic* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct efx_nic *VAR_7 = FUNC_4(FUNC_8(VAR_3));
 enum efx_phy_mode VAR_8, VAR_9;
 int VAR_10;

 FUNC_5();
 VAR_8 = VAR_7->phy_mode;
 if (VAR_6 == 0 || *VAR_5 == '0')
  VAR_9 = VAR_8 & ~VAR_1;
 else
  VAR_9 = VAR_1;
 if (!((VAR_8 ^ VAR_9) & VAR_1)) {
  VAR_10 = 0;
 } else if (VAR_7->state != VAR_2 || FUNC_3(VAR_7->net_dev)) {
  VAR_10 = -VAR_0;
 } else {


  VAR_7->phy_mode = VAR_9;
  if (VAR_9 & VAR_1)
   FUNC_2(VAR_7);
  VAR_10 = FUNC_7(VAR_7);
  if (!VAR_10)
   VAR_10 = FUNC_0(VAR_7);
  if (!(VAR_9 & VAR_1))
   FUNC_1(VAR_7);
 }
 FUNC_6();

 return VAR_10 ? VAR_10 : VAR_6;
}
