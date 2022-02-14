
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_tlb_fault_handle {int dummy; } ;
struct gru_control_block_extended {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static inline struct gru_control_block_extended *FUNC_0(
     struct gru_tlb_fault_handle *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = (unsigned long)VAR_2 - VAR_1 + VAR_0;
 return (struct gru_control_block_extended*)VAR_3;
}
