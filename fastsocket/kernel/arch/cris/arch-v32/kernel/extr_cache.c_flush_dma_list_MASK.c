
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_descr_data {scalar_t__ next; scalar_t__ eol; } ;


 int FUNC_0 (struct dma_descr_data*,int) ;
 struct dma_descr_data* FUNC_1 (unsigned int) ;

void FUNC_2(struct dma_descr_data *VAR_0)
{
 while (1) {
  FUNC_0(VAR_0, 1);
  if (VAR_0->eol)
   break;
  VAR_0 = FUNC_1((unsigned)VAR_0->next);
 }
}
