
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct aper_size_info_8 {int size_value; } ;
struct TYPE_7__ {int gatt_bus_addr; int gart_bus_addr; TYPE_1__* dev; int current_size; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 struct aper_size_info_8* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_5__* VAR_8 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_6(void)
{
 u32 VAR_9, VAR_10;
 u8 VAR_11;
 struct aper_size_info_8 *VAR_12;




 if (VAR_8->gatt_bus_addr & VAR_3) {
  FUNC_1(&VAR_8->dev->dev, "gatt bus addr too high");
  return -VAR_1;
 }

 VAR_12 = FUNC_0(VAR_8->current_size);


 FUNC_4(VAR_8->dev, VAR_5,
   VAR_12->size_value);


 FUNC_3(VAR_8->dev, VAR_0, &VAR_9);
 VAR_8->gart_bus_addr = (VAR_9 & VAR_7);

 FUNC_3(VAR_8->dev, VAR_6, &VAR_10);
 VAR_10 &= VAR_3;
 VAR_10 |= VAR_8->gatt_bus_addr;
 FUNC_5(VAR_8->dev, VAR_6, VAR_10);


 FUNC_5(VAR_8->dev, VAR_4, 0x0000);


 FUNC_2(VAR_8->dev, VAR_2, &VAR_11);
 FUNC_4(VAR_8->dev, VAR_2, VAR_11 | (1 << 1));



 return 0;
}
