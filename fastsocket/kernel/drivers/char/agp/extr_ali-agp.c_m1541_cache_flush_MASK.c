
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int page_order; } ;
struct TYPE_3__ {int gatt_bus_addr; int dev; int current_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_5, VAR_6;
 u32 VAR_7;

 FUNC_1();

 VAR_6 = 1 << FUNC_0(VAR_4->current_size)->page_order;
 for (VAR_5 = 0; VAR_5 < VAR_3 * VAR_6; VAR_5 += VAR_3) {
  FUNC_2(VAR_4->dev, VAR_1,
    &VAR_7);
  FUNC_3(VAR_4->dev, VAR_1,
    (((VAR_7 & VAR_0) |
      (VAR_4->gatt_bus_addr + VAR_5)) |
     VAR_2));
 }
}
