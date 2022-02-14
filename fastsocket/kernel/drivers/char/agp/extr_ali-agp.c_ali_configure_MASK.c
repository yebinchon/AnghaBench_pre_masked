
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct aper_size_info_32 {int size_value; } ;
struct TYPE_5__ {int gatt_bus_addr; int gart_bus_addr; scalar_t__ type; TYPE_1__* dev; int current_size; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct aper_size_info_32* FUNC_0 (int ) ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_4(void)
{
 u32 VAR_6;
 struct aper_size_info_32 *VAR_7;

 VAR_7 = FUNC_0(VAR_5->current_size);


 FUNC_2(VAR_5->dev, VAR_1, &VAR_6);
 VAR_6 = (((VAR_6 & 0x00000ff0) | (VAR_5->gatt_bus_addr & 0xfffff000))
   | (VAR_7->size_value & 0xf));
 FUNC_3(VAR_5->dev, VAR_1, VAR_6);


 FUNC_2(VAR_5->dev, VAR_3, &VAR_6);
 FUNC_3(VAR_5->dev, VAR_3, ((VAR_6 & 0xffffff00) | 0x00000010));


 FUNC_2(VAR_5->dev, VAR_0, &VAR_6);
 VAR_5->gart_bus_addr = (VAR_6 & VAR_4);
 FUNC_2(VAR_5->dev, VAR_3, &VAR_6);
 VAR_6 &= 0xffffff7f;
 FUNC_3(VAR_5->dev, VAR_3, VAR_6);

 return 0;
}
