
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pte {int val; } ;



__attribute__((used)) static inline void FUNC_0(struct dma_pte *VAR_0, unsigned long VAR_1)
{
 VAR_0->val = (VAR_0->val & ~3) | (VAR_1 & 3);
}
