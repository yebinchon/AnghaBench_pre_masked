
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_descr_data {scalar_t__ buf; scalar_t__ after; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (unsigned int) ;

inline void FUNC_2(struct dma_descr_data *VAR_0, int VAR_1)
{

 asm volatile ("ftagd [%0]" :: "r" (VAR_0));

 if (VAR_1)
  FUNC_0(FUNC_1((unsigned)VAR_0->buf),
    (unsigned)(VAR_0->after - VAR_0->buf));
}
