
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct aper_size_info_8 {int size_value; } ;
struct TYPE_2__ {int gart_bus_addr; int gatt_bus_addr; int dev; int current_size; } ;


 int VAR_0 ;
 struct aper_size_info_8* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(void)
{
 u32 VAR_6;
 struct aper_size_info_8 *VAR_7;

 VAR_7 = FUNC_0(VAR_5->current_size);

 FUNC_2(VAR_5->dev, VAR_2,
         VAR_7->size_value);

 FUNC_1(VAR_5->dev, VAR_0, &VAR_6);
 VAR_5->gart_bus_addr = (VAR_6 & VAR_1);


 FUNC_3(VAR_5->dev, VAR_4, 0x0000000f);


 FUNC_3(VAR_5->dev, VAR_3,
       (VAR_5->gatt_bus_addr & 0xfffff000) | 3);
 return 0;
}
