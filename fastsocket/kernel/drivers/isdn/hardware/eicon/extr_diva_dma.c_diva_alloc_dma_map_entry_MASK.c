
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _diva_dma_map_entry {int busy; scalar_t__ local_ram_addr; } ;



int FUNC_0 (struct _diva_dma_map_entry* VAR_0) {
  int VAR_1;
  for (VAR_1 = 0; (VAR_0 && VAR_0[VAR_1].local_ram_addr); VAR_1++) {
    if (!VAR_0[VAR_1].busy) {
      VAR_0[VAR_1].busy = 1;
      return (VAR_1);
    }
  }
  return (-1);
}
