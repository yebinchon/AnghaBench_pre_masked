
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pte {int val; } ;



__attribute__((used)) static inline bool FUNC_0(struct dma_pte *VAR_0)
{
 return (VAR_0->val & 3) != 0;
}
