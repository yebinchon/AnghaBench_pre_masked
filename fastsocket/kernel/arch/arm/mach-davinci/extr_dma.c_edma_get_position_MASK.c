
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edmacc_param {int dst; int src; } ;
typedef int dma_addr_t ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int ,struct edmacc_param*) ;

void FUNC_4(unsigned VAR_0, dma_addr_t *VAR_1, dma_addr_t *VAR_2)
{
 struct edmacc_param VAR_3;
 unsigned VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 VAR_0 = FUNC_0(VAR_0);

 FUNC_3(FUNC_2(VAR_4, VAR_0), &VAR_3);
 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_3.src;
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_3.dst;
}
