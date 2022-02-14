
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flexcop_pci {int count; int count_prev; scalar_t__ last_dma1_cur_pos; int * dma; } ;
struct flexcop_device {struct flexcop_pci* bus_specific; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct flexcop_device*,int *,int ) ;
 int FUNC_2 (struct flexcop_device*,int ,int ) ;
 int FUNC_3 (struct flexcop_device*,int ,int) ;
 int FUNC_4 (struct flexcop_device*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct flexcop_device *VAR_4, int VAR_5)
{
 struct flexcop_pci *VAR_6 = VAR_4->bus_specific;
 if (VAR_5) {
  FUNC_1(VAR_4, &VAR_6->dma[0], VAR_0);
  FUNC_1(VAR_4, &VAR_6->dma[1], VAR_1);
  FUNC_2(VAR_4, VAR_0, 0);
  FUNC_4(VAR_4, VAR_0,
    VAR_2 | VAR_3, 1);
  FUNC_0("DMA xfer enabled\n");

  VAR_6->last_dma1_cur_pos = 0;
  FUNC_3(VAR_4, VAR_0, 1);
  FUNC_0("IRQ enabled\n");
  VAR_6->count_prev = VAR_6->count;
 } else {
  FUNC_3(VAR_4, VAR_0, 0);
  FUNC_0("IRQ disabled\n");

  FUNC_4(VAR_4, VAR_0,
    VAR_2 | VAR_3, 0);
  FUNC_0("DMA xfer disabled\n");
 }
 return 0;
}
