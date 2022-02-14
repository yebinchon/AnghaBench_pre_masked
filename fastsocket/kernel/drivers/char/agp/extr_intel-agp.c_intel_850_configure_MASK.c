
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct aper_size_info_8 {int size_value; } ;
struct TYPE_2__ {int gart_bus_addr; int gatt_bus_addr; int dev; int current_size; } ;


 int VAR_0 ;
 struct aper_size_info_8* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(void)
{
 u32 VAR_8;
 u16 VAR_9;
 struct aper_size_info_8 *VAR_10;

 VAR_10 = FUNC_0(VAR_7->current_size);


 FUNC_3(VAR_7->dev, VAR_2, VAR_10->size_value);


 FUNC_1(VAR_7->dev, VAR_0, &VAR_8);
 VAR_7->gart_bus_addr = (VAR_8 & VAR_6);


 FUNC_4(VAR_7->dev, VAR_3, VAR_7->gatt_bus_addr);


 FUNC_4(VAR_7->dev, VAR_1, 0x0000);


 FUNC_2(VAR_7->dev, VAR_5, &VAR_9);
 FUNC_5(VAR_7->dev, VAR_5, VAR_9 | (1 << 9));

 FUNC_5(VAR_7->dev, VAR_4, 0x001c);
 return 0;
}
