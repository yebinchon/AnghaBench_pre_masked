
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aper_size_info_32 {int size_value; } ;
struct TYPE_4__ {int gatt_bus_addr; int gart_bus_addr; int scratch_page_page; TYPE_1__* dev; int current_size; } ;
struct TYPE_3__ {int dev; } ;


 struct aper_size_info_32* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct aper_size_info_32 *VAR_5;

 VAR_5 = FUNC_0(VAR_3->current_size);

 FUNC_1(&VAR_3->dev->dev, "configuring for size idx: %d\n",
   VAR_5->size_value);


 FUNC_3(VAR_3->dev,
  VAR_1,
  (VAR_3->gatt_bus_addr & 0xfffff000)
   | VAR_5->size_value);





 VAR_3->gart_bus_addr = 0;






 FUNC_3(VAR_3->dev,
  VAR_0, VAR_3->gart_bus_addr);


 if (VAR_4) {
  FUNC_3(VAR_3->dev,
           VAR_2,
           FUNC_2(VAR_3->scratch_page_page) >> 12);
 }

 return 0;
}
