
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {scalar_t__ phy_type; struct efx_mcdi_phy_data* phy_data; } ;
struct efx_mcdi_phy_data {int flags; } ;


 unsigned int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char const** VAR_4 ;

__attribute__((used)) static const char *FUNC_1(struct efx_nic *VAR_5,
       unsigned int VAR_6)
{
 struct efx_mcdi_phy_data *VAR_7 = VAR_5->phy_data;

 if (VAR_7->flags & (1 << VAR_2)) {
  if (VAR_6 == 0)
   return "bist";
  --VAR_6;
 }

 if (VAR_7->flags & ((1 << VAR_1) |
         (1 << VAR_0))) {
  if (VAR_6 == 0)
   return "cable";
  --VAR_6;

  if (VAR_5->phy_type == VAR_3) {
   if (VAR_6 < FUNC_0(VAR_4))
    return VAR_4[VAR_6];
   VAR_6 -= FUNC_0(VAR_4);
  }
 }

 return ((void*)0);
}
