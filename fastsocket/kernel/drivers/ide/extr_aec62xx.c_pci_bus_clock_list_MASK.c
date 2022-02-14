
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct chipset_bus_clock_list_entry {scalar_t__ xfer_speed; scalar_t__ chipset_settings; } ;



__attribute__((used)) static u8 FUNC_0 (u8 VAR_0, struct chipset_bus_clock_list_entry * VAR_1)
{
 for ( ; VAR_1->xfer_speed ; VAR_1++)
  if (VAR_1->xfer_speed == VAR_0) {
   return VAR_1->chipset_settings;
  }
 return VAR_1->chipset_settings;
}
