
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union intr_dest {scalar_t__ intr_dest_reg; void* int_vector; void* address; } ;
union dma_localaddr {scalar_t__ dma_localaddr_reg; void* dma_ram_sel; void* dma_ram_addr; } ;
union dma_hostaddr {scalar_t__ dma_hostaddr_reg; void* dma_sys_addr; } ;
union dma_control {scalar_t__ dma_control_reg; void* pio_mem_n; void* done_int_en; void* done_amo_en; void* dma_op_length; } ;
union dma_amo_dest {scalar_t__ dma_amo_dest_reg; void* dma_amo_mod_type; void* dma_amo_sys_addr; } ;
typedef void* uint64_t ;


 int FUNC_0 (void*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_1(void *VAR_5,
         uint64_t VAR_6,
         uint64_t VAR_7,
         uint64_t VAR_8,
         uint64_t VAR_9,
         uint64_t VAR_10,
         uint64_t VAR_11,
         uint64_t VAR_12,
         uint64_t VAR_13,
         uint64_t VAR_14, uint64_t VAR_15,
         uint64_t VAR_16)
{
 union dma_control VAR_17;
 union dma_amo_dest VAR_18;
 union intr_dest VAR_19;
 union dma_localaddr VAR_20;
 union dma_hostaddr VAR_21;

 VAR_17.dma_control_reg = 0;
 VAR_18.dma_amo_dest_reg = 0;
 VAR_19.intr_dest_reg = 0;
 VAR_20.dma_localaddr_reg = 0;
 VAR_21.dma_hostaddr_reg = 0;

 VAR_21.dma_sys_addr = VAR_6;
 FUNC_0(VAR_5, VAR_4, VAR_21.dma_hostaddr_reg);

 VAR_20.dma_ram_addr = VAR_7;
 VAR_20.dma_ram_sel = VAR_8;
 FUNC_0(VAR_5, VAR_3, VAR_20.dma_localaddr_reg);

 VAR_17.dma_op_length = VAR_9;
 VAR_17.done_amo_en = VAR_10;
 VAR_17.done_int_en = VAR_11;
 VAR_17.pio_mem_n = VAR_12;
 FUNC_0(VAR_5, VAR_1, VAR_17.dma_control_reg);

 VAR_18.dma_amo_sys_addr = VAR_13;
 VAR_18.dma_amo_mod_type = VAR_14;
 FUNC_0(VAR_5, VAR_0, VAR_18.dma_amo_dest_reg);

 VAR_19.address = VAR_15;
 VAR_19.int_vector = VAR_16;
 FUNC_0(VAR_5, VAR_2, VAR_19.intr_dest_reg);

}
