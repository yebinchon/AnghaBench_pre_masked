
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {int link_advertising; int wanted_fc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct efx_nic *VAR_4, u32 VAR_5)
{
 VAR_4->link_advertising = VAR_5;
 if (VAR_5) {
  if (VAR_5 & VAR_1)
   VAR_4->wanted_fc |= (VAR_3 | VAR_2);
  else
   VAR_4->wanted_fc &= ~(VAR_3 | VAR_2);
  if (VAR_5 & VAR_0)
   VAR_4->wanted_fc ^= VAR_3;
 }
}
