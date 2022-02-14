
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct aper_size_info_16 {int size_value; } ;
struct TYPE_2__ {int gart_bus_addr; int gatt_bus_addr; scalar_t__ capndx; int dev; int current_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct aper_size_info_16* FUNC_0 (int ) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__,int ) ;

int FUNC_4(void)
{
 u32 VAR_8;
 struct aper_size_info_16 *VAR_9;

 VAR_9 = FUNC_0(VAR_7->current_size);

 FUNC_1(VAR_7->dev, VAR_5, &VAR_8);
 VAR_7->gart_bus_addr = (VAR_8 & VAR_6);


 FUNC_3(VAR_7->dev, VAR_7->capndx+VAR_0, VAR_9->size_value);

 FUNC_2(VAR_7->dev, VAR_7->capndx+VAR_4, VAR_7->gatt_bus_addr);

 FUNC_1(VAR_7->dev, VAR_7->capndx+VAR_1, &VAR_8);
 FUNC_2(VAR_7->dev, VAR_7->capndx+VAR_1, VAR_8 | VAR_2 | VAR_3);
 return 0;
}
