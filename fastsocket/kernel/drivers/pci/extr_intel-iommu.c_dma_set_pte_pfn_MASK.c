
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dma_pte {int val; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct dma_pte *VAR_1, unsigned long VAR_2)
{
 VAR_1->val |= (uint64_t)VAR_2 << VAR_0;
}
