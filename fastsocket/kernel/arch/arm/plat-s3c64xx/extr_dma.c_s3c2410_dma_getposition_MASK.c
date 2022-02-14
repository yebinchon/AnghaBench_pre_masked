
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_dma_chan {scalar_t__ regs; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 struct s3c2410_dma_chan* FUNC_2 (unsigned int) ;

int FUNC_3(unsigned int VAR_3,
       dma_addr_t *VAR_4, dma_addr_t *VAR_5)
{
 struct s3c2410_dma_chan *VAR_6 = FUNC_2(VAR_3);

 FUNC_0(!VAR_6);
 if (!VAR_6)
  return -VAR_0;

 if (VAR_4 != ((void*)0))
  *VAR_4 = FUNC_1(VAR_6->regs + VAR_2);

 if (VAR_5 != ((void*)0))
  *VAR_5 = FUNC_1(VAR_6->regs + VAR_1);

 return 0;
}
