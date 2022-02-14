
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl12xx_vif {int bss_type; int p2p; } ;
struct wl1271 {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static u8 FUNC_1(struct wl1271 *VAR_6, struct wl12xx_vif *VAR_7)
{
 switch (VAR_7->bss_type) {
 case 130:
  if (VAR_7->p2p)
   return VAR_3;
  else
   return VAR_0;

 case 128:
  if (VAR_7->p2p)
   return VAR_2;
  else
   return VAR_4;

 case 129:
  return VAR_1;

 default:
  FUNC_0("invalid bss_type: %d", VAR_7->bss_type);
 }
 return VAR_5;
}
