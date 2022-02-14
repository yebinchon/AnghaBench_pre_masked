
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_dma_chan {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct s3c2410_dma_chan*,int ) ;
 struct s3c2410_dma_chan* FUNC_1 (unsigned int) ;

int FUNC_2(unsigned int VAR_3, dma_addr_t *VAR_4, dma_addr_t *VAR_5)
{
 struct s3c2410_dma_chan *VAR_6 = FUNC_1(VAR_3);

 if (VAR_6 == ((void*)0))
  return -VAR_0;

 if (VAR_4 != ((void*)0))
   *VAR_4 = FUNC_0(VAR_6, VAR_2);

  if (VAR_5 != ((void*)0))
   *VAR_5 = FUNC_0(VAR_6, VAR_1);

  return 0;
}
