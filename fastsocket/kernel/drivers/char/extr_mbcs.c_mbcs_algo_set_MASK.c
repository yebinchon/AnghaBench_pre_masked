
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union intr_dest {scalar_t__ intr_dest_reg; void* int_vector; void* address; } ;
union dma_amo_dest {scalar_t__ dma_amo_dest_reg; void* dma_amo_mod_type; void* dma_amo_sys_addr; } ;
union algo_step {scalar_t__ algo_step_reg; void* alg_step_cnt; } ;
typedef void* uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(void *VAR_3,
       uint64_t VAR_4,
       uint64_t VAR_5,
       uint64_t VAR_6,
       uint64_t VAR_7, uint64_t VAR_8)
{
 union dma_amo_dest VAR_9;
 union intr_dest VAR_10;
 union algo_step VAR_11;

 VAR_11.algo_step_reg = 0;
 VAR_10.intr_dest_reg = 0;
 VAR_9.dma_amo_dest_reg = 0;

 VAR_9.dma_amo_sys_addr = VAR_4;
 VAR_9.dma_amo_mod_type = VAR_5;
 FUNC_0(VAR_3, VAR_0, VAR_9.dma_amo_dest_reg);

 VAR_10.address = VAR_6;
 VAR_10.int_vector = VAR_7;
 FUNC_0(VAR_3, VAR_1, VAR_10.intr_dest_reg);

 VAR_11.alg_step_cnt = VAR_8;
 FUNC_0(VAR_3, VAR_2, VAR_11.algo_step_reg);
}
