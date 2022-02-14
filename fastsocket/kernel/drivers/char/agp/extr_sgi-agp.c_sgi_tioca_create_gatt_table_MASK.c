
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tioca_kernel {int ca_gfxgart_base; scalar_t__ ca_gfxgart; } ;
struct agp_bridge_data {int gatt_bus_addr; int * gatt_table_real; int * gatt_table; scalar_t__ dev_private_data; } ;



__attribute__((used)) static int FUNC_0(struct agp_bridge_data *VAR_0)
{
 struct tioca_kernel *VAR_1 =
     (struct tioca_kernel *)VAR_0->dev_private_data;

 VAR_0->gatt_table_real = (u32 *) VAR_1->ca_gfxgart;
 VAR_0->gatt_table = VAR_0->gatt_table_real;
 VAR_0->gatt_bus_addr = VAR_1->ca_gfxgart_base;

 return 0;
}
