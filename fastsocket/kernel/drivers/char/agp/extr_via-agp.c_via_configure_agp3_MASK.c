
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct aper_size_info_16 {int dummy; } ;
struct TYPE_2__ {int gart_bus_addr; int gatt_bus_addr; int dev; int current_size; } ;


 int VAR_0 ;
 struct aper_size_info_16* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(void)
{
 u32 VAR_5;
 struct aper_size_info_16 *VAR_6;

 VAR_6 = FUNC_0(VAR_4->current_size);


 FUNC_1(VAR_4->dev, VAR_0, &VAR_5);
 VAR_4->gart_bus_addr = (VAR_5 & VAR_1);


 FUNC_2(VAR_4->dev, VAR_2,
  VAR_4->gatt_bus_addr & 0xfffff000);






 FUNC_1(VAR_4->dev, VAR_3, &VAR_5);
 FUNC_2(VAR_4->dev, VAR_3, VAR_5 | (3<<7));
 return 0;
}
