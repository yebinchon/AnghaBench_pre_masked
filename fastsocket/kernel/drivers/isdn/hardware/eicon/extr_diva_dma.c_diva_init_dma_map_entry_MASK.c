
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _diva_dma_map_entry {void* addr_handle; void* local_ram_addr; int phys_bus_addr; } ;
typedef int dword ;



void FUNC_0 (struct _diva_dma_map_entry* VAR_0,
                              int VAR_1, void* VAR_2, dword VAR_3,
                              void* VAR_4) {
  VAR_0[VAR_1].phys_bus_addr = VAR_3;
  VAR_0[VAR_1].local_ram_addr = VAR_2;
  VAR_0[VAR_1].addr_handle = VAR_4;
}
