
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef size_t u8 ;
struct TYPE_2__ {int phy_rate_20; int phy_rate_40; int phy_rate_20_sgi; int phy_rate_40_sgi; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline uint FUNC_0(u8 VAR_1, bool VAR_2, bool VAR_3)
{
 if (VAR_3) {
  if (VAR_2)
   return VAR_0[VAR_1].phy_rate_40_sgi;
  return VAR_0[VAR_1].phy_rate_20_sgi;
 }
 if (VAR_2)
  return VAR_0[VAR_1].phy_rate_40;

 return VAR_0[VAR_1].phy_rate_20;
}
