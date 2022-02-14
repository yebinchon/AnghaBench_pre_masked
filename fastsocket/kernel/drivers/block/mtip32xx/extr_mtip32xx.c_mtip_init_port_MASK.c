
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtip_port {int command_list_dma; int rxfis_dma; scalar_t__ mmio; TYPE_1__* dd; scalar_t__* completed; } ;
struct TYPE_2__ {int slot_groups; scalar_t__ mmio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct mtip_port*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtip_port *VAR_11)
{
 int VAR_12;
 FUNC_0(VAR_11);


 if (FUNC_1(VAR_11->dd->mmio + VAR_1) & VAR_2) {
  FUNC_2((VAR_11->command_list_dma >> 16) >> 16,
    VAR_11->mmio + VAR_9);
  FUNC_2((VAR_11->rxfis_dma >> 16) >> 16,
    VAR_11->mmio + VAR_5);
 }

 FUNC_2(VAR_11->command_list_dma & 0xFFFFFFFF,
   VAR_11->mmio + VAR_8);
 FUNC_2(VAR_11->rxfis_dma & 0xFFFFFFFF, VAR_11->mmio + VAR_4);


 FUNC_2(FUNC_1(VAR_11->mmio + VAR_10), VAR_11->mmio + VAR_10);


 for (VAR_12 = 0; VAR_12 < VAR_11->dd->slot_groups; VAR_12++)
  FUNC_2(0xFFFFFFFF, VAR_11->completed[VAR_12]);


 FUNC_2(FUNC_1(VAR_11->mmio + VAR_7), VAR_11->mmio + VAR_7);


 FUNC_2(FUNC_1(VAR_11->dd->mmio + VAR_3),
     VAR_11->dd->mmio + VAR_3);


 FUNC_2(VAR_0, VAR_11->mmio + VAR_6);
}
